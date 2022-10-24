#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

class Banco
{
private:
    Conta *contas;
    int senhaFunc;
    int tam;
    int top;
public:
    Banco(int = 10);
    ~Banco();
    Conta* buscaConta(int numero); //Metodo que retorna o endereço do objeto conta que possui o mesmo numero informado
    void atendimento();
    void transferencia(int senha, double valor, int numero, Conta* ContaCliente);
    void cadastroClientes();
    void removeClientes(Conta&);

};


#endif