#ifndef Aluno_h
#define Aluno_h
#include "IPessoa.h"
#include <vector> 
#include <string>
#include <numeric>
#include <iostream>
using namespace std;

// Classe Func implementa a interface IFuncionario
class Aluno : public IPessoa {
private:
     string nome;
    int matricula;
     vector<float>notas;

public:
    // Construtores
    Aluno();
    Aluno(const string& nome ,int matricula);

    // Métodos da interface
    void set_nome(const string& nome ) override ;
    string get_nome() const override;
    void print() const override;
    
    void set_matricula(int matricula);
    int get_matricula() const;
    void adicionarNota(float nota);
    float calcularMedia() const;
    
    
~Aluno() override; 
};

#endif