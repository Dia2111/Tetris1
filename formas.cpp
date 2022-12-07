//---------------------------------------------------------------------------


#pragma hdrstop

#include "formas.h"

//---------------------------------------------------------------------------
 #include "bloc.h"
 FORMAS::FORMAS(int aLinia, int aColoana){
       // mPiesains=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        mPiesas[0]=new BLOC(aLinia, aColoana+1, T_PIESAS);
        mPiesas[1]=new BLOC(aLinia, aColoana+2, T_PIESAS);
        mPiesas[2]=new BLOC(aLinia+1, aColoana, T_PIESAS);
        mPiesas[3]=new BLOC(aLinia+1, aColoana+1, T_PIESAS);
}

void FORMAS::Afisare(int aGrid[ROW][COL]){
//mPiesains->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesas[i]->Afisare(aGrid) ;
}
}

void FORMAS::Stergere(int aGrid[ROW][COL]){
//mPiesains->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesas[i]->Stergere(aGrid) ;
}
}
void FORMAS::Mutare(int dl, int dc){
 //mPiesains->Mutare(dl,dc);
 //mPiesas[0]->Mutare(mPiesains);
 for(int i=0;i<mLungime;i++){
 mPiesas[i]->Mutare(mPiesas[i+1]);
}
}
#pragma package(smart_init)
