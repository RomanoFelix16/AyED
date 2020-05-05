#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

typedef struct{
    float longitud;
} CUBO;

void cuboSetLongitud(CUBO &cubo, float longitud);

float cuboGetLongitud (CUBO &cubo);

float areaCubo(CUBO &cubo);

#endif // CUBO_H_INCLUDED
