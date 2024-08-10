/******************************************************************************
Autor: Javier Nanco.
Profesor: Diego Hernandez García.
Creado con el objetivo de solucionar la problematica del taller 2, con
soluciones brotadas en base a la rubrica entregada el 21/04/2022 Compilado en
OnlineGDB 2022. Fecha de creación: 23/04/2022 
Fecha de la última modificación: 3/05/2022 
Descripción: En el contexto del festival Lollapalooza,se requiere obtener algunos
datos para que el área de Estudios y Marketing del festival,pueda prepararse para
la próxima versión del evento. Se cuenta con dos archivos en texto plano, que
contienen la información de los asistentes y los artistas, la que deberáser leída,
procesada y cargada a una estructura de datos adecuada para su procesamiento.
LINK DEL VIDEO: https://youtu.be/-YnYJLgDxiA
*******************************************************************************/

/******************************************************************************
En el main se deberá presentar un menú con las siguientes opciones:
(a)* Cantidad de asistentes: Muestra en pantalla el número total de los asistentes
al evento.
(b)* Asistentes por comuna: En base a una comuna ingresada como texto, el sistema
entregará la lista de los asistentes por pantalla .
(c)* Convocatoria de artistas: Dada una fecha ingresada, el sistema entrega la 
lista de artistas que se presentaron aquel día y la cantidad total de asistentes
del día.
(d)* Asistentes por tipo de entrada: Muestra en pantalla los distintos tipos de 
entrada existentes y la cantidad de personas que la utilizaron y las que no.
(e) Asistentes por rango de edad: Muestra en pantalla el total de asistentes por
los siguientes rangos de edades [0-18], [19-28] y [29-99].
********************************************************************************/
#include "asistente.h"
#include "artista.h"

vector<string> split(string, char);
void leerArchivoYPasarAlVectorArt(string, artista[] , int &);
void leerArchivoYPasarAlVectorAsi(string, asistente[] , int &);
void asistentesPorComuna(asistente[], int &);
void convocatoriaDeArtistas(artista[], int &);
void asistentePorTipoDeEntrada(asistente[], int &);
void asistentesPorRangoDeEdad(asistente[], int &);

int main()
{
    int indiceArtista   = 0;
    int indiceAsistente = 0;//indice del vector o cantidad actual de elementos en el vector

    string archivoAsistente = "ASISTENTE.txt"; //el nombre del txt donde guardaremos la informacion de los asistentes.
    string archivoArtistas  = "ARTISTA.txt"; //el nombre del txt donde guardaremos la informacion de los artistas. 
    
    artista     art[1000]; //el limite del vector de artistas
    asistente   asi[1001]; //el limite del vector de asistentes
    
    leerArchivoYPasarAlVectorArt(archivoArtistas, art, indiceArtista);
    leerArchivoYPasarAlVectorAsi(archivoAsistente, asi, indiceAsistente);
    
    /*El menu consta de un do-while que nos ayudara a volver las veces que queramos a esta
    y que podamos finalizarla cuando queramos.*/
  
    int opcion;

    do{
        cout << endl<<"M e n u\n"<<endl;
        cout << "1 Cantidad de asistentes           :" << endl;
        cout << "2 Asistentes por comuna            :" << endl;
        cout << "3 Convocatoria de artistas         :" << endl;
        cout << "4 Asistentes por tipo de entrada   :" << endl;
        cout << "5 Asistentes por rango de edad     :" << endl;
        cout << "6 Salir" << endl;
        cout << "Ingrese opcion:    ";
        cin >> opcion;

        if (opcion == 1) 
        {
            cout<<"la cantidad de asistentes en el evento son:  "<<indiceAsistente<<endl;
        }
        if (opcion == 2) 
        {
            asistentesPorComuna(asi, indiceAsistente);
        }
        if (opcion == 3) 
        {
            convocatoriaDeArtistas(art, indiceArtista);
        }
        if (opcion == 4) 
        {
            asistentePorTipoDeEntrada(asi, indiceAsistente);
        }
        if (opcion == 5)
        {
            asistentesPorRangoDeEdad(asi, indiceAsistente);
        }
  
        }
    
    while(opcion !=6 );
    
    /*Las distintas opciones nos redirigen al valor guardado con anterioridad
    y posterior a eso redirigirnos al menu.*/

    return 0;
}

