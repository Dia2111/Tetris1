//---------------------------------------------------------------------------


#pragma hdrstop

#include "JocTetris.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
JOC_TETRIS::JOC_TETRIS(){
mFORMA= new FORMA(0,4);
Initializare();
mForma->Afisare(mGrid);
mDirectie=JOS;
}

void JOC_TETRIS::Initializare(){
for(int l=0;l<ROW; l++)
for(int c=0; c<COL; c++){
mGrid[l][c]=T_GOL;
}
}
void JOC_TETRIS::Afisare(TDrawGrid *aD_Grid){
TRect r;
for(int l=0; l<ROW; l++)
for(int c=0; c<COL; c++)
{
        r=aD_Grid->CellRect(r,c);
        switch(mGrid[l][c){
        case T_GOL :   aD_Grid->Canvas->Brush->Color=clWhite;
                       aD_Grid->Canvas->Rectangle(r);
                       break;
      //  case T_PIESAIN:aD_Grid->Canvas->Brush->Color=clBlue;
      //                 aD_Grid->Canvas->Rectangle(r);
      //                 break;
        case T_PIESA :   aD_Grid->Canvas->Brush->Color=clCian;
                         aD_Grid->Canvas->Rectangle(r);
                         break;
        case T_PIESAJ :  aD_Grid->Canvas->Brush->Color=clBlue;
                         aD_Grid->Canvas->Rectangle(r);
                         break;
        case T_PIESAL :  aD_Grid->Canvas->Brush->Color=clOrange;
                         aD_Grid->Canvas->Rectangle(r);
                         break;
        case T_PIESAO :  aD_Grid->Canvas->Brush->Color=clYellow;
                         aD_Grid->Canvas->Rectangle(r);
                         break;
        case T_PIESAS :  aD_Grid->Canvas->Brush->Color=clGreen;
                         aD_Grid->Canvas->Rectangle(r);
                         break;
        case T_PIESAT :  aD_Grid->Canvas->Brush->Color=clPurple;
                         aD_Grid->Canvas->Rectangle(r);
                         break;
        case T_PIESAZ :  aD_Grid->Canvas->Brush->Color=clRed;
                         aD_Grid->Canvas->Rectangle(r);
                         break;

  }
}

void JOC_TETRIS::Mutare(){
mTetris->Stergere(mGrid);
switch(mDirectie)
{
case JOS: mTetris->Mutare(0,+1); break;
case STANGA: mTetris->Mutare(-1,0); break;
case DREAPTA: mTetris->Mutare(+1,0); break;
}
mTetris->Afisare(mGrid);
}

void JOC_TETRIS::Directie(WORD &Key)
{
 switch(Key)
 {
  case VK_DOWN;  mDirectie=JOS; break;
  case VK_LEFT;  mDirectie=STANGA; break;
  case VK_RIGHT;  mDirectie=DREAPTA; break;
 }
}
