//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *p7;
        TImage *p2;
        TImage *p3;
        TImage *p4;
        TImage *p5;
        TImage *p6;
        TImage *p1;
        TImage *p8;
        TImage *p9;
        TLabel *Label1;
        TImage *Image1;
        TLabel *Label2;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall p1Click(TObject *Sender);
        void __fastcall p2Click(TObject *Sender);
        void __fastcall p3Click(TObject *Sender);
        void __fastcall p4Click(TObject *Sender);
        void __fastcall p5Click(TObject *Sender);
        void __fastcall p6Click(TObject *Sender);
        void __fastcall p7Click(TObject *Sender);
        void __fastcall p8Click(TObject *Sender);
        void __fastcall p9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
