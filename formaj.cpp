//---------------------------------------------------------------------------


#pragma hdrstop

#include "formaj.h"

//---------------------------------------------------------------------------
 FORMAJ::FORMAJ(int aLinia, int aColoana){
       // mPiesainj=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        mPiesaj[0]=new BLOC(aLinia, aColoana, T_PIESAJ);
        mPiesaj[1]=new BLOC(aLinia+1, aColoana, T_PIESAJ);
        mPiesaj[2]=new BLOC(aLinia+1, aColoana+1, T_PIESAJ);
        mPiesaj[3]=new BLOC(aLinia+1, aColoana+2, T_PIESAJ);
}

void FORMAJ::Afisare(int aGrid[ROW][COL]){
//mPiesainj->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesaj[i]->Afisare(aGrid) ;
}
}

void FORMAJ::Stergere(int aGrid[ROW][COL]){
//mPiesainj->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesaj[i]->Stergere(aGrid) ;
}
}
void FORMAJ::Mutare(int dl, int dc){
 //mPiesainj->Mutare(dl,dc);
 //mPiesaj[0]->Mutare(mPiesainj);
 for(int i=0;i<mLungime;i++){
 mPiesaj[i]->Mutare(mPiesaj[i+1]);
}
}
#pragma package(smart_init)
