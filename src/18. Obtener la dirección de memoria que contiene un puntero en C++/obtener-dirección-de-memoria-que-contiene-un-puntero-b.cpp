/*
 * Curso: Domina C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

int main(){

    int numeroAleatorio = 10;
    int *p_numeroAleatorio = &numeroAleatorio;

    cout << p_numeroAleatorio << endl;
    
    return 0;
}