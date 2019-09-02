#include <iostream>
#include <cassert>
#include "Myvector.h"

using namespace UTEC;

using namespace std;
int main() {

    MyVector v1;
    assert(v1.size() == 0);
    cout << "El tamanio de su vector es: " << v1.size() << endl;
    v1.push_back(15);
    v1.push_back(20);
    v1.push_back(5);
    v1.push_back(15);
    v1.push_back(6);

    assert(v1.size() == 5);


    cout << "El tamanio de su vector es: " << v1.size() << endl;
    v1.mostrarVector();

    v1.pop_back();
    cout << "El tamanio de su vector es: " << v1.size() << endl;
    v1.mostrarVector();

    v1.insert(4,1);
    cout << "El tamanio de su vector es: " << v1.size() << endl;
    v1.mostrarVector();

    v1.erase(3);
    cout << "El tamanio de su vector es: " << v1.size() << endl;
    v1.mostrarVector();

    MyVector v2;
    v2.push_back(6);
    v2.push_back(9);
    assert(v2.size() == 2);
    cout << "El tamanio de su vector es v2: " << v2.size() << endl;
    v2.mostrarVector();

    cout << "La concatenacion del vector 1 y 2 es  "; v1+v2;

    return 0;
}