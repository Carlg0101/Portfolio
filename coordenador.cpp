#include "coordenador.h"
#include <vector> 
#include <string>
#include <numeric>
#include "IPessoa.h"
using namespace std;

#include <iostream>

// Construtor padrão
coordenador::coordenador() :  nome("") , disciplina("") , curso(""){}

// Construtor parametrizado
coordenador::coordenador(
     const string& nome ,
     
     const string& disciplina ,
     const string& curso )
:
    nome(nome),
     disciplina(disciplina),
     curso(curso){}

// Implementação dos métodos da interface
void coordenador::set_nome(const string& nome) {
    this->nome = nome;
}
string coordenador::get_nome() const {
    return nome;
}



void coordenador::set_disciplina(const string& disciplina) {
    this->disciplina = disciplina;
}
string coordenador::get_disciplina() const {
    return disciplina;
}

void coordenador::set_curso(const string& curso) {
    this->curso = curso;
}
string coordenador::get_curso() const {
    return curso;
}
void coordenador::print() const {
   
        cout << "=== coordenador ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "materia: " << disciplina << endl;
        cout << "turma: " <<  curso <<endl; 
        
    }
    
    coordenador::~coordenador(){}