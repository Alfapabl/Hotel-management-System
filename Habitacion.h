/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Habitacion.h
 * Author: alfapabl
 *
 * Created on 19 de septiembre de 2020, 09:52 AM
 */

#ifndef HABITACION_H
#define HABITACION_H
#include "Cliente.h"
#include "informacion.h"
using namespace std;

class Habitacion {
public:
    Habitacion();
    Habitacion(string identificador, char ocupacion, Cliente* c, informacion* inf, int camas, char clasificacion);
    Habitacion(const Habitacion& orig);
    virtual ~Habitacion();
    void SetInf(informacion* inf);
    informacion* GetInf() const;
    void SetC(Cliente* c);
    Cliente* GetC() const;
    void SetOcupacion(char ocupacion);
    char GetOcupacion() const;
    void SetIdentificador(string identificador);
    string GetIdentificador() const;
    void SetCamas(int camas);
    int GetCamas() const;
    void SetClasificacion(char clasificacion);
    char GetClasificacion() const;
    
private:
    string identificador;
    char ocupacion;
    Cliente* c;
    informacion* inf;
    int camas;
    char clasificacion;

};

#endif /* HABITACION_H */

