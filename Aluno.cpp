#include "Aluno.h"
#include <vector> 
#include <string>
#include <numeric>
#include "IPessoa.h"
using namespace std;

#include <iostream>

IPessoa::~IPessoa() {}
// Construtor padrão
Aluno::Aluno() :  matricula(0){}

// Construtor parametrizado
Aluno::Aluno(const string& nome ,int matricula )
:nome(nome),matricula(matricula){}

// Implementação dos métodos da interface
void Aluno::set_nome(const string& nome) {
    this->nome = nome;
}
string Aluno::get_nome() const {
    return nome;
}

void Aluno::set_matricula (int matricula){
    this-> matricula = matricula;
}

int Aluno::get_matricula() const{
    return matricula;
}


void Aluno::adicionarNota(float nota){
    notas.push_back(nota);
}

float Aluno::calcularMedia() const{
    if(notas.empty()){
        return 0.0f;
    }
    float soma = 0.0f;
    for(float nota:notas){
        soma += nota;
    }
    
    return soma / notas.size();

}





void Aluno::print() const {
   
        cout << "=== ALUNO ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Matrícula: " << matricula << endl;
        cout << "Média das notas: " <<  endl; 
        if (notas.empty()) {
            cout<<"Nenuma nota adicionada"<<endl;
        } else {
            for (size_t i = 0; i < notas.size();++i){
                cout<<notas[i] << (i == notas.size() - 1 ? "" : "");
            }
            cout<<endl;
        }
        
        cout<<"Media das notas:" << calcularMedia() << endl;
    }
    
    Aluno::~Aluno(){}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    