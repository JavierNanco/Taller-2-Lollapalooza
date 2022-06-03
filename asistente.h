#ifndef ASISTENTE_H
#define ASISTENTE_H
#include "persona.h"

class asistente : public persona
{
    public:
    
    asistente();                                                //constructor por defecto
    asistente(string, string, string, int, char, int, bool);    //Constructor por parametrización
    asistente(const asistente&);                                //Constructor por copia
    ~asistente();                                               //destructor por defecto
    
    
    //getter, se utilizan para la salida de sus datos desde el main.
    int getTipoEntrada();
    fecha getFechaEvento();
    bool getOcupado();
    
    //setter, se utilizan para la entrada de sus datos desde el main.
    void setTipoEntrada(int newTipoEntrada);
    void setFechaEvento(int newFechaEntradaDia, int newFechaEntradaMes, int newFechaEntradaAho);
    void setOcupado(bool newOcupado);
    
    //funcion que nos permite visualizar los asistentes
    
    void verAsistente();

    private:
    
    int tipoEntrada;
    fecha fechaEvento;
    bool ocupado;
};

#endif