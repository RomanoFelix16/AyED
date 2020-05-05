#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

typedef struct{
    float cMayor;
} TRIANGULO;

void trianguloSetCatetoMayor(TRIANGULO &tri, float cMayor);

float trianguloGetCatetoMayor(TRIANGULO &tri);

float areaTriangulo(TRIANGULO &tri);

#endif // TRIANGULO_H_INCLUDED
