#ifndef DIRECCION_H
#define DIRECCION_H

#include <fstream>  //relacionada al manejo de archivos
#include <iostream> //utilizada para la entrada y salida de datos
#include <limits>   //relacionada a los límites de valores
#include <sstream>  //relacionada a string stream
#include <vector>   //relacionada al manejo de vectores dinámicos
#include <string>
#include <locale.h>

using namespace std;//std es una abreviacion para standar, lo utilizamos para facilitarnos el uso de la funcion string.

class direccion
{
    public:
    
    direccion();                                //constructor por defecto
    direccion(string, int, string);             //Constructor por parametrización
    direccion(const direccion&);                //Constructor por copia
    ~direccion();                               //destructor por defecto
    
    
    //getter, se utilizan para la salida de sus datos desde el main.
    string getCalle();
    int getNumero();
    string getComuna();
    
    //setter, se utilizan para la entrada de sus datos desde el main.
    void setCalle(string newCalle);
    void setNumero(int newNumero);
    void setComuna(string newComuna);
    
    //funcion que nos permite visualizar la direccion.
    
    void verDireccion();
    
    private:
    
    string calle;
    int numero;
    string comuna;
};

#endif