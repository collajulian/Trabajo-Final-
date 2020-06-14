#include"Juego.h"
#include<iostream>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
int N=0,V=0,i=0;
cout<<"Ingrese el tamanio de la matriz\n";
cin>>N;
cout<<"Ingrese el nro de vidas\n";
cin>>V;

Juego a(V,5,N);
a.Llenar();
int aaux=0;
char l;
do{

a.Mostrar();
cout<<"Ingrese tecla \n";
cin>>l;
i=a.Mover(l);
if (i==1){
    cout<<"Perdiste un vida"<<endl;
}if (i==2){
    cout<<"Perdiste"<<endl;
}if (i==3){
    cout<<"Ganaste"<<endl;
}


}while(aaux<5);

}