vector<string> split(string lineaASeparar, char delimitador) 
{
    //esta funcion nos permite crear el array que utilizaremos para el procesamiento de los datos.txt
    vector<string> vector_interno;      //#include <vector>
    stringstream linea(lineaASeparar);  //#include <sstream>
    string parteDelString;
    while(getline(linea, parteDelString, delimitador))
    vector_interno.push_back(parteDelString);
    return vector_interno;
}

void asistentesPorComuna(asistente asi[], int &indiceAsistente)
{   
    //una funcion sencilla que recorre el array para vomparar la comuna buscada
    //e imprimir todos los datos de los coincidentes
    
    string comuna;
    cout<<"ingrse una comuna. El sistema entregará la lista de los asistentes de aquella. ";
    cin>>comuna;
    
    for(int i=0; i<indiceAsistente; i++)
    {
        if(asi[i].getDireccionPersona().getComuna() == comuna)
        {
            asi[i].verPersona();
            asi[i].verAsistente();
        }
    }
}

void convocatoriaDeArtistas(artista art[], int &indiceArtista)
{
    //Se recorre con un for el arreglo y posteriormente se compara el valor del dia
    //el mes y el aho para imprimir los coincidentes en pantalla con la funciones verArtista y verPersona.
    
    int dia, mes, aho;
    cout<<"ingrse dia:  ";
    cin>>dia;
    cout<<"ingrse mes:  ";
    cin>>mes;
    cout<<"ingrse aho   :";
    cin>>aho;
    
    for(int i=0; i<indiceArtista; i++)
    {
        if(art[i].getFechaEvento().getDia() == dia)
        {
            if(art[i].getFechaEvento().getMes() == mes)
            {
                if(art[i].getFechaEvento().getAho() == aho)
                {
                    art[i].verPersona();
                    art[i].verArtista();    
                }
            }
        }    
    }
}

void asistentePorTipoDeEntrada(asistente asi[], int &indiceAsistente)
{
    //personalmente la funcion mas sencilla de todas, con un for se recorre el arreglo
    //para buscar el tipo de entrada solicitada. posteriormente lo imprime en pantalla
    //con la funciones ver de persona y asistente.
    
    int tipoEntrada;
    cout << "tipos de entradas: "   << endl;
    cout << "1.PASE GENERAL"        << endl;
    cout << "2.LOLLA LOUNGE"        << endl;
    cout << "3.LOLLA LOUNGE PREMIUM"<< endl;
    cout <<"ingrese el numero del tipo de entrada, se imprimira"<<endl;
    cout <<"en pantalla los asistentes que la posean:   "       <<endl;
    cin  >>tipoEntrada;
    for(int i=0; i<indiceAsistente; i++)
    {
        if(asi[i].getTipoEntrada() == tipoEntrada)
        {
            asi[i].verPersona();
            asi[i].verAsistente();
        }    
    }
}

void asistentesPorRangoDeEdad(asistente asi[], int &indiceAsistente)
{
    int rangoPorEdad;
    cout << "Rango de edades: " << endl;
    cout << "1.[0-18]"          << endl;
    cout << "2.[19-28]"         << endl;
    cout << "3.[29-99]"         << endl;
    cout <<"ingrese el numero del rango, se imprimira"  <<endl;
    cout <<"en pantalla los asistentes que lo posean:"  <<endl;
    cin  >>rangoPorEdad;
    
    //con un for recorremos el arreglo de tal manera que podamos comparar los años
    //de nacimiento de las personas con parametros indicados en la guia del taller 2
    //posterior a eso llamamos a las funciones ver que se encuentran en las otras clases
    
    for(int i=0; i<indiceAsistente; i++)
    {
        if(rangoPorEdad==1)
        {
            if(asi[i].getFechaPersona().getAho() >= 2004)
            {
                asi[i].verPersona();
                asi[i].verAsistente();
                asi[i].getFechaPersona().verFecha();
            }
        }
        if(rangoPorEdad==2)
        {
            if(asi[i].getFechaPersona().getAho() >= 1994 && asi[i].getFechaPersona().getAho() <= 2003)
            {
                asi[i].verPersona();
                asi[i].verAsistente();
                asi[i].getFechaPersona().verFecha();
            }    
        }
        if(rangoPorEdad==3)
        {
            if(asi[i].getFechaPersona().getAho() >= 1923 && asi[i].getFechaPersona().getAho() <= 1993)
            {
                asi[i].verPersona();
                asi[i].verAsistente();
                asi[i].getFechaPersona().verFecha();
            }    
        }
        
    }
}

