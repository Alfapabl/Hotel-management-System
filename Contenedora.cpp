/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Contenedora.cpp
 * Author: alfapabl
 * 
 * Created on 19 de septiembre de 2020, 09:43 AM
 */

#include "Contenedora.h"

Contenedora::Contenedora() {
   matriz = new Habitacion **[fil]; // long dinámica
    for (int i = 0; i < fil; i++)
        matriz[i] = new Habitacion*[col];
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            matriz[i][j] = NULL;
        }
    }
}

Contenedora::Contenedora(int fil, int col) {
    this->fil = fil;
    this->col = col;
     matriz = new Habitacion **[fil]; // long dinámica
    for (int i = 0; i < fil; i++)
        matriz[i] = new Habitacion*[col];
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            matriz[i][j] = NULL;
        }
    }
    this->inicializarCuartos();
}

Contenedora::Contenedora(const Contenedora& orig) {
}

Contenedora::~Contenedora() {

}

void Contenedora::inicializarCuartos(){

    for (int i = 0; i <fil; i++){
         for (int j = 0; j < col; j++) {
             
             Cliente *c = new Cliente("pamela", 666, "cacao", 999, 111);
             informacion * inf = new informacion(3,2,6, true);
             Habitacion* h = new Habitacion("x", 'O', c, inf, 2, 'P');
             this->matriz[i][j] = h;
         }
    }
}

int Contenedora::habitacionLibre() {
    int cont = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'L') {
                cont++;
            }

        }
    }
    return cont;
}

int Contenedora::habitacionMantenimiento() {
    int cont = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'M') {
                cont++;
            }

        }
    }
    return cont;
}

int Contenedora::habitacionOcupadas() {
    int cont = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'O') {
                cont++;
            }

        }
    }
    return cont;
}

string Contenedora::toStringhabitacionCamas(int num) {
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    stringstream s;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetClasificacion() == 'P' && matriz[i][j]->GetOcupacion() == 'L' && matriz[i][j]->GetCamas() == num) {
                cont1++;
            } else if (matriz[i][j]->GetClasificacion() == 'S' && matriz[i][j]->GetOcupacion() == 'L' && matriz[i][j]->GetCamas() == num) {
                cont2++;
            } else if (matriz[i][j]->GetClasificacion() == 'T' && matriz[i][j]->GetOcupacion() == 'L' && matriz[i][j]->GetCamas() == num) {
                cont3++;
            }
        }
    }
    s << "Primera clase: " << cont1 << endl;
    s << "Segunda clase: " << cont2 << endl;
    s << "Tercera clase: " << cont3 << endl;

    return s.str();
}

void Contenedora::insertarM(int fil, int col, Habitacion* hab) {
    matriz[fil][col] = hab;
    cout<< matriz[fil][col]->GetCamas()<< endl;
}

float Contenedora::precioHabitacion(int id) {
    float precio = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetC()->GetId() == id) {

                if (matriz[i][j]->GetInf()->numeroPersonas() == 1) {
                    precio = 150;
                } else if (matriz[i][j]->GetInf()->numeroPersonas() == 2) {
                    precio = 250;
                } else if (matriz[i][j]->GetInf()->numeroPersonas() == 3) {
                    precio = 350;
                } else
                    precio = 400;


            }

        }

    }
    return precio;
}

float Contenedora::precioNadaIncluido(int id) {
    float precio = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetC()->GetId() == id) {

                if (matriz[i][j]->GetInf()->numeroPersonas() == 1) {
                    precio = 150 - 150 * 0, 25;
                } else if (matriz[i][j]->GetInf()->numeroPersonas() == 2) {
                    precio = 250 - 250 * 0, 20;
                } else if (matriz[i][j]->GetInf()->numeroPersonas() == 3) {
                    precio = 350 - 350 * 0, 15;
                } else
                    precio = 400 - 400 * 0, 10;


            }

        }

    }
    return precio;
}

float Contenedora::precioClase(int id) {
    float porcentaje = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetC()->GetId() == id) {

                if (matriz[i][j]->GetClasificacion() == 'P') {
                    porcentaje = 0, 30;
                } else if (matriz[i][j]->GetClasificacion() == 'S') {
                    porcentaje = 0, 20;
                } else porcentaje = 0;

            }
        }
    }
    return porcentaje;
}

float Contenedora::pagarHabitacion(int id, bool noche) {
    float costo = 0;

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetC()->GetId() == id && matriz[i][j]->GetInf()->IsTodoIncluido() == true) {

                costo = (precioHabitacion(id)+ (matriz[i][j]->GetInf()->GetNumeroAdultos()*300) +(matriz[i][j]->GetInf()->GetNumeroNinos()*200)) * matriz[i][j]->GetInf()->GetNumeroDias();
            } else if (matriz[i][j]->GetC()->GetId() == id && matriz[i][j]->GetInf()->IsTodoIncluido() == false && noche == true) {
                costo = precioNadaIncluido(id);
            }

        }


    }

    costo = costo + costo * precioClase(id);

    return costo;
}

void Contenedora::liberarHabitacion(int id) {
    char libre = 'L';
    Cliente* cl = NULL;
    informacion* info = NULL;

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {

            if (id == matriz[i][j]->GetC()->GetId()) {
                matriz[i][j]->SetOcupacion(libre);
                matriz[i][j]->SetInf(info);
                matriz[i][j]->SetC(cl);

            }

        }
    }
}

int Contenedora::personasAdultas() {
    int aux = 0;

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'O') {
                aux = aux + matriz[i][j]->GetInf()->GetNumeroAdultos();
            }
        }
    }
    return aux;
}

int Contenedora::canNinos() {

    int aux = 0;

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'O') {
                aux = aux + matriz[i][j]->GetInf()->GetNumeroNinos();
            }
        }
    }
    return aux;
}

float Contenedora::todoIncluido() {
    float recaudado = 0;
    int id;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'O' && matriz[i][j]->GetInf()->IsTodoIncluido() == true) {
                id = matriz[i][j]->GetC()->GetId();
                recaudado = recaudado + precioHabitacion(id) + precioHabitacion(id) * precioClase(id);
            }
        }

    }
    return recaudado;
}

float Contenedora::noIncluido() {
    float recaudado = 0;
    int id;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (matriz[i][j]->GetOcupacion() == 'O' && matriz[i][j]->GetInf()->IsTodoIncluido() == false) {
                id = matriz[i][j]->GetC()->GetId();
                recaudado = recaudado + precioNadaIncluido(id);
            }
        }

    }
    return recaudado;

}

float Contenedora::totalRecaudado() {
    float total = 0;

    total = noIncluido() + todoIncluido();

    return total;
}

    


void Contenedora::setCol(int col) {
    this->col = col;
}

int Contenedora::getCol() const {
    return col;
}

void Contenedora::setFil(int fil) {
    this->fil = fil;
}

int Contenedora::getFil() const {
    return fil;
}


