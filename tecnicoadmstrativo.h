#ifndef tecnicoadmstrativo_h
#define tecnicoadmstrativo_h
#include "IPessoa.h"
#include <vector> 
#include <string>
#include <numeric>
#include <iostream>
using namespace std;
using std::string;
using std::cout;
using std::endl;

class tecnicoadmstrativo : public IPessoa {
   private:
    string nome;
    string setor;
public:
    tecnicoadmstrativo();
    tecnicoadmstrativo(const string& nome , const string& setor ); 
    
    void set_nome(const string& nome ) override;
       string get_nome() const override;
                  void print() const override;

    void set_setor(const string& setor ) ;
       string get_setor() const ;
   

           ~tecnicoadmstrativo() override; 
};


#endif
