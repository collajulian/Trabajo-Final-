#include"Juego.h"
#include<iostream>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

Juego::Juego(){
V=3;
X=0;
Y=0;
B=5;
N=5;
Tablero=new int*[5];
for(int i=0;i<5;i++){
    Tablero[i]=new int [5];
}
}


Juego::Juego(int v,int b, int n){
V=v;
B=b;
N=n;

Tablero=new int*[N];
for(int i=0;i<N;i++){
    Tablero[i]=new int [N];
}
}

Juego::Juego(const Juego& k){
V=k.V;
X=0;
Y=0;
B=k.B;
N=k.N;

Tablero=new int*[k.N];
for(int i=0;i<k.N;i++){
    Tablero[i]=new int [k.N];
}

for(int i=0;i<k.N;i++){
    for(int j=0;j<k.N;j++){
        Tablero [i][j];
    }
}
}

void Juego::Llenar(){
int aux=0,cx=0,cy=0;
srand(time (NULL));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
          Tablero[i][j]=0;
    }
}

while(aux<B){
    cx=rand()%N;
    cy=rand()%N;
    if(cx!=0 || cy!=0){
        if(Tablero[cx][cy]!=1){
            Tablero[cx][cy]=1;
            aux++;
        }
    }
}

int p=0;
do{
    cx=rand()%N;
    cy=rand()%N;
    if(cx!=0 || cy!=0){
        if(Tablero[cx][cy]!=1){
           Tablero[cx][cy]=3;
           p++;
        }
    }
}while(p<1);
}

void Juego::Mostrar(){

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<Tablero[i][j];
    }
    cout<<endl;
}
}


 int Juego::Mover(char m){
    m=toupper(m);
     switch(m) {
      case 'N' :
        if(X==0){
            cout<<"No se puede hacer el movimiento porque estas en el borde del tablero"<<endl;
            return -1;
        }
        if(Tablero[X-1][Y]== 'X'){
            Tablero[X][Y]= 'X';
            X--;
            Tablero[X][Y]= 'J';
            return 0;
        }
         break;
      case 'E' :
            if(Y==N-1){
            cout<<"No se puede hacer el movimiento porque estas en el borde del tablero"<<endl;
            return -1;
            }
            if(Tablero[X][Y+1]== 'X'){
            Tablero[X][Y]= 'X';
            Y++;
            Tablero[X][Y]= 'J';
            return 0;
            }
          break;
      case 'S' :
            if(X==N-1){
            cout<<"No se puede hacer el movimiento porque estas en el borde del tablero"<<endl;
            return -1;
            }
            if(Tablero[X+1][Y]== 'X'){
            Tablero[X][Y]= 'X';
            X++;
            Tablero[X][Y]= 'J';
            return 0;
            }
         break;
      case 'O' :
             if(Y==0){
            cout<<"No se puede hacer el movimiento porque estas en el borde del tablero"<<endl;
            return -1;
            }
            if(Tablero[X][Y-1]== 'X'){
            Tablero[X][Y]= 'X';
            Y--;
            Tablero[X][Y]= 'J';
            return 0;
            }
         break;
      default :
         cout << "Esa tecla es incorrecta, intenta otra" << endl;
   }
}
