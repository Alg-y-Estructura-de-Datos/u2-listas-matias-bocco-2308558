#include <iostream>
#include "Lista/Lista.h"
using namespace std;
void intercambiar (Lista<int>&lista1,Lista<int>&lista2);
int main() {
Lista<int> lista1;
Lista<int> lista2;
    int n, d, p;

    cout<<"Ingrese el tamaño de la Lista 1: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor de la lista 1 en la posicion: "<<i+1<<endl;
        cin>>d;
    lista1.insertar(i,d);}
      cout<<"Ingrese el tamaño de la Lista 2: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor de la lista 2 en la posicion: "<<i+1<<endl;
        cin>>d;
    lista2.insertar(i,d);}
    lista1.print();
    lista2.print();
    intercambiar(lista1,lista2);
    lista1.print();
    lista2.print();

    return 0;

}
void intercambiar (Lista<int>&lista1,Lista<int>&lista2){
    Lista<int> temp;
    for (int i=0;i<lista1.getTamanio();i++){
        temp.insertarUltimo(lista1.getDato(i));}
    lista1.vaciar();
    for(int i=0;i<lista2.getTamanio();i++){
        lista1.insertarUltimo(lista2.getDato(i));}
    lista2.vaciar();
    for(int i=0;i<temp.getTamanio();i++){
        lista2.insertarUltimo(temp.getDato(i));}

}