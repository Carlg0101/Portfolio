#ifndef coordenador_h
#define coordenador_h
#include "IPessoa.h"
#include <vector> 
#include <string>
#include <numeric>
#include <iostream>
using namespace std;
using std::string;
using std::cout;
using std::endl;

class coordenador : public IPessoa{
private:
    string nome;
     
      string disciplina;
      string curso;
     
public:
    coordenador();
    coordenador(
        const string& nome ,
       
        const string& disciplina, 
        const string& curso
    ); 
    
    void set_nome(const string& nome ) override;
       string get_nome() const override;
    void print() const override;

    void set_disciplina(const string& disciplina ) ;
       string get_disciplina() const ;
    void set_curso(const string& curso);
        string get_curso() const;

           ~coordenador() override; 
};

#endif
