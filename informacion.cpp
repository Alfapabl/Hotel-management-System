/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   informacion.cpp
 * Author: alfapabl
 * 
 * Created on 19 de septiembre de 2020, 09:55 AM
 */

#include "informacion.h"

informacion::informacion() {
}
informacion::informacion(int numeroAdultos,int numeroNinos,int numeroDias, bool todoIncluido){
    this->numeroAdultos=numeroAdultos;
    this->numeroDias=numeroDias;
    this->numeroNinos=numeroNinos;
    this->todoIncluido=todoIncluido;
}

informacion::informacion(const informacion& orig) {
}

informacion::~informacion() {
}

void informacion::SetTodoIncluido(bool todoIncluido) {
    this->todoIncluido = todoIncluido;
}

bool informacion::IsTodoIncluido() const {
    return todoIncluido;
}

void informacion::SetNumeroDias(int numeroDias) {
    this->numeroDias = numeroDias;
}

int informacion::GetNumeroDias() const {
    return numeroDias;
}

void informacion::SetNumeroNinos(int numeroNinos) {
    this->numeroNinos = numeroNinos;
}

int informacion::GetNumeroNinos() const {
    return numeroNinos;
}

void informacion::SetNumeroAdultos(int numeroAdultos) {
    this->numeroAdultos = numeroAdultos;
}

int informacion::GetNumeroAdultos() const {
    return numeroAdultos;
}

int informacion::numeroPersonas(){
   int personas=0;
    personas=informacion::GetNumeroAdultos()+ informacion::GetNumeroNinos();
    
    return personas;
}