//---------------------------------------------------------------------------


#pragma hdrstop

#include "formaz.h"

//---------------------------------------------------------------------------
FORMAZ::FORMAZ(int aLinia, int aColoana){
       // mPiesainz=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        mPiesaz[0]=new BLOC(aLinia, aColoana, T_PIESAZ);
        mPiesaz[1]=new BLOC(aLinia, aColoana+1, T_PIESAZ);
        mPiesaz[2]=new BLOC(aLinia+1, aColoana+1, T_PIESAZ);
        mPiesaz[3]=new BLOC(aLinia+1, aColoana+2, T_PIESAZ);
}

void FORMAZ::Afisare(int aGrid[ROW][COL]){
//mPiesainz->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesaz[i]->Afisare(aGrid) ;
}
}

void FORMAZ::Stergere(int aGrid[ROW][COL]){
//mPiesainz->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesaz[i]->Stergere(aGrid) ;
}
}
void FORMAZ::Mutare(int dl, int dc){
 //mPiesainz->Mutare(dl,dc);
 //mPiesaz[0]->Mutare(mPiesainz);
 for(int i=0;i<mLungime;i++){
 mPiesaz[i]->Mutare(mPiesaz[i+1]);
}
}
#pragma package(smart_init)
