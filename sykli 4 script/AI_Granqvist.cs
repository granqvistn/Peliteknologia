using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AI_Granqvist : PlayerControllerInterface
{
    // T�M� TULEE TEHT�V�SS� T�YDENT��
    // K�yt� vain PlayerControllerInterfacessa olevia metodeja TIMiss� olevan ohjeistuksen mukaan
    List<int> RUUDUT = new List<int>(); //Tallennetaan ruudun tyypit mit� on edess�
    List<int> KAANNY = new List<int>(); //Tallennetaan tehdyt k��nn�kset
    public override void DecideNextMove()
    {

        //T�ss� kohdassa etsit��n l�hin vihollinenn kent�lt� ja tallennetaan paikka listalta
        float lahin = Vector2.Distance(GetPosition(), GetEnemyPositions()[0]);
        int vihuPosInd = 0;

        for (int i = 1; i < GetEnemyPositions().Length; i++)
        {
            if (Vector2.Distance(GetPosition(), GetEnemyPositions()[i]) < lahin)
            {
                lahin = Vector2.Distance(GetPosition(), GetEnemyPositions()[i]);
                vihuPosInd = i;
            }
        }

        
        //Jos edess� on vihollinen niin ly�d��n
        //Lis�t��n vihollisen ruutu pelaajan ruutuihin
        if (GetForwardTileStatus() == 2)
        {
            RUUDUT.Add(2);
            nextMove = Hit;
        }

        
        
        //Kun edess� on sein�
        else if (GetForwardTileStatus() == 1)
        {

            
            //Tarkastetaan onko kolme viimeisint� ruutua, jos ovat olleet seini�
            //M��ritell��n teht�v� k��nn�s edellisen k��nn�ksen mukaan
            //T�ll� rikotaan mahdollinen jumiin j��minen, jos botti ei p��se seinist� irti
            if (RUUDUT[RUUDUT.Count - 1] == 1 && RUUDUT[RUUDUT.Count - 2] == 1 && RUUDUT[RUUDUT.Count - 3] == 1)
            {
                if (KAANNY[KAANNY.Count - 1] == 1)
                {
                    nextMove = TurnRight;
                }
                else
                {
                    nextMove = TurnLeft;
                }
            }

            //Rikotaan k��nn�slooppi, jos on k��nnytty nelj� kertaa oikealle putkeen, k��nnyt��n vasemmalle
            else if (KAANNY.Count > 6 && (KAANNY[KAANNY.Count - 1] == 1 && KAANNY[KAANNY.Count - 2] == 1 && KAANNY[KAANNY.Count - 3] == 1 && KAANNY[KAANNY.Count - 4] == 1))
            {
                
                KAANNY.Add(2);
                nextMove = TurnLeft;
            }


            //Rikotaan k��nn�slooppi, jos on k��nnytty nelj� kertaa oikealle putkeen, k��nnyt��n oikealle
            else if (KAANNY.Count > 6 && (KAANNY[KAANNY.Count - 1] == 2 && KAANNY[KAANNY.Count - 2] == 2 && KAANNY[KAANNY.Count - 3] == 2 && KAANNY[KAANNY.Count - 4] == 2))
            {
                
                KAANNY.Add(1);
                nextMove = TurnRight;
            }


            
            //M��ritell��n normaali siirto sein��n osuessa l�himm�n vihollisen position avulla
            //Verrataan vihollisen x ja y koordinaatteja botin omiin
            //M��ritell��n t�m�n ja botin oman suunnan mukaan seuraava k��nn�s
            //Mahdollistetaan seuraaminen
            else
            {
                if (GetEnemyPositions()[vihuPosInd].x >= GetPosition().x && GetEnemyPositions()[vihuPosInd].y >= GetPosition().y)
                {
                    if (GetRotation() == new Vector2(0, 1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                    else if (GetRotation() == new Vector2(0, -1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                    else if (GetRotation() == new Vector2(1, 0))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                    else
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                }


                else if (GetEnemyPositions()[vihuPosInd].x < GetPosition().x && GetEnemyPositions()[vihuPosInd].y >= GetPosition().y)
                {
                    if (GetRotation() == new Vector2(0, 1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                    else if (GetRotation() == new Vector2(0, -1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                    else if (GetRotation() == new Vector2(1, 0))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                    else
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                }


                else if (GetEnemyPositions()[vihuPosInd].x >= GetPosition().x && GetEnemyPositions()[vihuPosInd].y < GetPosition().y)
                {
                    if (GetRotation() == new Vector2(0, 1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                    else if (GetRotation() == new Vector2(0, -1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                    else if (GetRotation() == new Vector2(1, 0))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                    else
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                }


                else
                {
                    if (GetRotation() == new Vector2(0, 1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                    else if (GetRotation() == new Vector2(0, -1))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                    else if (GetRotation() == new Vector2(1, 0))
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(1);
                        nextMove = TurnRight;
                    }
                    else
                    {
                        
                        RUUDUT.Add(1);
                        KAANNY.Add(2);
                        nextMove = TurnLeft;
                    }
                }
            
            }

        }

        else
        {
            RUUDUT.Add(0);

            
            //Botti k��ntyy vihollista kohti, mik�li t�m�n x tai y koordinaatti on viereisess� ruudussa ja HP on j�ljell� yli 1
            //Tarkistetaan oma suunta, jonka mukaan m��ritell��n k��nn�s
            if (GetPosition().x + 1 == GetEnemyPositions()[vihuPosInd].x && GetPosition().y == GetEnemyPositions()[vihuPosInd].y && GetHP() > 1)
            {
                if (GetRotation() == new Vector2(0, 1))
                {

                    nextMove = TurnRight;
                }
                else if (GetRotation() == new Vector2(0, -1))
                {

                    nextMove = TurnLeft;
                }
            }

            else if (GetPosition().x - 1 == GetEnemyPositions()[vihuPosInd].x && GetPosition().y == GetEnemyPositions()[vihuPosInd].y && GetHP() > 1)
            {
                if (GetRotation() == new Vector2(0, 1))
                {

                    nextMove = TurnLeft;
                }
                else if (GetRotation() == new Vector2(0, -1))
                {

                    nextMove = TurnRight;
                }
            }

            else if (GetPosition().y + 1 == GetEnemyPositions()[vihuPosInd].y && GetPosition().x == GetEnemyPositions()[vihuPosInd].x && GetHP() > 1)
            {
                if (GetRotation() == new Vector2(1, 0))
                {

                    nextMove = TurnLeft;
                }
                else if (GetRotation() == new Vector2(-1, 0))
                {

                    nextMove = TurnRight;
                }
            }


            else if (GetPosition().y - 1 == GetEnemyPositions()[vihuPosInd].y && GetPosition().x == GetEnemyPositions()[vihuPosInd].x && GetHP() > 1)
            {
                if (GetRotation() == new Vector2(1, 0))
                {

                    nextMove = TurnRight;
                }
                else if (GetRotation() == new Vector2(-1, 0))
                {

                    nextMove = TurnLeft;
                }
            }
            

            
            //Botti k��ntyy vihollista karkuun, mik�li t�m�n x tai y koordinaatti on viereisess� ruudussa ja on 1 HP j�ljell�
            //Tarkistetaan oma suunta, jonka mukaan m��ritell��n k��nn�s
            if (GetPosition().x + 1 == GetEnemyPositions()[vihuPosInd].x && GetPosition().y == GetEnemyPositions()[vihuPosInd].y && GetHP() == 1)
            {
                if (GetRotation() == new Vector2(0, 1))
                {

                    nextMove = TurnLeft;
                }
                else if (GetRotation() == new Vector2(0, -1))
                {

                    nextMove = TurnRight;
                }
            }

            else if (GetPosition().x - 1 == GetEnemyPositions()[vihuPosInd].x && GetPosition().y == GetEnemyPositions()[vihuPosInd].y && GetHP() == 1)
            {
                if (GetRotation() == new Vector2(0, 1))
                {

                    nextMove = TurnRight;
                }
                else if (GetRotation() == new Vector2(0, -1))
                {

                    nextMove = TurnLeft;
                }
            }

            else if (GetPosition().y + 1 == GetEnemyPositions()[vihuPosInd].y && GetPosition().x == GetEnemyPositions()[vihuPosInd].x && GetHP() == 1)
            {
                if (GetRotation() == new Vector2(1, 0))
                {

                    nextMove = TurnRight;
                }
                else if (GetRotation() == new Vector2(-1, 0))
                {

                    nextMove = TurnLeft;
                }
            }


            else if (GetPosition().y - 1 == GetEnemyPositions()[vihuPosInd].y && GetPosition().x == GetEnemyPositions()[vihuPosInd].x && GetHP() == 1)
            {
                if (GetRotation() == new Vector2(1, 0))
                {

                    nextMove = TurnLeft;
                }
                else if (GetRotation() == new Vector2(-1, 0))
                {

                    nextMove = TurnRight;
                }
            }
            


            //Muuten liikutaan eteenp�in
            else
            {
                nextMove = MoveForward;
            }
        }
        
    
    }

   
}
