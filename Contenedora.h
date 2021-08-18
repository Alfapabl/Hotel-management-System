/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Contenedora.h
 * Author: alfapabl
 *
 * Created on 19 de septiembre de 2020, 09:43 AM
 */

#ifndef CONTENEDORA_H
#define CONTENEDORA_H
#include "Habitacion.h"

class Contenedora {
public:
    Contenedora();
    Contenedora(int fil, int col);
    Contenedora(const Contenedora& orig);
    virtual ~Contenedora();
    int habitacionLibre();
    int habitacionMantenimiento();
    int habitacionOcupadas();
    string toStringhabitacionCamas(int num);
    void insertarM(int fil, int col, Habitacion* hab);
    float precioHabitacion(int id);
    float precioNadaIncluido(int id);
    float precioClase(int id);
    float pagarHabitacion(int id, bool noche);
    void liberarHabitacion(int id);
    int personasAdultas();
    int canNinos();
    float todoIncluido();
    float noIncluido();
    float totalRecaudado();
    int Menu();
    void setCol(int col);
    int getCol() const;
    void setFil(int fil);
    int getFil() const;
    void inicializarCuartos();
    
private:
    
    Habitacion*** matriz;
    int fil;
    int col;
    

};

#endif /* CONTENEDORA_H */

