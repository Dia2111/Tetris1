//---------------------------------------------------------------------------


#pragma hdrstop

#include "formao.h"

//---------------------------------------------------------------------------
FORMAO::FORMAO(int aLinia, int aColoana){
       // mPiesaino=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        mPiesao[0]=new BLOC(aLinia, aColoana, T_PIESAO);
        mPiesao[1]=new BLOC(aLinia, aColoana+1, T_PIESAO);
        mPiesao[2]=new BLOC(aLinia+1, aColoana, T_PIESAO);
        mPiesao[3]=new BLOC(aLinia+1, aColoana+1, T_PIESAO);
}

void FORMAO::Afisare(int aGrid[ROW][COL]){
//mPiesaino->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesao[i]->Afisare(aGrid) ;
}
}

void FORMAO::Stergere(int aGrid[ROW][COL]){
//mPiesaino->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesao[i]->Stergere(aGrid) ;
}
}
void FORMAO::Mutare(int dl, int dc){
 //mPiesaino->Mutare(dl,dc);
 //mPiesao[0]->Mutare(mPiesaino);
 for(int i=0;i<mLungime;i++){
 mPiesao[i]->Mutare(mPiesao[i+1]);
}
}

#pragma package(smart_init)