void leerArchivoYPasarAlVectorArt(string nombreArchivo, artista art[] , int &indiceArtista)
{
    //funcion que nos permite llenar el arreglo con los datos expuestos en ARTISTA.txt
    ifstream archivo;
    string lineaObtenida;
    string palabra;

    archivo.open(nombreArchivo, ios::in);
    
    if(archivo.is_open() == true) 
    {
        while( getline(archivo, lineaObtenida, '\n'))
        {
            //ahora recorremos la línea
            vector<string> data = split(lineaObtenida, ';');
            
            //TIP: Utilice atoi para convertir un vector de caracteres a un número
            art[indiceArtista].setRut(atoi(data[0].c_str()) );
            
            art[indiceArtista].setDigitoVerificador(data[1][0]);
            
            art[indiceArtista].setFechaPersona(atoi(data[2].c_str()),atoi(data[3].c_str()),atoi(data[4].c_str()));
            
            art[indiceArtista].setNombre(data[5]);
            
            art[indiceArtista].setApellidoPaterno(data[6]);
            
            art[indiceArtista].setApellidoMaterno(data[7]);
            
            art[indiceArtista].setDireccionPersona(data[8], atoi(data[9].c_str()), data[10]);
            
            art[indiceArtista].setFechaEvento(atoi(data[11].c_str()),atoi(data[12].c_str()),atoi(data[13].c_str()));
            
            art[indiceArtista].setNombreArtistico(data[14]);
            
            art[indiceArtista].setGeneroMusical(data[15]);
            
            
            indiceArtista++;
        }
    }
    archivo.close();
}

void leerArchivoYPasarAlVectorAsi(string nombreArchivo, asistente asi[] , int &indiceAsistente)
{
    //funcion que nos permite llenar el arreglo con los datos expuestos en ASISTENTE.txt
    ifstream archivo;
    string lineaObtenida;
    string palabra;

    archivo.open(nombreArchivo, ios::in);
    
    if(archivo.is_open() == true) 
    {
        while( getline(archivo, lineaObtenida, '\n'))
        {
            //ahora recorremos la línea
            vector<string> data = split(lineaObtenida, ';');
            
            //TIP: Utilice atoi para convertir un vector de caracteres a un número
            asi[indiceAsistente].setRut(atoi(data[0].c_str()) );
            
            asi[indiceAsistente].setDigitoVerificador(data[1][0]);
            
            asi[indiceAsistente].setNombre(data[2]);
            
            asi[indiceAsistente].setApellidoPaterno(data[3]);
            
            asi[indiceAsistente].setApellidoMaterno(data[4]);
            
            asi[indiceAsistente].setFechaPersona(atoi(data[5].c_str()),atoi(data[6].c_str()),atoi(data[7].c_str()));
            
            asi[indiceAsistente].setDireccionPersona(data[8], atoi(data[9].c_str()), data[10]);
            
            asi[indiceAsistente].setTipoEntrada(atoi(data[11].c_str()));
            
            asi[indiceAsistente].setFechaEvento(atoi(data[12].c_str()),atoi(data[13].c_str()),atoi(data[14].c_str())); /**/
            
            asi[indiceAsistente].setOcupado(atoi(data[15].c_str()));
            
            
            indiceAsistente++;
        }
    }
    archivo.close();
}

/*
apuntes Diego Hernandez y Javier Nanco

asi[i].getDireccionPersona().getComuna()
direccion d=asi[i].getDireccionPersona()
string comuna=d.getComuna()

18539464;616;Francisca Andrea;Aravena;Arancibia;7;9;2005;TAMARUGOS;4710;RENCA;1;19;3;2022;1=data
[6,1,6]=data[1]
6=data[0]

*/