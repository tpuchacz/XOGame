#include "Game.h"
GameXO::GameXO(TPanel *Panels[3][3])
{
        for(int i = 0; i < 3; i++)
	{
                for(int j = 0; j<3; j++)
                {
                        GameXO::Panels[i][j] = Panels[i][j];
                }
	}
        NewGame();
}


//Resetuje statystyki oraz pole gry
void GameXO::NewGame()
{
        winsCross = 0;
        winsCircle = 0;
        ClearField();
}

//Tylko resetuje pole gry
void GameXO::ClearField()
{
        turn = 1;
        for(int i = 0; i < 3; i++)
	{
                for(int j = 0; j<3; j++)
                {
                        Panels[i][j]->Caption = "";
                        magicSquare[i][j] = 0;
                }
	}
}

//Check turn sprawdza dostepnosc pola, czy dac kolko czy krzyzyk,
//oraz wypelnia tablice magicSquare na podstawie Tagów przypisanych panelom.
//S¹ przypisane na zasadzie magicznego kwadratu:
//https://pl.wikipedia.org/wiki/Kwadrat_magiczny_(matematyka)
void GameXO::CheckTurn(int x, int y){
        if(Panels[x][y]->Caption == ""){
                if(turn % 2 == 1)
                {
                        Panels[x][y]->Caption = "X";
                        magicSquare[x][y] = Panels[x][y]->Tag;
                        ++turn;
                }else if(turn % 2 == 0)
                {
                        Panels[x][y]->Caption = "O";
                        magicSquare[x][y] = -Panels[x][y]->Tag; 
                        ++turn;
                }
                else if(turn == 9)
                {
                        NewGame();
                }
                CheckWin(x,y);
        }else
                Application->MessageBox("Te pole jest zajête!","B³¹d!",MB_ICONWARNING);
}

void GameXO::CheckWin(int x, int y)
{
        //Sprawdzenie zwyciezcy z pomoc¹ magicznego kwadratu
        //W przypadku implementacji wyboru rozmiaru pola trzeba
        //dostosowac koordynaty, ale na ten moment wystarczy pole 3x3
        if((magicSquare[x][0] + magicSquare[x][1] + magicSquare[x][2]) == 15
        || (magicSquare[0][y] + magicSquare[1][y] + magicSquare[2][y]) == 15
        || (magicSquare[0][0] + magicSquare[1][1] + magicSquare[2][2]) == 15
        || (magicSquare[0][2] + magicSquare[1][1] + magicSquare[2][0]) == 15)
        {
                Application->MessageBox("Wygrywa krzy¿yk!","Gratulacje!");
                ++winsCross;
                ClearField();        
        }
        else if((magicSquare[x][0] + magicSquare[x][1] + magicSquare[x][2]) == -15
             || (magicSquare[0][y] + magicSquare[1][y] + magicSquare[2][y]) == -15
             || (magicSquare[0][0] + magicSquare[1][1] + magicSquare[2][2]) == -15
             || (magicSquare[0][2] + magicSquare[1][1] + magicSquare[2][0]) == -15)
        {
                Application->MessageBox("Wygrywa kó³ko!","Gratulacje!");
                ++winsCircle;
                ClearField();        
        }
}

void GameXO::DisplayStatistics()
{
        AnsiString text = "Kó³ko: " + AnsiString(winsCircle) + "   Krzy¿yk: " + AnsiString(winsCross);
        Application->MessageBox(text.c_str(), "Obecny wynik");        
}


