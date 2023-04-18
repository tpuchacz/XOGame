#include "Game.h"
GameXO::GameXO(TPanel *Panels[3][3], TLabel *LabelInfo)
{
	turn = true;
        for(int i = 0; i < 3; i++)
	{
                for(int j = 0; j<3; j++)
                {
                        GameXO::Panels[i][j] = Panels[i][j];
                }
	}
        GameXO::LabelInfo = LabelInfo;
}


//Czysci pole i resetuje kolejnosc
void GameXO::NewGame()
{
	turn = true;
        LabelInfo->Caption = "";
	for(int i = 0; i < 3; i++)
	{
                for(int j = 0; j<3; j++)
                {
                        Panels[i][j]->Caption = "";
                }
	}
}

void GameXO::CheckTurn(int x, int y){
        if(Panels[x][y]->Caption == ""){
                LabelInfo->Caption = "";
                if(turn % 2 == 1)
                {
                        Panels[x][y]->Caption = "X";
                        turn = false;
                }else if(turn % 2 == 0)
                {
                        Panels[x][y]->Caption = "O";
                        turn = true;
                }
                else if(turn == 9)
                {
                //Przy 9 ruchu gra zostaje zakonczona remisem
                }
                CheckWin(x,y);
        }else
                LabelInfo->Caption = "Te pole jest zajête!";
}

void GameXO::CheckWin(int x, int y)
{
        //Sprawdzenie zwyciezcy przy pomocy magicznego kwadratu
        int magicSquare = Panels[x][y]->Tag;
}
