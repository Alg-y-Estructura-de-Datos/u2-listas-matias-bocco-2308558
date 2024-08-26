#include <iostream>
#include "Lista/Lista.h"
using namespace std;
void borrarNumeros (Lista<int>&lista);
int main() {
    Lista<int> Lista;
    int n, d, p;

    cout<<"Ingrese el tamaño de la Lista: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor de la lista en la posicion: "<<i+1<<endl;
        cin>>d;
        Lista.insertarUltimo(d);}
 Lista.print();
        borrarNumeros(Lista);
  Lista.print();

    return 0;
}
void borrarNumeros (Lista<int>&lista){
    int n;
    cout<<"Ingrese el numero que desea borrar de la lista\n";
    cin>>n;
    int tamanio=lista.getTamanio();

    for (int i=0;i<tamanio;i++){
        if (lista.getDato(i)==n){
            lista.remover(i);
            tamanio--;
            i--;
        }
    }

}