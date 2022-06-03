#ifndef FECHA_H
#define FECHA_H

#include <fstream>  //relacionada al manejo de archivos
#include <iostream> //utilizada para la entrada y salida de datos
#include <limits>   //relacionada a los límites de valores
#include <sstream>  //relacionada a string stream
#include <vector>   //relacionada al manejo de vectores dinámicos
#include <string>
#include <locale.h>

using namespace std;

class fecha
{
    public:
    
    fecha();                            //constructor por defecto
    fecha(int, int, int);               //Constructor por parametrización
    fecha(const fecha&);                //Constructor por copia
    ~fecha();                           //destructor por defecto
    
    
    //getter, se utilizan para la salida de sus datos desde el main.
    
    int getDia();
    int getMes();
    int getAho();

    //setter, se utilizan para la entrada de sus datos desde el main.
    
    void setDia(int newDia);
    void setMes(int newMes);
    void setAho(int newAho);
    
    //funcion que nos permite visualizar las fechas
    
    void verFecha();

    private://Solo las funciones dentro del sector privada pueden acceder a los miembros de la clase declarados como privados.
    
    int dia;
    int mes;
    int aho;
};

#endif