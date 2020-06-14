#include"Juego.h"
#include<iostream>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
int N=0,V=0,B=0,i=0,r=0,k=0;
cout<<"Ingrese el tamanio de la matriz\n";
cin>>N;
cout<<"Ingrese el nro de vidas\n";
cin>>V;
cout<<"Ingrese el nro de bombas\n";
cin>>B;

Juego a(V,B,N);
a.Llenar();
int aaux=0;
char l;

do{

cout<<"Moverse pulse 1 - Explorar pulse 2 "<<endl;
cin>>k;
a.Mostrar();
switch(k){

case 1:

cout<<"Ingrese Direccion \n";
cin>>l;
i=a.Mover(l);
system("CLS");
if (i==1){
    cout<<"Perdiste un vida"<<endl;
    cout<<"Vidas Restantes: "<<a.getvidas()<<endl;
}if (i==2){
    cout<<"Perdiste"<<endl;
    aaux=1;

}if (i==3){
    cout<<"Ganaste"<<endl;
    aaux=1;
}

break;
case 2:

        cout<<"Ingrese Radio de exploracion: "<<endl;
        cin>>r;
        cout<<"Numero de bombas: "<<a.explorar(r)<<endl;



break;

default:
    cout<<"Tecla incorrecta"<<endl;

}
}while(aaux<1);


}
