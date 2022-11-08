/*
 * Curso: Domina C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));

    int numeroAleatorio = rand();

    cout << numeroAleatorio << endl;

    return 0;
}