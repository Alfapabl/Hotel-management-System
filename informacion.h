/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   informacion.h
 * Author: alfapabl
 *
 * Created on 19 de septiembre de 2020, 09:55 AM
 */

#ifndef INFORMACION_H
#define INFORMACION_H

class informacion {
public:
    informacion();
    informacion(int numeroAdultos,int numeroNinos,int numeroDias, bool todoIncluido);
    informacion(const informacion& orig);
    virtual ~informacion();
    void SetTodoIncluido(bool todoIncluido);
    bool IsTodoIncluido() const;
    void SetNumeroDias(int numeroDias);
    int GetNumeroDias() const;
    void SetNumeroNinos(int numeroNinos);
    int GetNumeroNinos() const;
    void SetNumeroAdultos(int numeroAdultos);
    int GetNumeroAdultos() const;
    int numeroPersonas();
private:
    int numeroAdultos;
    int numeroNinos;
    int numeroDias;
    bool todoIncluido;
    
    
};

#endif /* INFORMACION_H */

