/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.h
 * Author: alfapabl
 *
 * Created on 20 de septiembre de 2020, 08:26 AM
 */

#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Cliente {
public:
    Cliente();
    Cliente(string nombre, int id, string formaPago, int telefono, int cuentaBancaria);
    Cliente(const Cliente& orig);
    virtual ~Cliente();
    void SetCuentaBancaria(int cuentaBancaria);
    int GetCuentaBancaria() const;
    void SetTelefono(int telefono);
    int GetTelefono() const;
    void SetFormaPago(string formaPago);
    string GetFormaPago() const;
    void SetId(int id);
    int GetId() const;
    void SetNombre(string nombre);
    string GetNombre() const;
    
private:
    string nombre;
    int id;
    string formaPago;
    int telefono;
    int cuentaBancaria;

};

#endif /* CLIENTE_H */

