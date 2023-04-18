object FormTicTacToe: TFormTicTacToe
  Left = 1140
  Top = 150
  BorderStyle = bsNone
  Caption = 'K'#243#322'ko Krzy'#380'yk'
  ClientHeight = 651
  ClientWidth = 600
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object LabelInfo: TLabel
    Left = 8
    Top = 8
    Width = 6
    Height = 32
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Panel1: TPanel
    Tag = 2
    Left = 0
    Top = 50
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Panel1Click
  end
  object Panel2: TPanel
    Tag = 7
    Left = 200
    Top = 50
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Panel2Click
  end
  object Panel3: TPanel
    Tag = 6
    Left = 400
    Top = 50
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Panel3Click
  end
  object Panel4: TPanel
    Tag = 9
    Left = 0
    Top = 250
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Panel4Click
  end
  object Panel5: TPanel
    Tag = 5
    Left = 200
    Top = 250
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Panel5Click
  end
  object Panel6: TPanel
    Tag = 1
    Left = 400
    Top = 250
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = Panel6Click
  end
  object Panel7: TPanel
    Tag = 4
    Left = 0
    Top = 450
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = Panel7Click
  end
  object Panel8: TPanel
    Tag = 3
    Left = 200
    Top = 450
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Panel8Click
  end
  object Panel9: TPanel
    Tag = 8
    Left = 400
    Top = 450
    Width = 200
    Height = 200
    BorderStyle = bsSingle
    Color = clGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Panel9Click
  end
  object ButtonClose: TButton
    Left = 550
    Top = 0
    Width = 50
    Height = 50
    Cursor = crHandPoint
    Caption = 'X'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -27
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = ButtonCloseClick
  end
  object ButtonNewGame: TButton
    Left = 475
    Top = 0
    Width = 75
    Height = 50
    Cursor = crHandPoint
    Caption = 'Nowa Gra'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = ButtonNewGameClick
  end
  object ButtonStats: TButton
    Left = 375
    Top = 0
    Width = 100
    Height = 50
    Cursor = crHandPoint
    Caption = 'Poka'#380' statystyki'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    OnClick = ButtonStatsClick
  end
end
