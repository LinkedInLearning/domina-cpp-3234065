/*
 * Curso: Domina C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

int main(){

    int a, b;

    // Ejemplo 1
    (a > b) ? cout << "Verdadero" << endl : cout << "Falso" << endl;

    // Ejemplo 2
    int menor = ((a < b) ? a : b);

    return 0;
}