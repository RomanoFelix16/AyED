#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

typedef struct{
    float cMayor;
    float cMenor;
} TRIANGULO;

void constructor(TRIANGULO &tri);

void destructor(TRIANGULO &tri);

void trianguloSetCatetoMayor(TRIANGULO &tri, float cMayor);

float trianguloGetCatetoMayor(TRIANGULO &tri);

void trianguloSetCatetoMenor(TRIANGULO &tri, float cMenor);

float trianguloGetCatetoMenor(TRIANGULO &tri);

float areaTriangulo(TRIANGULO &tri);

#endif // TRIANGULO_H_INCLUDED
