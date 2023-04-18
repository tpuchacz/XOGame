#include "Game.h"
GraKolkoKrzyzyk::GraKolkoKrzyzyk()
{
	kolejnosc = true;
}


//Czysci pole i resetuje kolejnosc
void GraKolkoKrzyzyk::nowaGra(TPanel *Panels[])
{
	kolejnosc = true;
	for(int i = 0; i < 9; i++)
	{
		Panels[i]->Caption = "";
	}
}

void GraKolkoKrzyzyk::sprawdzKolejnosc(TPanel *Panel){
        if(Panel->Caption == ""){
                if(kolejnosc%2 == 1)
                {
                        Panel->Caption = "X";
                        kolejnosc = false;
                }else if(kolejnosc%2 == 0)
                {
                        Panel->Caption = "O";
                        kolejnosc = true;
                }
                else if(kolejnosc == 9)
                {
                //Przy 9 ruchu gra zostaje zakonczona remisem
                }
        }
}
