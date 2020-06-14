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
cout<<"Bienvenido a YAIG\n\n";
cout<<"Instrucciones:\n\n";
cout<<"El jugador se mueve con las teclas WASD\n\n";
cout<<"Ingrese el tamanio del tablero\n";
cin>>N;
cout<<"Ingrese el numero de vidas\n";
cin>>V;
cout<<"Ingrese el numero de bombas\n";
cin>>B;

Juego a(V,B,N);
a.Llenar();
int aaux=0;
char l;

do{

cout<<"Moverse pulse 1 - Explorar pulse 2\n";
cin>>k;
a.Mostrar();
switch(k){

case 1:

cout<<"Ingrese Direccion \n";
cin>>l;
i=a.Mover(l);
system("CLS");
if (i==1){
    cout<<"Perdiste un vida\n";
    cout<<"Vidas Restantes: "<<a.getvidas()<<"\n";
}if (i==2){
    cout<<"Perdiste\n";
    aaux=1;

}if (i==3){
    cout<<"Ganaste\n";
    aaux=1;
}
break;

case 2:
        cout<<"Ingrese Radio de exploracion: \n";
        cin>>r;
        cout<<"Numero de bombas: "<<a.explorar(r)<<"\n";
break;

default:
    cout<<"Tecla incorrecta\n";
}
}while(aaux<1);

cout<<"Tablero descubierto\n\n";
a.MostrarFinal();
}
