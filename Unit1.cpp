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

void __fastcall TFormTicTacToe::N3Click(TObject *Sender)//Opcja Statystyki z menu
{
        game->DisplayStatistics();
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::N2Click(TObject *Sender)//Opcja Nowa Gra z menu
{
        //tekst,tytu�,flagi == kliknietyPrzycisk
        if(Application->MessageBoxA(
			"Czy chcesz rozpocz�c now� gr�?\n(Statystyki zostana usuniete)",
			"Nowa gra",
			MB_OKCANCEL || MB_ICONQUESTION) == IDOK)
        {
                game->NewGame();
        }        
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::N1Click(TObject *Sender)//Opcja Zako�cz z menu
{
        Close();        
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::BackgroundImageMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
  if (Button == mbLeft)
  {
    SendMessage(Handle, WM_LBUTTONUP, 0, 0);
    SendMessage(Handle, WM_NCLBUTTONDOWN, HTCAPTION, 0);
  }
}
//---------------------------------------------------------------------------


void __fastcall TFormTicTacToe::Button1Click(TObject *Sender)
{
        PopupMenu1->Popup(FormTicTacToe->Left+592,FormTicTacToe->Top+30);
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::SpeedButton1Click(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------


void __fastcall TFormTicTacToe::Image2MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        BackgroundImageMouseDown(Sender, Button, Shift, X, Y);
}
//---------------------------------------------------------------------------


void __fastcall TFormTicTacToe::SpeedButton2Click(TObject *Sender)
{
        Application->MainForm->WindowState = wsMinimized;
        //Poprawic
}
//---------------------------------------------------------------------------


void __fastcall TFormTicTacToe::Image3Click(TObject *Sender)
{
        PopupMenu2->Popup(FormTicTacToe->Left,FormTicTacToe->Top+30);        
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Zakocz1Click(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------

void __fastcall TFormTicTacToe::Minimalizuj1Click(TObject *Sender)
{
        SpeedButton2Click(Sender);
}
//---------------------------------------------------------------------------



void __fastcall TFormTicTacToe::Label1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        BackgroundImageMouseDown(Sender, Button, Shift, X, Y);        
}
//---------------------------------------------------------------------------

