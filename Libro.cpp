//
// Created by utec on 03/05/19.
//

#include "Libro.h"
Libro::Libro(string _nombre, int _numVol, int numLibros): Volumen(_nombre,_numVol),numLibros{numLibros} {}
void Libro::mostrar() {
    cout << nombre << " " << numVol << " " << numLibros << endl;
}