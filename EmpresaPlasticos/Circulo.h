#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

typedef struct{
    float radio;
}CIRCULO;

void constructor(CIRCULO &circ);

void destructor(CIRCULO &circ);

void circuloSetRadio(CIRCULO &circ, float radio);

float circuloGetRadio(CIRCULO &circ);

float circuloArea(CIRCULO &circ);

#endif // CIRCULO_H_INCLUDED

/**
    Datos del circulo
    Atributos
    * radio,
    * diámetro,
    * perímetro,
    * superficie.

    Cuentas:
    Axiomas
    * radio > 0
    * diametro = 2*radio
    * perímetro = 2*pi*radio
    * superficie = pi*radio*radio

typedef struct Circulo{
    float radio;
} Circulo;

void constructor(Circulo &circulo);

void destructor(Circulo &circulo);

void setRadio(Circulo &circulo, float radio);

float getRadio(Circulo &circulo);

float getPerimetro(Circulo &circulo);

float getSuperficie(Circulo &circulo);

float getDiametro(Circulo &circulo);

float calcularLongitudArco (Circulo &circulo, float angulo);


*/
