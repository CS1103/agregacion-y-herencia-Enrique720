//
// Created by utec on 03/05/19.
//

#ifndef POO2_REVISTA_H
#define POO2_REVISTA_H

#include "Volumen.h"

class Revista: public Volumen {
private:
    int numRevistas;
public:
    Revista(string _nombre, int _numVol,int numLibros);
    void mostrar() override ;

};


#endif //POO2_REVISTA_H
