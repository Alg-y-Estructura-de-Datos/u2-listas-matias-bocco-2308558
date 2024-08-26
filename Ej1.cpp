#include <iostream>
#include "Lista/Lista.h"

using namespace std;

void printLista(Lista<int> &lista, int p) {
    int tamanio = lista.getTamanio();

    if (p > tamanio || p < 0) {
        cout << "La posición " << p << " está fuera de los límites de la lista." << endl;
        return;
    }

if (p==tamanio){
    cout<<lista.getDato(p-1);
    return;
}else{
        cout << lista.getDato(p-1) << "->";
printLista(lista,p+1);
}}


int main() {
    cout << "Ejercicio 02/01 Listas " << endl;

    Lista<int> Lista;
    int n, d, p;

    cout<<"Ingrese el tamaño de la Lista: ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor de la lista en la posicion: "<<i+1<<endl;
        cin>>d;
        Lista.insertarUltimo(d);
    }

    cout<<"Ingrese la posicion desde donde desea imprimir la Lista: "<<endl;
    cin>>p;

    printLista(Lista, p);

    return 0;
}