#include "Triangulo.h"

void constructor(TRIANGULO &tri){

}

void destructor(TRIANGULO &tri){
    destructor(tri);
}

void trianguloSetCatetoMayor(TRIANGULO &tri, float cMayor){
    tri.cMayor = cMayor;
}

float trianguloGetCatetoMayor(TRIANGULO &tri){
    return tri.cMayor;
}

void trianguloSetCatetoMenor(TRIANGULO &tri, float cMenor){
    tri.cMenor = cMenor;
}

float trianguloGetCatetoMenor(TRIANGULO &tri){
    return tri.cMenor;
}

float areaTriangulo(TRIANGULO &tri){
    return (tri.cMayor*tri.cMenor)/2;
}

/** Implemento primitivas */

