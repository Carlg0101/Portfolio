#ifndef Professor_h
#define Professor_h
#include "IPessoa.h"
#include <vector> 
#include <string>
#include <numeric>
#include <iostream>
using namespace std;
using std::string;
using std::cout;
using std::endl;

class Professor : public IPessoa{
private:
    string nome;
     int codprofessor;
      string materia;
      string turma;
     
public:
    Professor();
    Professor(
        const string& nome ,
        int codprofessor,
        const string& materia, 
        const string& turma
    ); 
    
    void set_nome(const string& nome ) override;
       string get_nome() const override;
         void print() const override;
    void set_codprofessor(int codprofessor) ;
       int get_codprofessor() const ;
    void set_materia(const string& materia ) ;
       string get_materia() const ;
    void set_turma(const string& turma);
        string get_turma() const;

           ~Professor() override; 
};

#endif
