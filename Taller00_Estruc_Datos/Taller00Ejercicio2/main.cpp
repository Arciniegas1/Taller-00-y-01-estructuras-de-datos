//Autor: Daniela Torres Gómez - Nicolás Arciniegas 
//Fecha: 20 de Febrero 2023
// Problema: Se desea capturar los datos de los clientes para ser impresos en una factura

#include <iostream>
#include <fstream>
using namespace std;

//Se crea una estructura llamada Dusuario 
// Entrada: Se asigna el tipo de los datos a encapsular
struct Dusuario{
string nombre;
string apellido;
string documento;
string edad;
};

//Función llamada pedir_información 
//Entrada: un puntero del tipo struct Dusuario
//Salida: Ninguna
//A través del puntero *usuario almacena la posición del dato que se está pidiendo
void pedir_informacion(Dusuario *usuario){
cout<<"Ingrese nombre de la persona "<<endl;
  cin>>usuario->nombre;
cout<<"Ingrese apellido de la persona "<<endl;
  cin>>usuario->apellido;
cout<<"Ingrese documento de identificacion de la persona "<<endl;
  cin>>usuario->documento;
cout<<"Ingrese edad de la persona "<<endl;
  cin>>usuario->edad;
}

//Prototipo la función imprimir
void imprimir(Dusuario *usuario);

int main() {
  Dusuario p1;
  pedir_informacion(&p1);
  imprimir(&p1);

}

//Función llamada imprimir
//Entrada:  un puntero del tipo struct Dusuario
//ofstream es la clase que permite crear la instancia "imprimir" para escribir en el fichero. El fichero para escritura se llama "facturas.txt"
//Salida: ninguna
// toma la informacion almacenada en el puntero y la imprime al final de un fichero para que datos anteriores se mantengan 
void imprimir(Dusuario *usuario){
  ofstream fichero;
  fichero.open("facturas.txt",ios::app);
  fichero<<usuario->nombre<<","<<usuario->apellido<<","<<usuario->documento<<","<<usuario->edad<<endl;
  fichero.close();
  if (fichero)
    cout <<"Nuevo usuario agregado";
  else
    cout<< "no se pudo abrir el archivo";

  }



