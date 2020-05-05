
#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED

typedef struct{
    float radio;
    float altura;
}CILINDRO;

void constructor(CILINDRO &cili);

void destructor(CILINDRO &cili);

void cilindroSetRadio(CILINDRO &cili, float radio);

void cilindroSetAltura(CILINDRO &cili, float altura);

float cilindroGetRadio(CILINDRO &cili);

float cilindroGetAltura(CILINDRO &cili);

float cilindroArea(CILINDRO &cili);

#endif // CILINDRO_H_INCLUDED
