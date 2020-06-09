#include "Juego.h"


Juego::Juego(int N){
 nfil = N;

 V=new int* [nfil];

 for (int i=0;i<nfil;i++){

    V[i]=new int [nfil];

  }

}


Juego::Juego(int,int,int)
{

}
