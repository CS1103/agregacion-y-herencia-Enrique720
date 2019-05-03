#include "catch.hpp"
#include "Biblioteca.h"
SCENARIO("cantidad de libros cantidad de revistas"){
    GIVEN("creo una biblioteca"){
        Biblioteca lista;
        REQUIRE(lista.get_maxlibros() == 0);
        WHEN("agrego 3 libros"){
            auto** a = new Volumen*[4];
            a[0] = new Libro("Hola", 3,4);
            a[1] = new Libro("Enrique",5,6);
            a[2] = new Libro("Las cronicas de narnia",3,2);
            lista.incluir(a[0]);
            lista.incluir(a[1]);
            lista.incluir(a[2]);
            THEN("Libros tienen que ser 3"){
                REQUIRE(lista.get_maxlibros() == 3);
            }
        }
    }
}