//Autor: Daniela Torres Gómez - Nicolás Arciniegas
//Fecha: 20 de Febrero del 2023
//Problema: Que el programa genere números aleatorios entre el 0 y 25 en un arreglo de tamaño diez, imprimir su contenido a través de un puntero y así mismo imprimir las direcciones del contenido del arreglo de números 

#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

//Llamado de la función que genera numeros aleatorios 
int num_aleatorio();

// Se crea el arreglo de tamaño 10 y un puntero llamado iterador
//Dentro del for se asigna al arreglo numeros el contenido de la función num_aleatorio
// El puntero iterador imprime la posición de memoria del dato
int main() {
  int numeros[10];
  int *iterador;
  for(int i=0; i < 10; i++){
    numeros[i]=num_aleatorio();
  }
iterador=&numeros[0];
for (int i =0; i<10; i++){
    cout<<"en la posicion: "<<i+1<<" el valor aleatorio es: "<<*(iterador+i)<<" guardado en la direccion de memoria: "<<(iterador+i)<<endl;
  }
}

//Función que genera números aleatorios entre el o y 25
//Entrada: Ninguna
//Salida: entero de nombre valor
int num_aleatorio(){
  int valor;
  valor = rand() %26;
  return valor;
}