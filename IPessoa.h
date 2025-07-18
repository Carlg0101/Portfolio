
#ifndef IPESSOA_H
#define IPESSOA_H
#include <string>
using std::string;
class IPessoa {
    protected:
      // Métodos abstratos
    virtual void set_nome(const string& nome) = 0;
    virtual string get_nome() const = 0;
    virtual void print() const = 0;
   

    // Destrutor virtual puro
    virtual ~IPessoa() = 0;
};
#endif