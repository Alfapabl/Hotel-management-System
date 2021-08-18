/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Habitacion.cpp
 * Author: alfapabl
 * 
 * Created on 19 de septiembre de 2020, 09:52 AM
 */

#include "Habitacion.h"

Habitacion::Habitacion() {
}

Habitacion::Habitacion(string identificador, char ocupacion, Cliente* c, informacion* inf, int camas,char clasificacion) {
            this->identificador=identificador;
            this->ocupacion=ocupacion;
            this->c=c;
            this->inf=inf;
            this->camas=camas;
            this->clasificacion=clasificacion;

}

Habitacion::Habitacion(const Habitacion& orig) {
}

Habitacion::~Habitacion() {
}

void Habitacion::SetInf(informacion* inf) {
    this->inf = inf;
}

informacion* Habitacion::GetInf() const {
    return inf;
}

void Habitacion::SetC(Cliente* c) {
    this->c = c;
}

Cliente* Habitacion::GetC() const {
    return c;
}

void Habitacion::SetOcupacion(char ocupacion) {
    this->ocupacion = ocupacion;
}

char Habitacion::GetOcupacion() const {
    return ocupacion;
}

void Habitacion::SetIdentificador(string identificador) {
    this->identificador = identificador;
}

string Habitacion::GetIdentificador() const {
    return identificador;
}

void Habitacion::SetCamas(int camas) {
    this->camas = camas;
}

int Habitacion::GetCamas() const {
    return camas;
}

void Habitacion::SetClasificacion(char clasificacion) {
    this->clasificacion = clasificacion;
}

char Habitacion::GetClasificacion() const {
    return clasificacion;
}

