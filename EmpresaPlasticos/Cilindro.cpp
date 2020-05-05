#include "Cilindro.h"
#include "Constantes.h"
#include <math.h>

void constructor(CILINDRO &cili){
    constructor(cili.radio);

    //Inicializo la altura
    cili.altura=1;
}

void destructor(CILINDRO &cili){
    destructor(cili);
}

void cilindroSetRadio(CILINDRO &cili, float radio){
    cili.radio = radio;
}
void cilindroSetAltura(CILINDRO &cili, float altura){
    cili.altura = altura;
}

float cilindroGetRadio(CILINDRO &cili){
    return cili.radio;
}

float cilindroGetAltura(CILINDRO &cili){
    return cili.altura;
}

float cilindroArea(CILINDRO &cili){
    return 2 * PI * cili.radio * (cili.altura + cili.radio);
}

