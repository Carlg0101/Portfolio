#include "tecnicoadmstrativo.h"
#include <vector> 
#include <string>
#include <numeric>
#include "IPessoa.h"
using namespace std;

#include <iostream>

// Construtor padrão
tecnicoadmstrativo::tecnicoadmstrativo() :  nome("") , setor(""){}

// Construtor parametrizado
tecnicoadmstrativo::tecnicoadmstrativo(
       const string& nome,
       const string& setor )
:
    nome(nome),
    setor(setor){}

// Implementação dos métodos da interface
void tecnicoadmstrativo::set_nome(const string& nome) {
    this->nome = nome;
}
string tecnicoadmstrativo::get_nome() const {
    return nome;
}



void tecnicoadmstrativo::set_setor(const string& setor) {
    this->setor = setor;
}
string tecnicoadmstrativo::get_setor() const {
    return setor;
}


void tecnicoadmstrativo::print() const {
   
        cout << "=== coordenador ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Setor: " << setor << endl;

    }
    
    tecnicoadmstrativo::~tecnicoadmstrativo(){}