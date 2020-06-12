#include"Juego.h"
#include<iostream>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
int N=0;
cout<<"Ingrese el tamanio de la matriz\n";
cin>>N;

Juego a(3,5,3);

int aaux=0;
char l;
do{
a.Llenar();
a.Mostrar();
cout<<"Ingrese tecla \n";
cin>>l;
a.Mover(l);
}while(aaux<5);

}
