//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FereastraTetris.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormTetris *FormTetris;
//---------------------------------------------------------------------------
__fastcall TFormTetris::TFormTetris(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
 void __fastcall TFormTetris::btnExitClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TFormTetris::btnStartClick(TObject *Sender)
{
     joc= new JOC_TETRIS();
     joc->Afisare(DrawGrid1);
     tTimer->Enabled=true;
     DrawGrid1->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall TFormTetris::tTimerTimer(TObject *Sender)
{
   joc-> Mutare();
   joc-> Afisare(DrawGrid1);
   DrawGrid1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFormTetris::btnPauseClick(TObject *Sender)
{
    tTimer->Enabled=false;
    DrawGrid1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TFormTetris::DrawGrid1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        joc->Directie(Key);
        DrawGrid1->SetFocus();
}
//---------------------------------------------------------------------------

