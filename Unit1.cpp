//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormTicTacToe *FormTicTacToe;
//---------------------------------------------------------------------------
__fastcall TFormTicTacToe::TFormTicTacToe(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTicTacToe::ButtonCloseClick(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormTicTacToe::ButtonNewGameClick(TObject *Sender)
{
        //tekst,tytu³,flagi == kliknietyPrzycisk
        if(Application->MessageBoxA(
			"Czy chcesz rozpocz¹c now¹ grê?\n(Statystyki zostana usuniete)",
			"Nowa gra",
			MB_OKCANCEL || MB_ICONQUESTION) == IDOK)
        {
                game->NewGame();
        }
}
//---------------------------------------------------------------------------


void __fastcall TFormTicTacToe::FormDestroy(TObject *Sender)
{
        delete game;        
}
//---------------------------------------------------------------------------
void __fastcall TFormTicTacToe::Panel1Click(TObject *Sender)
{
        x = 0;
        y = 0;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel2Click(TObject *Sender)
{
        x = 0;
        y = 1;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------
void __fastcall TFormTicTacToe::Panel3Click(TObject *Sender)
{
        x = 0;
        y = 2;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel4Click(TObject *Sender)
{
        x = 1;
        y = 0;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel5Click(TObject *Sender)
{
        x = 1;
        y = 1;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel6Click(TObject *Sender)
{
        x = 1;
        y = 2;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel7Click(TObject *Sender)
{
        x = 2;
        y = 0;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel8Click(TObject *Sender)
{
        x = 2;
        y = 1;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Panel9Click(TObject *Sender)
{
        x = 2;
        y = 2;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::FormCreate(TObject *Sender)
{
        Panels[0][0] = Panel1;
        Panels[0][1] = Panel2;
        Panels[0][2] = Panel3;
        Panels[1][0] = Panel4;
        Panels[1][1] = Panel5;
        Panels[1][2] = Panel6;
        Panels[2][0] = Panel7;
        Panels[2][1] = Panel8;
        Panels[2][2] = Panel9;
        game = new GameXO(Panels);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::ButtonStatsClick(TObject *Sender)
{
        game->DisplayStatistics();        
}
//---------------------------------------------------------------------------

