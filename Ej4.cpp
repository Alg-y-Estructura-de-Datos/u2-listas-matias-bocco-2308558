#include <iostream>
#include "Lista/Lista.h"
bool esVocal(char c);
int cantidadVocal (Lista<char>lista,char vocal);
 int main(){
Lista<char>fraseLista;
std::string frase;
char vocal;
std::cout<<"Ingrese la frase.\n";
std::cin>>frase;

for (int i=0;i<frase.length();i++){
    char c=frase[i];
    fraseLista.insertarUltimo(c);}
std::cout<<"Ingrse la vocal.\n";
std::cin>>vocal;
 if (!esVocal(vocal)) {
        std::cout<<"El carácter ingresado no es una vocal.\n";
        return 0;
    }

std::cout<<cantidadVocal(fraseLista,vocal);

}

int cantidadVocal (Lista<char>lista,char vocal){
     int contador=0;
     for (int i=0;i<lista.getTamanio();i++){
         if (lista.getDato(i)==vocal){
             contador++;}
     }
     return contador;
 }
bool esVocal(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}