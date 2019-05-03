//
// Created by utec on 03/05/19.
//

#ifndef POO2_BIBLIOTECA_H
#define POO2_BIBLIOTECA_H

#include <vector>
#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"
using namespace std;
class Biblioteca{
private:
    int maxLibros;
    int maxRevistas;
    vector <Volumen*> lista1 ;
public:
    Biblioteca();
    void incluir(Volumen *a);
    void mostrarBiblioteca();
    int get_maxlibros();
    int get_maxrevistas();
};


#endif //POO2_BIBLIOTECA_H
