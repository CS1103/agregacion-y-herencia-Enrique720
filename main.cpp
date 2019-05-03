#include <iostream>
#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"
#include "Biblioteca.h"
#include <string>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;
/*int main() {
    Biblioteca lista;
    auto** a = new Volumen*[4];
    a[0] = new Revista("Hola", 3,4);
    a[1] = new Libro("Enrique",5,6);
    a[2] = new Libro("Las cronicas de narnia",3,2);
    a[3] = new Revista("Somos",4,6);
    lista.incluir(a[0]);
    lista.incluir(a[1]);
    lista.incluir(a[2]);
    lista.incluir(a[3]);
    lista.mostrarBiblioteca();
}*/