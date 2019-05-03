//
// Created by utec on 03/05/19.
//

#ifndef POO2_VOLUMEN_H
#define POO2_VOLUMEN_H

#include <iostream>
#include <string>
using namespace std;
class Volumen {
protected:
    string nombre;
    int numVol;
public:
    Volumen(string nombre, int numVol);
    virtual void mostrar()=0;

};


#endif //POO2_VOLUMEN_H
