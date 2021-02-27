//Pelin scenet
var peli = new Phaser.Scene("peli");
var valikko = new Phaser.Scene("valikko");
var loppu = new Phaser.Scene("loppu");

var pisteet = 0;  //Pelin aikana kerätyt pisteet

var config = {
    type: Phaser.WEBGL,
    width: 640,
    height: 480,
    backgroundColor: '#000000',
    parent: 'phaser-example',
    
};

var snake;
var omena;
var kontrollit;


// Suunnat
var UP = 0;
var DOWN = 1;
var LEFT = 2;
var RIGHT = 3;

var game = new Phaser.Game(config);


//Ladataan peli-scenen kuvat
peli.preload = function()
{
    this.load.image('omena', 'omena.png');
    this.load.image('kaarme', 'kaarme.png');
    this.load.image('rajahdys', 'rajahdys.png');
    this.load.image('ylos', 'ylos.png');
    this.load.image('vasen', 'vasen.png');
    this.load.image('alas', 'alas.png');
    this.load.image('oikea', 'oikea.png');    
};

//Luodaan peli
peli.create = function()
{   
    peli.ylos();
    peli.vasen();
    peli.oikea();
    peli.alas();
    
    var Food = new Phaser.Class({

        Extends: Phaser.GameObjects.Image,

        initialize:

        function Food (scene, x, y)
        {
            Phaser.GameObjects.Image.call(this, scene);

            this.setTexture('omena');
            this.setPosition(x * 16, y * 16);
            this.setOrigin(0);

            this.total = 0;

            scene.children.add(this);
        },

        //Kasvatetaan pisteitä sekä kutsutaan particle emitteriä
        eat: function ()
        {
            this.total++;
            pisteet++;
            peli.partikkelit();
        }

    });

    var Snake = new Phaser.Class({

        initialize:

        function Snake (scene, x, y)
        {            
            this.headPosition = new Phaser.Geom.Point(x, y);

            this.body = scene.add.group();

            this.head = this.body.create(x * 16, y * 16, 'kaarme');
            this.head.setOrigin(0);

            this.alive = true;

            this.speed = 100;

            this.moveTime = 0;

            this.tail = new Phaser.Geom.Point(x, y);

            this.heading = RIGHT;
            this.direction = RIGHT;
        },

        update: function (time)
        {
            if (time >= this.moveTime)
            {
                return this.move(time);
            }
        },

        faceLeft: function ()
        {
            if (this.direction === UP || this.direction === DOWN)
            {
                this.heading = LEFT;
            }
        },

        faceRight: function ()
        {
            if (this.direction === UP || this.direction === DOWN)
            {
                this.heading = RIGHT;
            }
        },

        faceUp: function ()
        {
            if (this.direction === LEFT || this.direction === RIGHT)
            {
                this.heading = UP;
            }
        },

        faceDown: function ()
        {
            if (this.direction === LEFT || this.direction === RIGHT)
            {
                this.heading = DOWN;
            }
        },

        move: function (time)
        {
            
            //Päivitetään kärmeen pään sijainti
            //Mikäli menee ulos reunasta, tuodaan ulos vastakkaiselta puolelta
            switch (this.heading)
            {
                case LEFT:
                    this.headPosition.x = Phaser.Math.Wrap(this.headPosition.x - 1, 0, 40);
                    break;

                case RIGHT:
                    this.headPosition.x = Phaser.Math.Wrap(this.headPosition.x + 1, 0, 40);
                    break;

                case UP:
                    this.headPosition.y = Phaser.Math.Wrap(this.headPosition.y - 1, 0, 30);
                    break;

                case DOWN:
                    this.headPosition.y = Phaser.Math.Wrap(this.headPosition.y + 1, 0, 30);
                    break;
            }

            this.direction = this.heading;

            //  Päivitetään muut käärmeen palikat
            Phaser.Actions.ShiftPosition(this.body.getChildren(), this.headPosition.x * 16, this.headPosition.y * 16, 1, this.tail);

            //  Tarkistetaan onko hännän osilla samat x ja y koordinaatit kuin päällä
            //  Törmäyksen tarkistus
            var hitBody = Phaser.Actions.GetFirst(this.body.getChildren(), { x: this.head.x, y: this.head.y }, 1);


            //Jos käärme kuolee, kutsutaan peli.kuole funktiota
            if (hitBody)
            {
                this.alive = false;

                peli.kuole();

                return false;
            }
            else
            {
                this.moveTime = time + this.speed;

                return true;
            }
        },

        //Käärmeen kasvattamiseen käytettävä funktio
        grow: function ()
        {
            var newPart = this.body.create(this.tail.x, this.tail.y, 'kaarme');

            newPart.setOrigin(0);
        },

        //Omenan kanssa törmäys, mikäli käärmeen pään x ja y ovat samat kuin omenan
        //Kutsutaan kasvua ja syömistä
        collideWithFood: function (omena)
        {   
            if (this.head.x === omena.x && this.head.y === omena.y)
            {
                this.grow();
                
                omena.eat();

                //  Viiden syödyn omenan välein kasvatetaan käärmeen nopeutta
                if (this.speed > 20 && omena.total % 5 === 0)
                {
                    this.speed -= 5;
                }

                return true;
            }
            else
            {
                return false;
            }
        },

        updateGrid: function (grid)
        {
            this.body.children.each(function (segment) {

                var bx = segment.x / 16;
                var by = segment.y / 16;

                grid[by][bx] = false;

            });

            return grid;
        }

    });

    omena = new Food(this, 3, 4);

    snake = new Snake(this, 8, 8);

    //  Loudaan näppäimistön kontrollit
    kontrollit = this.input.keyboard.createCursorKeys();
};

