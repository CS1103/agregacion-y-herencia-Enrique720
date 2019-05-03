//
// Created by utec on 03/05/19.
//

#include "Biblioteca.h"
void Biblioteca::incluir(Volumen *a) {

    lista1.push_back(a);
    Libro* var = dynamic_cast<Libro*>(a);
    if( var != nullptr){
        maxLibros = maxLibros +1;
    }
    else{
        maxRevistas = maxRevistas +1 ;
    }

}
void Biblioteca::mostrarBiblioteca() {
    int a =lista1.size();
    for( int i= 0; i < a;  i ++){
        lista1[i]->mostrar();}
    cout << "El numero de Revistas es:  " << maxRevistas << endl << "El numero de Libros es : " << maxLibros << endl;

}
Biblioteca::Biblioteca(): maxLibros{0},maxRevistas{0} {}
int Biblioteca::get_maxlibros() {
    return maxLibros;
}
int Biblioteca::get_maxrevistas() {
    return maxRevistas;
}