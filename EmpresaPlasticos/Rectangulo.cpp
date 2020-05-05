#include "Rectangulo.h"

void constructor(RECTANGULO &rect){
    rect.base=0;
    rect.altura=0;
}

void destructor(RECTANGULO &rect){
    destructor(rect);
}

void rectanguloSetBase(RECTANGULO &rect, float base){
    rect.base = base;
}

void rectanguloSetAltura(RECTANGULO &rect, float altura){
    rect.altura = altura;
}

float rectanguloGetBase(RECTANGULO &rect){
    return rect.base;
}

float rectanguloGetAltura(RECTANGULO &rect){
    return rect.altura;
}

float areaRectangulo(RECTANGULO &rect){
    return rect.base * rect.altura;
}

/** Implemento primitivas */


