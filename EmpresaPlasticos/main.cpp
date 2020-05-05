#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Circulo.h"
#include "Cilindro.h"
#include "Cubo.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

void read();

int main(int argc, char *argv[])
{

    CILINDRO cili;
    /*CIRCULO circ;
    CUBO cubo;
    TRIANGULO tri;
    RECTANGULO rect;
    */

    ifstream archivo("FigurasEjemplo.txt", ios::in);
    char linea[128];
    int cont = 0;

    while(!archivo.eof()){
        archivo.getline(linea, sizeof(linea));
        cout<<linea<<endl;
        cont++;
    }
    archivo.close();


    //read();

    return 0;
}

/*void read (){
        string figura, color;
        char cadena [100];
        float altura, radio, longitud, cMayor, base;
        int cont = 0;
        //FILE *FigurasEjemplo;
        ifstream archivo("FigurasEjemplo.txt", ios::in);
        //reader.open ("FigurasEjemplo.txt", ios::out | ios::in);
        if(archivo.is_open()){ // ARCHIVO ABIERTO
            while(!archivo.eof()){ // NO SEA EL FINAL DEL ARCHIVO
                archivo >> figura;
                archivo >> color;
                archivo[0] = figura; // PRIMERA POSICION ES EL TIPO DE FIGURA
                archivo[1] = color;
                if(figura==cilindro){
                    archivo >> radio;
                    archivo >> altura;
                    archivo[cont].radio = radio;
                    cilindroSetRadio(cilindro, radio);
                    archivo[cont].altura = altura;
                    cilindroSetAltura(cilindro, altura);
                    cout << "\nArea del Cilindro: " << cilindroArea(cilindro) << endl;
                }else if(figura==circulo){
                        archivo >> radio;
                        archivo[cont].radio = radio;
                }else if(figura==cubo){
                        archivo >> longitud;
                        archivo[cont].longitud = longitud;
                }else if(figura==triangulo){
                        archivo >> cMayor;
                        archivo[cont].cMayor = cMayor;
                }else if(figura==rectangulo){
                        archivo >> base;
                        archivo >> altura;
                        archivo[cont].base = base;
                        archivo[cont].altura = altura;
                }
                cont++;
            }
        }else{
            cout <<"Error. El archivo no se pudo abrir"<< endl;
        }
        archivo.close();
    }*/


    /*float radio, altura;

    CILINDRO cilindro;

    cout<< "Ingrese el radio del cilindro: ";
    cin>>radio;
    cilindroSetRadio(cilindro, radio);
    cout<< "Ingrese el altura del cilindro: ";
    cin>>altura;
    cilindroSetAltura(cilindro, altura);

    cout<< "\nArea cilindro: "<< cilindroArea(cilindro)<<endl;

    return 0;
}
    //Declaro e inicializo las variables
    int opcion = 0;
    bool seguir = true;
    float grados = 0;
    float radio = 0;

    Circulo circulo;
    constructor(circulo); //Creo el circulo

    cout<< "Ingrese el radio del circulo: ";
    cin>>radio;
    setRadio(circulo, radio);

    while( seguir== true){
        cout<< "\nIngrese la opcion deseada" <<endl;
        cout<< "0. Salir" <<endl;
        cout<< "1. Informar el radio del circulo" <<endl;
        cout<< "2. Informar el perimetro del circulo" <<endl;
        cout<< "3. Informar el diametro del circulo" <<endl;
        cout<< "4. Informar el area del circulo" <<endl;
        cout<< "5. Informar la longitud del arco" <<endl;
        cin>> opcion;

        switch (opcion){
            case 0:
                cout<< "Gracias, vuelva pronto" <<endl;
                destructor(circulo);
                seguir = false;
            break;

            case 1:
                cout<< "El radio es: " << getRadio(circulo) <<endl;
            break;

            case 2:
                cout<< "El perimetro es: " << getPerimetro(circulo) <<endl;
            break;

            case 3:
                cout<< "El diametro es: " << getDiametro(circulo) <<endl;
            break;

            case 4:
                cout<< "El area es: " << getSuperficie(circulo) <<endl;
            break;

            case 5:
                cout<< "Ingrese los grados del arco" <<endl;
                cin>> grados;

                cout<< "La longitud del arco es: " << calcularLongitudArco(circulo, grados) <<endl;
            break;

            default:
                cout<< "Opcion incorrecta, vuelva a intentar" <<endl;
            break;
        }


    }*/






