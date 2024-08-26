#include "iostream"
#include "Lista/ListaDoble.h"
void añadirPagina (ListaDoble<std::string>&lista,const std::string Url);
void mostrarHistorial (ListaDoble<std::string>&lista);
void retroceder (ListaDoble<std::string>&lista);
void avanzar (ListaDoble<std::string>&lista);
int posicion;
int main(){
    posicion=0;
    ListaDoble<std::string>lista;
    int opcion;
    do {
        std::cout<<"Ingrese: \n";
        std::cout<<"1) Para añadir pagina. \n";
        std::cout<<"2) Para mostrar Historial.\n";
        std::cout<<"3) Para retroceder.\n";
        std::cout<<"4) Para avanzar. \n";
        std::cout<<"5) Para finalizar. \n";
        std::cin>>opcion;
        switch (opcion) {
            case 1:{
                std::string url;
                std::cin>>url;
                añadirPagina(lista,url);
                break;}
            case 2:
                mostrarHistorial(lista);
                break;
            case 3:{
                retroceder(lista);
                break;}
            case 4:{
                avanzar(lista);
                break;}
            }

    }while (opcion!=5);


}
void añadirPagina (ListaDoble<std::string>&lista, const std::string Url){
    lista.insertarUltimo(Url);
    posicion=lista.getTamanio()-1;
}
void mostrarHistorial (ListaDoble<std::string>&lista){
    for (int i=0;i<lista.getTamanio();i++){
        std::cout<< "Pagina "<<i+1 << ": " <<lista.getDato(i)<<"\n";
    }
}
void retroceder (ListaDoble<std::string>&lista){
    if (posicion>0){
    posicion--;
    std::cout<<lista.getDato(posicion)<<"\n";}else {std::cout<<"No se puede retroceder mas\n"; }
}
void avanzar (ListaDoble<std::string>&lista){
    if (posicion<lista.getTamanio()-1){
        posicion++;
    std::cout<<lista.getDato(posicion)<<"\n";
}else {std::cout<<"No se puede avanzar mas.\n";}}