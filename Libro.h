//
// Created by utec on 03/05/19.
//

#ifndef POO2_LIBRO_H
#define POO2_LIBRO_H

#include "Volumen.h"
class Libro : public Volumen{
private:
    int numLibros;
public:
    Libro(string _nombre, int _numVol,int numLibros);
    void mostrar() override ;

};


#endif //POO2_LIBRO_H
