//
// Created by Ivan Mamani on 31/08/2019.
//

#ifndef TAREA_MYVECTOR_H
#define TAREA_MYVECTOR_H

#include <iostream>

using TipoElemento = int;
namespace UTEC{

    class MyVector {
    private:
        TipoElemento* data;
        TipoElemento nelem;

    public:
        MyVector();
        MyVector(int);
        virtual ~MyVector();
        int size();
        void push_back(int);
        void pop_back();
        void insert(int, int);
        void erase(int);
        void mostrarVector();
        int operator[](int);
        MyVector operator+(const MyVector& otro);



    };


}
#endif //TAREA_MYVECTOR_H
