//---------------------------------------------------------------------------


#pragma hdrstop

#include "forma.h"


//---------------------------------------------------------------------------

#pragma package(smart_init)
FORMA::FORMA(int aLinia, int aColoana){
       // mPiesain=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        for(int i=0; i<=mLungime;i++){
        mPiesa[i]=new BLOC(aLinia, aColoana+(i+1), T_PIESA);
        }
}

void FORMA::Afisare(int aGrid[ROW][COL]){
//mPiesain->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesa[i]->Afisare(aGrid) ;
}
}

void FORMA::Stergere(int aGrid[ROW][COL]){
//mPiesain->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesa[i]->Stergere(aGrid) ;
}
}
void FORMA::Mutare(int dl, int dc){
 //mPiesain->Mutare(dl,dc);
 //mPiesa[0]->Mutare(mPiesain);
 for(int i=0;i<mLungime;i++){
 mPiesa[i]->Mutare(mPiesa[i+1]);
}
}