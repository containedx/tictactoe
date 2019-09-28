//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char v1,v2,v3,v4,v5,v6,v7,v8,v9; //pola gry  n=puste x,o
char who; //kogo kolej

void check()
{
      if ((v1==v2 && v2==v3 && v1!='n') ||
          (v4==v5 && v5==v6 && v4!='n') ||
          (v7==v8 && v8==v9 && v7!='n') ||
          (v1==v5 && v5==v9 && v9!='n') ||
          (v3==v5 && v5==v7 && v7!='n') ||
          (v1==v4 && v4==v7 && v1!='n') ||
          (v2==v5 && v5==v8 && v2!='n') ||
          (v3==v6 && v6==v9 && v9!='n') )
      {
            if (who=='o')
                 Application->MessageBox("The Winner is X!", "Game Over", MB_OK);

            else
                  Application->MessageBox("The Winner is O!", "Game Over", MB_OK);


             Form1->Label2->OnClick; ///?????????????? dlaczego nie dzia³a

       }
}


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

//void move()


void __fastcall TForm1::FormCreate(TObject *Sender)
{
   p1->Picture->LoadFromFile("img/empty.bmp");
   p2->Picture->LoadFromFile("img/empty.bmp");
   p3->Picture->LoadFromFile("img/empty.bmp");
   p4->Picture->LoadFromFile("img/empty.bmp");
   p5->Picture->LoadFromFile("img/empty.bmp");
   p6->Picture->LoadFromFile("img/empty.bmp");
   p7->Picture->LoadFromFile("img/empty.bmp");
   p8->Picture->LoadFromFile("img/empty.bmp");
   p9->Picture->LoadFromFile("img/empty.bmp");

   p1->Enabled=true;
   p2->Enabled=true;
   p3->Enabled=true;
   p4->Enabled=true;
   p5->Enabled=true;
   p6->Enabled=true;
   p7->Enabled=true;
   p8->Enabled=true;
   p9->Enabled=true;

   Image1->Picture->LoadFromFile("img/os.bmp");

   v1 = 'n';
   v2 = 'n';
   v3 = 'n';
   v4 = 'n';
   v5 = 'n';
   v6 = 'n';
   v7 = 'n';
   v8 = 'n';
   v9 = 'n';

   who = 'o'; //zaczyna kó³ko xD

}
//---------------------------------------------------------------------------
void __fastcall TForm1::p1Click(TObject *Sender)
{
     if( v1=='n')
     {
           if(who=='o')
           {
               p1->Picture->LoadFromFile("img/O.bmp");
               v1='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p1->Picture->LoadFromFile("img/x.bmp");
               v1='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p1->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::p2Click(TObject *Sender)
{
   if( v2=='n')
     {
           if(who=='o')
           {
               p2->Picture->LoadFromFile("img/O.bmp");
               v2='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p2->Picture->LoadFromFile("img/x.bmp");
               v2='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p2->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p3Click(TObject *Sender)
{
if( v3=='n')
     {
           if(who=='o')
           {
               p3->Picture->LoadFromFile("img/O.bmp");
               v3='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p3->Picture->LoadFromFile("img/x.bmp");
               v3='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p3->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p4Click(TObject *Sender)
{
if( v4=='n')
     {
           if(who=='o')
           {
               p4->Picture->LoadFromFile("img/O.bmp");
               v4='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p4->Picture->LoadFromFile("img/x.bmp");
               v4='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p4->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p5Click(TObject *Sender)
{
if( v5=='n')
     {
           if(who=='o')
           {
               p5->Picture->LoadFromFile("img/O.bmp");
               v5='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p5->Picture->LoadFromFile("img/x.bmp");
               v5='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p5->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p6Click(TObject *Sender)
{
if( v6=='n')
     {
           if(who=='o')
           {
               p6->Picture->LoadFromFile("img/O.bmp");
               v6='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p6->Picture->LoadFromFile("img/x.bmp");
               v6='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p6->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p7Click(TObject *Sender)
{
if( v7=='n')
     {
           if(who=='o')
           {
               p7->Picture->LoadFromFile("img/O.bmp");
               v7='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p7->Picture->LoadFromFile("img/x.bmp");
               v7='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p7->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p8Click(TObject *Sender)
{
if( v8=='n')
     {
           if(who=='o')
           {
               p8->Picture->LoadFromFile("img/O.bmp");
               v8='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p8->Picture->LoadFromFile("img/x.bmp");
               v8='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p8->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p9Click(TObject *Sender)
{
if( v9=='n')
     {
           if(who=='o')
           {
               p9->Picture->LoadFromFile("img/O.bmp");
               v9='o';
               Image1->Picture->LoadFromFile("img/xs.bmp");
               who = 'x';

           }

           else    //if who=='x'
           {
               p9->Picture->LoadFromFile("img/x.bmp");
               v9='x';
               Image1->Picture->LoadFromFile("img/Os.bmp");
               who = 'o';

           }

           p9->Enabled=false;
           check();

     }
}
//---------------------------------------------------------------------------

