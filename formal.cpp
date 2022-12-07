//---------------------------------------------------------------------------


#pragma hdrstop

#include "formal.h"

//---------------------------------------------------------------------------
FORMAL::FORMAL(int aLinia, int aColoana){
       // mPiesainl=new BLOC(aLinia, aColoana, T_PIESAIN);
        mLungime=3;
        mPiesal[0]=new BLOC(aLinia+1, aColoana, T_PIESAL);
        mPiesal[1]=new BLOC(aLinia+1, aColoana+1, T_PIESAL);
        mPiesal[2]=new BLOC(aLinia+1, aColoana+2, T_PIESAL);
        mPiesal[3]=new BLOC(aLinia, aColoana+2, T_PIESAL);
}

void FORMAL::Afisare(int aGrid[ROW][COL]){
//mPiesainl->Afisare(aGrid);
for(int i=0; i<=mLungime;i++){
mPiesal[i]->Afisare(aGrid) ;
}
}

void FORMAL::Stergere(int aGrid[ROW][COL]){
//mPiesainl->Stergere(aGrid);
for(int i=0; i<mLungime;i++){
mPiesal[i]->Stergere(aGrid) ;
}
}
void FORMAL::Mutare(int dl, int dc){
 //mPiesainl->Mutare(dl,dc);
 //mPiesal[0]->Mutare(mPiesainl);
 for(int i=0;i<mLungime;i++){
 mPiesal[i]->Mutare(mPiesal[i+1]);
}
}
#pragma package(smart_init)
