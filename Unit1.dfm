object Form1: TForm1
  Left = 417
  Top = 148
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'TIC TAC TOE GAME'
  ClientHeight = 683
  ClientWidth = 1062
  Color = clMaroon
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object p7: TImage
    Left = 152
    Top = 408
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p7Click
  end
  object p2: TImage
    Left = 304
    Top = 104
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p2Click
  end
  object p3: TImage
    Left = 456
    Top = 104
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p3Click
  end
  object p4: TImage
    Left = 152
    Top = 256
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p4Click
  end
  object p5: TImage
    Left = 304
    Top = 256
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p5Click
  end
  object p6: TImage
    Left = 456
    Top = 256
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p6Click
  end
  object p1: TImage
    Left = 152
    Top = 104
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p1Click
  end
  object p8: TImage
    Left = 304
    Top = 408
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p8Click
  end
  object p9: TImage
    Left = 456
    Top = 408
    Width = 150
    Height = 150
    Cursor = crHandPoint
    OnClick = p9Click
  end
  object Label1: TLabel
    Left = 648
    Top = 152
    Width = 337
    Height = 57
    AutoSize = False
    Caption = 'your turn ->'
    Color = clMaroon
    Font.Charset = ANSI_CHARSET
    Font.Color = clGray
    Font.Height = -40
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Image1: TImage
    Left = 928
    Top = 160
    Width = 38
    Height = 41
  end
  object Label2: TLabel
    Left = 680
    Top = 368
    Width = 305
    Height = 74
    Cursor = crHandPoint
    Caption = 'NEW GAME'
    Color = clActiveCaption
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Showcard Gothic'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    OnClick = FormCreate
  end
end
