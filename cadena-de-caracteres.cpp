#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){;
char nombre[10];
int longitud=0;

cout<< "Digite una cadena de caracteres de 10 elementos"<<"\n";
cin.getline(nombre,10);
longitud=strlen(nombre);
if (strlen(nombre)>10){
cout << "el numero de elementos de la cadena es :" << longitud<<"\n";
}
else {
cout << "pasa la cantidad de caracteres" << "\n";
}

getch 
return 0;
}
