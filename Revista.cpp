//
// Created by utec on 03/05/19.
//

#include "Revista.h"
Revista::Revista(string nombre, int _numVol, int numLibros): Volumen(nombre,_numVol), numRevistas{numLibros} {}

void Revista::mostrar() {
    cout << nombre  << " " << numVol << " " <<numRevistas << endl ;

}