#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

typedef struct{
    float base;
    float altura;
} RECTANGULO;

void rectanguloSetBase(RECTANGULO &rect, float base);

void rectanguloSetAltura(RECTANGULO &rect, float altura);

float rectanguloGetBase(RECTANGULO &rect);

float rectanguloGetAltura(RECTANGULO &rect);

float areaRectangulo(RECTANGULO &rect);

#endif // RECTANGULO_H_INCLUDED
