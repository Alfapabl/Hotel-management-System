/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alfapabl
 *
 * Created on 15 de septiembre de 2020, 08:30 PM
 */

#include <cstdlib>
#include "Contenedora.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Contenedora * cH = new Contenedora (3, 3);
    Habitacion * h = new Habitacion ();
    Contenedora *h1 = new Contenedora();
    Cliente* c1=new Cliente("pamela", 666, "cacao", 999, 111);
    Cliente* c2=new Cliente("pablo", 660, "cacao", 999, 111);
    informacion * inf = new informacion(1,6,6, true);
    int i =0; 
    int j=0;
    h->SetCamas(3);
    h->SetOcupacion('L');
    h->SetClasificacion('S');
    h->SetC(c1);
    h->SetInf(inf);
    h->SetC(c2);
    
    cH->insertarM(i, j, h);
    

    cout << "Habitaciones libres:  " << cH->habitacionLibre() << endl;
    cout << "Habitaciones ocupadas: " << cH->habitacionOcupadas() << endl;
    cout << "Habitaciones en mantenimiento" << cH->habitacionMantenimiento() << endl;
    cout << "Habitaciones desocupadas por cantidad de camas:  " << cH->toStringhabitacionCamas(3) << endl;
    cout << "Pago de habitación: " << cH->pagarHabitacion(666, false) << endl;
    cout << "Cantidad de personas adultas:  " << cH->personasAdultas() << endl;
    cout << "Cantidad de niños:  " << cH->canNinos() << endl;
    cout << "Dinero recaudado por clientes no incluido:  " << cH->noIncluido() << endl;
    cout << "Dinero recaudado por clientes todo incluido:  " << cH->todoIncluido() << endl;
    cout << "Dinero total recaudado: " << cH->totalRecaudado() << endl;
    cout << "Se cambió la habitación a libre y se elimina la información del cliente" << endl;
    cH->liberarHabitacion(660);
    cout << " Gracias por visitarnos";
    
   /*Se inicializaron todos los métodos con los siguientes datos:
      Cliente *c = new Cliente("pamela", 666, "cacao", 999, 111);
      informacion * inf = new informacion(3,2,6, true);
      Habitacion* h = new Habitacion("x", 'O', c, inf, 2, 'P');
    Utilizando el método Contenedora::inicializarCuartos();
    */
       
return 0;

}

