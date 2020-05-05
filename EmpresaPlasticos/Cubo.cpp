#include "Cubo.h"
#include <math.h>

void constructor(CUBO &cubo){
    cubo.longitud=1;
}

void destructor(CUBO &cubo){
    destructor(cubo);
}

void cuboSetLongitud (CUBO &cubo, float longitud){
    cubo.longitud = longitud;
}

float cuboGetLongitud (CUBO &cubo){
    return cubo.longitud;
}

float areaCubo (CUBO &cubo, float longitud){
    return pow (cubo.longitud, 2);
}

/** Implemento primitivas

void constructor(Cubo &cubo){
    cubo.longitudLado = 1;
}

void destructor(Cubo &cubo){
}
 */

