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
    if(a > b) cout << "Verdadero" << endl;
    else cout << "Falso" << endl;

    // Ejemplo 2
    int menor;

    if(a < b) menor = a;
    else menor = b;

    return 0;
}