peli.update = function(time, delta)
{
    if (!snake.alive)
    {
        return;
    }

    //Liikutetaan käärmettä näppäimen osoittamaan suuntaan
    //Tarkistetaan ettei tulosuuntaan voi liikkua
    if (kontrollit.left.isDown)
    {
        snake.faceLeft();
    }
    else if (kontrollit.right.isDown)
    {
        snake.faceRight();
    }
    else if (kontrollit.up.isDown)
    {
        snake.faceUp();
    }
    else if (kontrollit.down.isDown)
    {
        snake.faceDown();
    }

    if (snake.update(time))
    {
        //Tarkastetaan osuma omenaan, jos käärmettä on päivitetty

        if (snake.collideWithFood(omena))
        {
            peli.repositionFood();
        }
    }
};

/**
* Laitetaan omena pelikentälle, mikäli siellä on tilaa
* @method repositionFood
* @return {boolean} true jos ruoka laitettiin kentälle, muuten false
*/
peli.repositionFood = function()
{
    //  Luodaan taulukko, joka olettaa että ruoka käy jokaiseen ruutuun
    var testGrid = [];

    for (var y = 0; y < 30; y++)
    {
        testGrid[y] = [];

        for (var x = 0; x < 40; x++)
        {
            testGrid[y][x] = true;
        }
    }

    snake.updateGrid(testGrid);

    // Poistetaan taulukosta ruudut, jotka ei käy ruualle
    var validLocations = [];

    for (var y = 0; y < 30; y++)
    {
        for (var x = 0; x < 40; x++)
        {
            if (testGrid[y][x] === true)
            {
                //Laitetaan ruoka kentälle, jos paikka on validi
                validLocations.push({ x: x, y: y });
            }
        }
    }

    if (validLocations.length > 0)
    {
        //valitaan randomilla ruoan paikka
        var pos = Phaser.Math.RND.pick(validLocations);

        //Asetetaan ruoka valitulle paikalle
        omena.setPosition(pos.x * 16, pos.y * 16);

        return true;
    }
    else
    {
        return false;
    }
};


//Vaihtoehtoiset painikkeet kosketusnäyttöä varten
//Toimivat kuvakkeilla joista siirytään painettaessa käärmeen liikuttamiseen
peli.ylos = function(){
    var painike = this.add.sprite(50, 450, 'ylos');
    painike.setInteractive({ useHandCursor: true });
    painike.on('pointerdown', () => snake.faceUp());
};

peli.vasen = function(){
    var painike = this.add.sprite(150, 450, 'vasen');
    painike.setInteractive({ useHandCursor: true });
    painike.on('pointerdown', () => snake.faceLeft());
};

peli.oikea = function(){
    var painike = this.add.sprite(250, 450, 'oikea');
    painike.setInteractive({ useHandCursor: true });
    painike.on('pointerdown', () => snake.faceRight());
};

peli.alas = function(){
    var painike = this.add.sprite(350, 450, 'alas');
    painike.setInteractive({ useHandCursor: true });
    painike.on('pointerdown', () => snake.faceDown());
};


//Pelin particle emmitter
peli.partikkelit = function()
{
    var particles = this.add.particles('rajahdys');
    var emitter = particles.createEmitter();
    emitter.setPosition(snake.head.x, snake.head.y);
    emitter.setSpeed(200);
    emitter.setBlendMode(Phaser.BlendModes.ADD);
    emitter.setLifespan(100);
    this.time.delayedCall(600, function() {
        particles.destroy();
    });
};

//Käärmeen kuollessa nollataan loppu scene
//Siirrytään loppu sceneen
peli.kuole = function()
{
    loppu.registry.destroy();
    loppu.events.off();    
    this.scene.switch('loppu');
    loppu.scene.restart();
};

//Ladataan valikko-scenen kuva ja ääni
valikko.preload = function()
{
    this.load.image('otsikko', 'otsikko.png');
    this.load.audio('aani', 'aani.wav');
};

//Luodaan valikko-scene
valikko.create = function()
{
    var ots = this.add.sprite(200, 100, 'otsikko');
    ots.setOrigin(0,0);    
    ots.setInteractive({ useHandCursor: true });
    ots.on('pointerdown', () => this.clickButton());
};

//valikon klikkauksesta kutsuttava funktio
//Vaihtaa peli-sceneen ja soittaa äänen
valikko.clickButton = function() {
    this.sound.play('aani');
    this.scene.switch('peli');
};

//Ladataan loppu-scenen ääni
loppu.preload = function()
{
    this.load.audio('aani', 'aani.wav');
};

//Luodaan loppu-scene
loppu.create = function()
{   
    var teksti = this.add.text(game.centerX, game.centerY, 'Hävisit :P aloita klikkaamalla tästä',{
        font: "34px Arial",
        fill: "#2E8B57"
    });
    this.add.text(100, 100, 'Sait pisteitä ' + pisteet, {
        font: "20px Arial",
        fill: "#2E8B57",        
    });
    teksti.setInteractive({ useHandCursor: true });
    teksti.on('pointerdown', () => this.clickButton());
};

//Lopun klikkauksesta kutsuttava funktio
//Nollataan pisteet
//Nollataan pelikenttä ja aloitetaan se alusta
//Vaihdetaan peli-sceneen
loppu.clickButton = function()
{
    pisteet = 0;
    peli.registry.destroy();
    peli.events.off();
    this.sound.play('aani');
    this.scene.switch('peli');
    peli.scene.restart();
};

//Lisätään scenet ja aloitetaan valikko scene
game.scene.add("peli", peli);
game.scene.add("valikko", valikko);
game.scene.add("loppu", loppu);
game.scene.start("valikko");

