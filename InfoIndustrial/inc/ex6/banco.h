#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

#define NUMCONTAS 100 //Define que a palavar NUMCONTAS passa a valer como escrever 100

class Banco
{
private:
    Conta contas[NUMCONTAS];//Cria um vetor de objetos do tipo Conta que pode armazenar até 100 contas
    int senhaFunc;
public:
    Banco();
    ~Banco();
    Conta* buscaConta(int numero); //Metodo que retorna o endereço do objeto conta que possui o mesmo numero informado
    void atendimento();
    void transferencia(int senha, double valor, int numero, Conta* ContaCliente);
    void cadastroClientes();

};


#endif