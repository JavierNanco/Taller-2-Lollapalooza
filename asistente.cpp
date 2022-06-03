#include "asistente.h"

asistente::asistente()
{
    //se crea el constructor por defecto
    this->tipoEntrada=0;
    this->ocupado=0;
}


asistente::asistente(string nombre, string apellidoPaterno, string apellidoMaterno, int rut, char digitoVerificador, int tipoEntrada, bool ocupado) : persona(nombre, apellidoPaterno, apellidoMaterno, rut, digitoVerificador)
{
    //se crea el constructor por parametrización
    this->tipoEntrada=tipoEntrada;
    this->ocupado=ocupado;
}

asistente::asistente(const asistente& a)
{
    //se crea el constructor por copia
    this->tipoEntrada=a.tipoEntrada;
    this->ocupado=a.ocupado;
}
//getter: su función es permitir el obtener el valor de una propiedad de la clase y así poder utilizar dicho valor en diferentes métodos.
//setter: su función permite brindar acceso a propiedades especificas para poder asignar un valor fuera de la clase.

int asistente::getTipoEntrada()
{
  return this->tipoEntrada;
}
void asistente::setTipoEntrada(int newTipoEntrada)
{
    this->tipoEntrada = newTipoEntrada;
}



void asistente::setFechaEvento(int newFechaEventoDia, int newFechaEventoMes, int newFechaEventoAho)
{
    this->fechaEvento.setDia(newFechaEventoDia);
    this->fechaEvento.setMes(newFechaEventoMes);
    this->fechaEvento.setAho(newFechaEventoAho);
}
fecha asistente::getFechaEvento(){
    return this->fechaEvento;
}

bool asistente::getOcupado()
{
  return this->ocupado;
}
void asistente::setOcupado(bool newOcupado)
{
    this->ocupado = newOcupado;
}


void asistente::verAsistente()
{ 
    cout << "tipo de entrada    : " << this->tipoEntrada << endl;
    cout << "esta ocupado       : " << this->ocupado << endl;
}


asistente::~asistente() //se crea el destructor. Se inicia automaticamente al final del programa.
{
  
}