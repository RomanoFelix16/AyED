#include "Circulo.h"
#include "Constantes.h"
#include <math.h>

/** Implemento primitivas */

void constructor(CIRCULO &circ){
    circ.radio=1;
}

void destructor(CIRCULO &circ){
}

void circuloSetRadio(CIRCULO &circ, float radio){
    if(radio>0){
        circ.radio=radio;
    }
}

float circuloGetRadio(CIRCULO &circ){
    return circ.radio;
}

float circuloArea(CIRCULO &circ){
    return PI * pow(circ.radio, 2);
}

/** Implemento primitivas

void constructor(Circulo &circulo){
    circulo.radio = 1;
}

void destructor(Circulo &circulo){
}

void setRadio(Circulo &circulo, float radio){
    if (radio > 0) {
        circulo.radio = radio;
    }
}

float getRadio(Circulo &circulo){
    return circulo.radio;
}
*/
