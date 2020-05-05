#include "Rectangulo.h"

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


