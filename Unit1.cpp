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
        Panels[0] = Panel1;
        Panels[1] = Panel2;
        Panels[2] = Panel3;
        Panels[3] = Panel4;
        Panels[4] = Panel5;
        Panels[5] = Panel6;
        Panels[6] = Panel7;
        Panels[7] = Panel8;
        Panels[8] = Panel9;
        gra = new GraKolkoKrzyzyk;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonCloseClick(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        gra->nowaGra(Panels);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormDestroy(TObject *Sender)
{
        delete gra;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1Click(TObject *Sender)
{
        Current = (TPanel*)Sender;
        gra->sprawdzKolejnosc(Current);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel2Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel3Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel4Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel5Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel6Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel7Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel8Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9Click(TObject *Sender)
{
        Panel1Click(Sender);
}
//---------------------------------------------------------------------------

