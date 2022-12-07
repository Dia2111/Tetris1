//---------------------------------------------------------------------------


#pragma hdrstop

#include "bloc.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
BLOC::BLOC(int aLinia, int aColoana, int aTip){

mLinia=aLinia;
mColoana=aColoana;
mTip=aTip;
}

void BLOC::Afisare(int aGrid[ROW][COL]){
aGrid[mLinia][mColoana]=mTip;
}

void BLOC::Stergere(int aGrid[ROW][COL]){
aGrid[mLinia][mColoana]=T_GOL;
}

void BLOC::Mutare(int aDL, int aDC){
  mLinia+=aDL;
  mColoana+=aDC;
  if(mLinia<0)
  {
  mLinia=ROW-1 ;
  }
  if(mLinia==ROW)
  {
  mLinia=0 ;
  }
}

void BLOC::Mutare(BLOC *aSursa){
this->mLinia=aSursa->mLinia;
this->mColoana=aSursa->mColoana;
}
