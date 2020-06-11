#include"Juego.h"
#include<iostream>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

Juego a(3,5,5);

int aaux=0;
char l;
do{
a.Mostrar();
cout<<"Ingrese tecla \n";
cin>>l;
a.Mover(l);
}while(aaux<5);

}
