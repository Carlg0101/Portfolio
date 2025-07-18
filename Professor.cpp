#include "Professor.h"
#include <vector> 
#include <string>
#include <numeric>
#include "IPessoa.h"
using namespace std;

#include <iostream>

// Construtor padrão
Professor::Professor() :  codprofessor(0),nome("") , materia("") , turma(""){}

// Construtor parametrizado
Professor::Professor(
     const string& nome ,
     int codprofessor , 
     const string& materia ,
     const string& turma )
:
    nome(nome),
     codprofessor(codprofessor),
     materia(materia),
     turma(turma){}

// Implementação dos métodos da interface
void Professor::set_nome(const string& nome) {
    this->nome = nome;
}
string Professor::get_nome() const {
    return nome;
}

void Professor::set_codprofessor (int codprofessor){
    this-> codprofessor = codprofessor;
}

int Professor::get_codprofessor() const{
    return codprofessor;
}

void Professor::set_materia(const string& materia) {
    this->materia = materia;
}
string Professor::get_materia() const {
    return materia;
}

void Professor::set_turma(const string& turma) {
    this->turma = turma;
}
string Professor::get_turma() const {
    return turma;
}
void Professor::print() const {
   
        cout << "=== Professor ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "materia: " << materia << endl;
        cout << "turma: " <<  turma <<endl; 
        
    }
    
    Professor::~Professor(){}