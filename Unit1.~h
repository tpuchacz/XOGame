//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "Game.h"
#include <Menus.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TFormTicTacToe : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TPanel *Panel4;
        TPanel *Panel5;
        TPanel *Panel6;
        TPanel *Panel7;
        TPanel *Panel8;
        TPanel *Panel9;
        TImage *BackgroundImage;
        TPopupMenu *IconPopupMenu;
        TMenuItem *DisplayStatsOption;
        TImage *TitleBarImage;
        TSpeedButton *ButtonClose;
        TMenuItem *NewGameOption;
        TSpeedButton *ButtonMinimize;
        TImage *Icon;
        TLabel *TitleLabel;
        TMenuItem *MinimizeOption;
        TMenuItem *CloseOption;
        void __fastcall FormDestroy(TObject *Sender);
        void __fastcall Panel1Click(TObject *Sender);
        void __fastcall Panel2Click(TObject *Sender);
        void __fastcall Panel3Click(TObject *Sender);
        void __fastcall Panel4Click(TObject *Sender);
        void __fastcall Panel5Click(TObject *Sender);
        void __fastcall Panel6Click(TObject *Sender);
        void __fastcall Panel7Click(TObject *Sender);
        void __fastcall Panel8Click(TObject *Sender);
        void __fastcall Panel9Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall BackgroundImageMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ButtonCloseClick(TObject *Sender);
        void __fastcall TitleBarImageMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ButtonMinimizeClick(TObject *Sender);
        void __fastcall IconClick(TObject *Sender);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall Minimalizuj1Click(TObject *Sender);
        void __fastcall TitleLabelMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall MinimizeOptionClick(TObject *Sender);
        void __fastcall CloseOptionClick(TObject *Sender);
        void __fastcall DisplayStatsOptionClick(TObject *Sender);
        void __fastcall NewGameOptionClick(TObject *Sender);
private:	// User declarations
        TPanel *Current;
        TPanel *Panels[3][3];
        GameXO * game;
        int x;
        int y;
public:		// User declarations
        __fastcall TFormTicTacToe(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormTicTacToe *FormTicTacToe;
//---------------------------------------------------------------------------
#endif
