/*
Jorge Del Barco Garza A01284234
15/11/2020
Pensamiento Computacional Orientado a Objetos

Este programa es la solución a la situación problema que requiere del desarrollo 
de un software que apoye en materia de comercio electrónico a las pymes en latinoamérica.
Específicamente este programa esta pensado para que negocios, como restaurantes, puedan manejar 
entregas a domicilio. Esto permite que el negocio opere en una
modalidad totalmente remota que se adecúa con las mediadas preventivas cotra el covid-19. Se utilizó
el paradigma de programación orientada a objetos.
*/

#include <iostream>
#include <string>
using namespace std;

// Se importan las clases que se utilizarán para crear objetos
#include "Restaurante.h"
#include "Cliente.h"
#include "Platillo.h"


int main()
{

    // Como este programa lo usará solo un restaurante solo se crea una instancia de la clase
    // Restaurante
    Restaurante restaurante1;

    // Indica que nuestro programa está corriendo
    bool run = true;


    // Declaramos variables que se utilizaran en el main para pasarlas como parametros a los metodos
    // de la clase
    string _nombreRestaurante;
    string _direccionRestaurante;
    string _telefonoRestaurante;
    string _tipoDeComidaRestaurante;
    
    // se toman los datos del dueño del negocio
    cout<<"Hola dueno de restaurante, comenzaremos registrando los datos de tu negocio\n";
    cout<<"Como se llama tu restaurante?\n";
    getline(cin, _nombreRestaurante);
    restaurante1.setNombreRestaurante(_nombreRestaurante);

    cout<<"Nombre registrado\n";
    cout<<"Escribe la direccion donde esta ubicado tu restaurante\n";
    getline(cin, _direccionRestaurante);
    restaurante1.setDireccionRestaurante(_direccionRestaurante);

    cout<<"Direccion registrada\n";
    cout<<"A que telefono pueden llamar los clientes en caso de ser necesario?\n";
    getline(cin, _telefonoRestaurante);
    restaurante1.setTelefonoRestaurante(_telefonoRestaurante);

    cout<<"Telefono registrado\n";
    cout<<"Para finalizar, que tipo de comida vende el restaurante?\n";
    getline(cin, _tipoDeComidaRestaurante);
    restaurante1.setTipoDeComidaRestaurante(_tipoDeComidaRestaurante);

    cout<<"Tipo de comida registrado\n";
    cout<<"Hemos finalizado con el registro de su negocio.\n"<<endl;

    cout<<"Todo restaurante tiene un platillos en su menu.\n";
    cout<<"Escriba por el momento 5 platillos se preparan en "<<restaurante1.getNombreRestaurante()<<"\n";

    // Se declaran las variables que pasarán los parámetros a los métodos de clase.
    string _nombrePlatillo;
    double _costoPlatillo;

    // Se crean 5 instancias de la clase platillo
    Platillo comida1, comida2, comida3, comida4, comida5;

    // Se guarda en una lista el menú
    Platillo menu[5] = {comida1, comida2, comida3, comida4, comida5};



    for(int i = 0; i<5; i++)
    {
        cout<<"Cual es el nombre del platillo "<<i+1<<"? \n";

        // ste if se hizo para que no ignorara el primer caracter del primer platillo
        // debido al cin.ignore()
        if (i == 0)
        {
            getline(cin, _nombrePlatillo);
            menu[0].setNombrePlatillo(_nombrePlatillo);
            cout<<"Cuanto cuesta este platillo? ";
            cin>>_costoPlatillo;
            menu[0].setCostoPlatillo(_costoPlatillo);

        }
        else
        {
            cin.ignore();
            getline(cin, _nombrePlatillo);
            menu[i].setNombrePlatillo(_nombrePlatillo);
            cout<<"Cuanto cuesta este platillo? ";
            cin>>_costoPlatillo;
            menu[i].setCostoPlatillo(_costoPlatillo);
        }
        
    
    }

    cout<<"Se ha registrado su menu. Ya estamos listos para recibir clientes!"<<endl;

    cout<<"------------------------------------------------------------------\n";


    // Se crea una instancia de cliente
    Cliente cliente1;

    // Se declaran 
    string _nombreCliente;
    string _direccionCliente;
    string _telefonoCliente;
    //indica con cuanto va a pagar el cliente su comida
    double _cantidadPago;

    // se toman los datos del cliente que pide la comida y al mismo tiempo se hace uso de los 
    // settet methods.
    cout<<"Hola cliente!, para pedir "<<restaurante1.getTipoDeComidaRestaurante()<<" de "
    <<restaurante1.getNombreRestaurante()<<" necesitamos pedirte unos datos.\n";
    
    cout<<"Cual es tu nombre? ";
    cin.ignore();
    getline(cin, _nombreCliente);
    cliente1.setNombreCliente(_nombreCliente);

    cout<<"Hola, "<<cliente1.getNombreCliente()<<" pasemos a registrar tu domicilio.\n";
    cout<<"Donde se entregara tu comida? ";
    cin.ignore();
    getline(cin, _direccionCliente);
    cliente1.setDireccionCliente(_direccionCliente);

    cout<<"Hemos registrado tu direccion. Para comunicarnos contigo requerimos de un telefono\n";
    cout<<"A que telefono te podemos contactar? ";
    cin.ignore();
    getline(cin, _telefonoCliente);
    cliente1.setTelefonoCliente(_telefonoCliente);

    cout<<"Felicidades "<<cliente1.getNombreCliente()<<", ya estas registrado.\n";
    cout<<"Ya puedes pedir tu comida de "<<restaurante1.getNombreRestaurante()<<"\n";
    cout<<"Este es el menu:\n";

    // Despelgamos el menu del restaurante ya registrado con las comidas ya registradas y su costo
    cout<<"Platillo:        Costo:\n";
    for(int i = 0; i<5 ; i++)
    {

        cout<<i+1<<". "<<menu[i].getNombrePlatillo()<<"............"<<menu[i].getCostoPlatillo()<<"\n";

    }

    // indica cuantos platillos de los ofrecidos en el menú el cliente iba a ordenar.
    // después de eso, el cliente elegiría la cantidad de cada uno de los platillos.
    int cantidadPlatillos;
    // indica qué platillo del menú elegirá el cliente por medio de un número
    int numeroMenuPlatillo;
    // esta variable indica cuantas ordenes de el platillo elegido se van a ordnear
    int cantidadOrdenes;
    // aqui guardamos el total de la cuenta que pagará el cliente.
    int totalAPagar = 0;

    // Aqui el cliente elige la cantidad y cuantos platillos quiere. Esto lo logramos por
    // medio del array menu, el cual contiene todos los objetos de clase Platillo.
    cout<<cliente1.getNombreCliente()<<", de los 5 platillos del menu, cuantos de ellos vas a ordenar?\n";
    cin>>cantidadPlatillos;

    // Aqui gurdamos los nombres de los platillos que elegirá el cliente
    string nombrePlatillosOrden[cantidadPlatillos];

    for (int i = 0; i<cantidadPlatillos; i++)
    {
        cout<<"Escribe el numero de platillo a ordenar: ";
        cin>>numeroMenuPlatillo;
        // agregamos el nombre del platillo a la orden
        nombrePlatillosOrden[i] = menu[numeroMenuPlatillo-1].getNombrePlatillo();
        cout<<"El platillo "<<menu[numeroMenuPlatillo-1].getNombrePlatillo()<<" cuesta "
        <<menu[numeroMenuPlatillo-1].getCostoPlatillo()<<"\n";
        cout<<"Cuantos de ellos quieres? \n";
        // este indica cuantos platillos de ese tipo se prepararán
        cin>>cantidadOrdenes;

        // se actualiza la cuenta. es un acumulador.

        totalAPagar = totalAPagar + menu[numeroMenuPlatillo-1].getCostoPlatillo()*cantidadOrdenes;

    }

    

    cout<<cliente1.getNombreCliente()<<", tu orden ha sido tomada.\n";
    cout<<"El total a pagar es: $"<<totalAPagar<<" pesos\n";
    cout<<"En un rato va a llegar a: "<<cliente1.getDireccionCliente()<<"\n";
    cout<<"Cualquier cosa te contactaremos al "<<cliente1.getTelefonoCliente()<<"\n";
    cout<<"-----------------------------------------------------\n";
    cout<<"Gracias por pedir de "<<restaurante1.getNombreRestaurante()<<"\n";
    cout<<"Telefono: "<<restaurante1.getTelefonoRestaurante()<<"\n";
    cout<<"Sucursal:"<<restaurante1.getDireccionRestaurante()<<endl;

}

