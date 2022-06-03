#ifndef PERSONA_H
#define PERSONA_H
#include "fecha.h"
#include "direccion.h"

class persona
{
    //Los objetos en public son visibles para todas las demás clases. Esto significa que cualquier otra 
    //clase puede acceder a sector publico
    public:
    
    persona();                                  //constructor por defecto
    persona(string, string, string, int, char); //Constructor por parametrización
    persona(const persona&);                    //Constructor por copia
    ~persona();                                 //destructor por defecto
    
    
    //getter, se utilizan para la salida de sus datos desde el main.
    string getNombre();
    string getApellidoPaterno();
    string getApellidoMaterno();
    int getRut();
    char getDigitoVerificador();
    fecha getFechaPersona();
    direccion getDireccionPersona();

    //setter, se utilizan para la entrada de sus datos desde el main.
    void setNombre(string newNombre);
    void setApellidoPaterno(string newApellidoPaterno);
    void setApellidoMaterno(string newApellidoMaterno);
    void setRut(int newRut);
    void setDigitoVerificador(char newDigitoVerificador);
    void setFechaPersona(int newFechaPersonaDia, int newFechaPersonaMes, int newFechaPersonaAho);
    void setDireccionPersona(string newDireccionPersonaCalle, int newDireccionPersonaNumero, string newDireccionPersonaComuna);
    
    
    //funcion que nos permite visualizar las personas
    
    void verPersona();
    
    //Solo las funciones dentro del sector privada pueden acceder a los miembros de la clase declarados como privados.
    private:
    
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    int rut;
    char digitoVerificador;
    fecha fechaPersona;
    direccion direccionPersona;
    
};

#endif