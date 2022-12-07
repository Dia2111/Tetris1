//---------------------------------------------------------------------------


#pragma hdrstop

#include "format.h"

//---------------------------------------------------------------------------
FORMAT::FORMAT(int aLinia, int aColoana){
       // mPiesaint=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        mPiesat[0]=new BLOC(aLinia, aColoana+1, T_PIESAT);
        mPiesat[1]=new BLOC(aLinia+1, aColoana, T_PIESAT);
        mPiesat[2]=new BLOC(aLinia+1, aColoana+1, T_PIESAT);
        mPiesat[3]=new BLOC(aLinia+1, aColoana+2, T_PIESAT);
}

void FORMAT::Afisare(int aGrid[ROW][COL]){
//mPiesaint->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesat[i]->Afisare(aGrid) ;
}
}

void FORMAT::Stergere(int aGrid[ROW][COL]){
//mPiesaint->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesat[i]->Stergere(aGrid) ;
}
}
void FORMAT::Mutare(int dl, int dc){
 //mPiesaint->Mutare(dl,dc);
 //mPiesat[0]->Mutare(mPiesaint);
 for(int i=0;i<mLungime;i++){
 mPiesat[i]->Mutare(mPiesat[i+1]);
}
}
#pragma package(smart_init)

