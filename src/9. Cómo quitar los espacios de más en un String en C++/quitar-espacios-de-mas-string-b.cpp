/*
 * Curso: Domina C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){

    string correoElectronico = "conta   cto @ eliezer lop ez. com";

    correoElectronico.erase(remove_if(correoElectronico.begin(), correoElectronico.end(), ::isspace), correoElectronico.end());

    cout << correoElectronico << endl;

    return 0;
}