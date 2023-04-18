//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonCloseClick(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonNewGameClick(TObject *Sender)
{
        game->NewGame();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormDestroy(TObject *Sender)
{
        delete game;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1Click(TObject *Sender)
{
        x = 0;
        y = 0;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel2Click(TObject *Sender)
{
        x = 0;
        y = 1;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel3Click(TObject *Sender)
{
        x = 0;
        y = 2;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel4Click(TObject *Sender)
{
        x = 1;
        y = 0;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel5Click(TObject *Sender)
{
        x = 1;
        y = 1;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel6Click(TObject *Sender)
{
        x = 1;
        y = 2;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel7Click(TObject *Sender)
{
        x = 2;
        y = 0;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel8Click(TObject *Sender)
{
        x = 2;
        y = 1;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9Click(TObject *Sender)
{
        x = 2;
        y = 2;
        game->CheckTurn(x,y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
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
        game = new GameXO(Panels,LabelInfo);
}
//---------------------------------------------------------------------------

