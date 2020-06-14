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


void Juego::setvidas(int v){
V=v;
}


int Juego::getvidas(){
return V;
}

void Juego::Llenar(){

int aux=0,cx=0,cy=0;
srand(time (NULL));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
          if (Tablero[i][j]==Tablero[0][0]){
            Tablero[i][j] = 2;
          }
            else{
            Tablero[i][j] = 0;
          }
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
           switch(Tablero[i][j]){

          case 0:
              cout<<"X ";
              break;

          case 1:
              cout<<"X ";
              break;

          case 2:
              cout<<"J ";
              break;

          case 3:
              cout<<"X ";
              break;
    }
}
    cout<<endl;
}
}


 int Juego::Mover(char m){
    m=toupper(m);
     switch(m) {
      case 'W' :
        if(X==0){
            cout<<"No Puedes salir del tablero\n";
            return -1;
        }
        if(Tablero[X-1][Y]== 0){
            Tablero[X][Y]= 0;
            X--;
            Tablero[X][Y]= 2;
            return 0;
        }if(Tablero[X-1][Y]== 1){
            V--;
            if(V==0){
            return 2;
            }if(Tablero[X-1][Y]== 3){
            return 3;
            }
            return 1;
            }
         break;

      case 'S' :
            if(X==N-1){
            cout<<"No Puedes salir del tablero\n";
            return -1;
            }
            if(Tablero[X+1][Y]== 0){
            Tablero[X][Y]= 0;
            X++;
            Tablero[X][Y]= 2;
            return 0;
            }if(Tablero[X+1][Y]== 1){
             V--;
             if(V==0){
            return 2;
            }if(Tablero[X+1][Y]== 3){
            return 3;
            }
            return 1;
            }
         break;

      case 'D' :
            if(Y==N-1){
            cout<<"No Puedes salir del tablero\n";
            return -1;
            }
            if(Tablero[X][Y+1]== 0){
            Tablero[X][Y]= 0;
            Y++;
            Tablero[X][Y]= 2;
            return 0;
            }if(Tablero[X][Y+1]== 1){
            V--;
            if(V==0){
            return 2;
            }if(Tablero[X][Y+1]== 3){
            return 3;
            }
            return 1;
            }
          break;

      case 'A' :
             if(Y==0){
            cout<<"No Puedes salir del tablero\n";
            return -1;
            }
            if(Tablero[X][Y-1]== 0){
            Tablero[X][Y]= 0;
            Y--;
            Tablero[X][Y]= 2;
            return 0;
            }if(Tablero[X][Y-1]== 1){
            V--;
            if(V==0){
            return 2;
            }if(Tablero[X][Y-1]== 3){
            return 3;
            }
            return 1;
            }
         break;
      default :
         cout << "Tecla incorrecta\n";
   }
}

int Juego::explorar(int r){
int u=0;

for(int i=Y-r;i<Y+r+1;i++){
    if(i<N && i>0){
        if(Tablero [X][i]==1){
            u++;
        }
    }
}

for(int j=X-r;j<X+r+1;j++){
    if(j<N && j>0){
        if(Tablero [j][Y] ==1){
            u++;
        }
    }
}
return u;
}

void Juego::MostrarFinal(){

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           switch(Tablero[i][j]){

          case 0:
              cout<<"X ";
              break;

          case 1:
              cout<<"B ";
              break;

          case 2:
              cout<<"J ";
              break;

          case 3:
              cout<<"T ";
              break;
    }
}
    cout<<endl;
}
}


