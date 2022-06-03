#include "persona.h"

persona::persona()
{
    //se crea el constructor por defecto
    this->nombre="";
    this->apellidoPaterno="";
    this->apellidoMaterno="";
    this->rut=0;
    this->digitoVerificador=0;
}

persona::persona(string nombre, string apellidoPaterno, string apellidoMaterno, int rut, char digitoVerificador)
{
    //se crea el constructor por parametrización
    this->nombre=nombre;
    this->apellidoPaterno=apellidoPaterno;
    this->apellidoMaterno=apellidoMaterno;
    this->rut=rut;
    this->digitoVerificador=digitoVerificador;
}

persona::persona(const persona& p)
{
    //se crea el constructor por copia
    
    this->nombre=p.nombre;
    this->apellidoPaterno=p.apellidoPaterno;
    this->apellidoMaterno=p.apellidoMaterno;
    this->rut=p.rut;
    this->digitoVerificador=p.digitoVerificador;
}

//getter: su función es permitir el obtener el valor de una propiedad de la clase y así poder utilizar dicho valor en diferentes métodos.
//setter: su función permite brindar acceso a propiedades especificas para poder asignar un valor fuera de la clase.

string persona::getNombre()
{
  return this->nombre;
}
void persona::setNombre(string newNombre)
{
    this->nombre = newNombre;
}



string persona::getApellidoPaterno()
{
  return this->apellidoPaterno;
}
void persona::setApellidoPaterno(string newApellidoPaterno)
{
    this->apellidoPaterno = newApellidoPaterno;
}


string persona::getApellidoMaterno()
{
  return this->apellidoMaterno;
}
void persona::setApellidoMaterno(string newApellidoMaterno)
{
    this->apellidoMaterno = newApellidoMaterno;
}


int persona::getRut()
{
  return this->rut;
}
void persona::setRut(int newRut)
{
    this->rut = newRut;
}


char persona::getDigitoVerificador()
{
  return this->digitoVerificador;
}
void persona::setDigitoVerificador(char newDigitoVerificador)
{
    this->digitoVerificador = newDigitoVerificador;
}


void persona::setFechaPersona(int newFechaPersonaDia, int newFechaPersonaMes, int newFechaPersonaAho)
{
    this->fechaPersona.setDia(newFechaPersonaDia);
    this->fechaPersona.setMes(newFechaPersonaMes);
    this->fechaPersona.setAho(newFechaPersonaAho);
}
fecha persona::getFechaPersona(){
    return this->fechaPersona;
}


void persona::setDireccionPersona(string newDireccionPersonaCalle, int newDireccionPersonaNumero, string newDireccionPersonaComuna)
{
    this->direccionPersona.setCalle(newDireccionPersonaCalle);
    this->direccionPersona.setNumero(newDireccionPersonaNumero);
    this->direccionPersona.setComuna(newDireccionPersonaComuna);
}
direccion persona::getDireccionPersona()
{
    return this->direccionPersona;

}


void persona::verPersona() //nos permite visualizar parametros de la clase persona.
{ 
    cout << endl;
    cout << "Nombre             : " << this->nombre << endl;
    cout << "apellido paterno   : " << this->apellidoPaterno << endl;
    cout << "apellido materno   : " << this->apellidoMaterno << endl;
    cout << "rut                : " << this->rut << endl;
    cout << "digitoVerificador  : " << this->digitoVerificador << endl;
}


persona::~persona() //se crea el destructor. Se inicia automaticamente al final del programa.
{
  
}