#include <iostream>
#include "Lista/CircList.h"
#include <thread>
#include <chrono>
void mostrarAnuncio (CircList<std::string>frases);
int main (){
    CircList<std::string>frases;
    frases.insertarUltimo("BonoPro :) ");
    frases.insertarUltimo("MartiPro :) ");
    frases.insertarUltimo("Murio la Banda del FF :( ");

    mostrarAnuncio(frases);

}
void mostrarAnuncio (CircList<std::string>frases){
    int pos=0;
for (int i=0;i<frases.getTamanio();i++){
    std::cout<<frases.getDato(i)<<"\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
}



mostrarAnuncio(frases);}