/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.cpp
 * Author: alfapabl
 * 
 * Created on 20 de septiembre de 2020, 08:26 AM
 */

#include "Cliente.h"

Cliente::Cliente() {
}

Cliente::Cliente(string nombre, int id, string formaPago, int telefono, int cuentaBancaria){
            this->nombre=nombre;
            this->id=id;
            this->formaPago=formaPago;
            this->telefono=telefono;
            this->cuentaBancaria=cuentaBancaria;
}

Cliente::Cliente(const Cliente& orig) {
}

Cliente::~Cliente() {
}

void Cliente::SetCuentaBancaria(int cuentaBancaria) {
    this->cuentaBancaria = cuentaBancaria;
}

int Cliente::GetCuentaBancaria() const {
    return cuentaBancaria;
}

void Cliente::SetTelefono(int telefono) {
    this->telefono = telefono;
}

int Cliente::GetTelefono() const {
    return telefono;
}

void Cliente::SetFormaPago(string formaPago) {
    this->formaPago = formaPago;
}

string Cliente::GetFormaPago() const {
    return formaPago;
}

void Cliente::SetId(int id) {
    this->id = id;
}

int Cliente::GetId() const {
    return id;
}

void Cliente::SetNombre(string nombre) {
    this->nombre = nombre;
}

string Cliente::GetNombre() const {
    return nombre;
}

