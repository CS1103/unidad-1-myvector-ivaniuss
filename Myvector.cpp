//
// Created by Ivan Mamani on 31/08/2019.
//

#include "MyVector.h"

using namespace UTEC;

MyVector::MyVector(): data{nullptr}, nelem{0} {

}

MyVector::MyVector(int n): nelem{n} {
    data = new int[nelem];
}

MyVector::~MyVector() {
    delete [] data;
}

int MyVector::size() {
    return nelem;

}

void MyVector::push_back(int value) {
    // 1. Crear temporal
    int *temp = new int[nelem + 1];

    // 2. Transferir los datos a temp
    for(int i = 0; i < nelem; ++i)
        temp[i] = data[i];

    // 3. Borrar memoria anterior
    delete [] data;

    // 4. Apuntando a memoria actual
    data = temp;

    // 5. Actualizando valor
    data[nelem] = value;

    // 6. Actualizando valor
    nelem++;

}

void MyVector::insert(int value, int position) {

    // 1. Crear temporal
    int *temp = new int[nelem + 1];

  try{
        if (position > nelem+1)
            throw(position);
        else{
            for(int i = 0; i < nelem+1; i++){
                if(i < position)
                    temp[i] = data[i];
                else if (i == position)
                    temp[i] = value;
                else
                    temp[i] = data[i-1];
            }


            // 3. Borrar memoria anterior
            delete [] data;

            // 4. Apuntando a memoria actual
            data = temp;

            // 6. Actualizando valor
            nelem++;

        }

    }


catch (int x){
    std::cout << "fuera del limite ";
    exit(0);
}
}

void MyVector::pop_back() {
// 1. Crear temporal
    int *temp = new int[nelem - 1];

    // 2. Transferir los datos a temp
    for(int i = 0; i < nelem-1; ++i)
        temp[i] = data[i];

    // 3. Borrar memoria anterior
    delete [] data;

    // 4. Apuntando a memoria actual
    data = temp;

    // 6. Actualizando valor
    nelem--;

}



void MyVector::erase (int position) {
// 1. Crear temporal
    int *temp = new int[nelem - 1];
    try {
        if (position > nelem+1)
            throw(position);
        else
        {

            // 2. Transferir los datos a temp
            for(int i = 0; i < nelem+1; i++){
                if(i < position)
                    temp[i] = data[i];
                else
                    temp[i] = data[i+1];
            }
            // 3. Borrar memoria anterior
            delete [] data;

            // 4. Apuntando a memoria actual
            data = temp;

            // 6. Actualizando valor
            nelem--;


        }
    }

    catch (int x){
        std::cout << "fuera del limite ";
        exit(0);
    }
}

void MyVector::mostrarVector() {
    for(int i = 0; i < nelem; i++)
        std::cout << data[i] <<" ";
    std::cout << "\n";
}
int MyVector::operator[](int index) {
    return data[index];
}

UTEC::MyVector UTEC::MyVector::operator+(const UTEC::MyVector& otro) {
    int j = 0;
    MyVector mivector;
    int *temp= nullptr;
    mivector.nelem = nelem + otro.nelem;
    temp = new int[mivector.nelem];
    for(int i = 0; i < mivector.nelem; i++){
        if (i < nelem)
            temp[i] = data[i];
        else{

            temp[i] = otro.data[j];
            j++;

        }}

    delete [] data;

    data = temp;

    nelem = mivector.nelem;
    for(int i = 0; i < mivector.nelem; i++)
      std::cout << data[i] <<" ";

    std::cout << "\n";

}


