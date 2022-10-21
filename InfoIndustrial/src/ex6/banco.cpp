#include "banco.h"
#include <iostream>

using namespace std;

Banco::Banco() //O construtor criara 4 contas
{
    this->contas[0] = Conta(1234, 1, "Joao", "Corrente", 300);
    this->contas[1] = {4567, 2, "Jose", "Poupanca", 800};
    this->contas[2] = {7890, 3, "Maria", "Corrente", 1000};
    this->contas[3] = {8956, 4, "Madalena", "Poupanca", 2000};
    this->senhaFunc = 4321;
}

Banco::~Banco()
{
}

Conta *Banco::buscaConta(int numero)//Retorna o endereço da conta que possuir o mesmo numero informado
{
    for (int i = 0; i < NUMCONTAS; i++)
    {
        if (numero == this->contas[i].numero)
        {
            return &this->contas[i];
        }
    }

    return nullptr;
}

void Banco::transferencia(int senha, double valor, int numero, Conta* ContaCliente)
{
    Conta *contaDest;
    if(ContaCliente->getSaldo(senha) >= valor){
        ContaCliente->saque(senha,valor);
        contaDest = this->buscaConta(numero);
        contaDest->setSaldo(valor);
        std::cout << "Transferencia de " <<valor<< " realizada para a conta " << contaDest->numero << std::endl;
    }
    else{
        std::cout<< "Senha invalida!"<<std::endl;
    }
}

void Banco::atendimento() //Realiza o atendimento ao cliente(Função chamada na main)
{
    Conta *contaCliente;
    int numC = 0;
    int senhain;
    bool atendimento = true;

    cout << "Bem vindo ao sistema de atendimento do banco" << endl;
    cout << "Digite o numero da sua conta: ";
    cin >> numC;

    contaCliente = this->buscaConta(numC); //Chama o Metodo buscaConta() do banco para achar o objeto conta que possui o numero numC

    if (contaCliente == nullptr)//Se não achar nenhuma conta que corresponda entra nesse if
    {
        cout << "Conta invalida" << endl;
    }
    else
    {
        cout << "Digite a sua senha: ";
        cin >> senhain;

        if (contaCliente->validaSenha(senhain))
        {
            cout << "Ola " << contaCliente->titular << endl;
            while (atendimento) //Realiza o atendimento
            {
                int op;
                double valor;
                int numero;
                cout << "Qual operacao deseja fazer? (1 - Saque, 2 - Deposito, 3 - Ver Saldo, 4 - Transferencia, 5 - Sair): ";
                cin >> op;
                switch (op)
                {
                case 1:
                    cout << "Digite o valor: ";
                    cin>>valor;
                    contaCliente->saque(senhain,valor);
                    break;
                case 2:
                    cout << "Digite o valor: ";
                    cin>>valor;
                    contaCliente->deposito(valor);
                    break;
                case 3:
                    cout << "Saldo: R$ "<<contaCliente->getSaldo(senhain)<<endl;
                    break;
                case 4:
                    cout << "Digite o valor: ";
                    cin >> valor;
                    cout << "Digite o numero da conta que recebera: ";
                    cin >> numero;
                    this->transferencia(senhain,valor,numero,contaCliente);
                    break;
                case 5:
                    atendimento = false;
                    break;
                }
            }
        }
        else
        {
            cout << "Senha invalida" << endl;
        }
    }
}

void Banco::cadastroClientes()
{
    int senha;

    cout << "Bem vindo ao sistema de cadastro de contas" << endl;
    cout << "Digite a senha de funcionario: ";
    cin >> senha;

    if(this->senhaFunc == senha){
        int senhaConta;
        int numeroConta;
        string titular;
        string tipo;
        double valor;

        cout << "Vamos comecar o cadastro da nova conta" << endl;
        cout << "Digite a senha da conta: ";
        cin >> senhaConta;
        cout << "Digite o numero da conta: ";
        cin >> numeroConta;
        cout << "Digite o nome do titular da conta: ";
        cin >> titular;
        cout << "Digite o tipo da conta: ";
        cin >> tipo;
        cout << "Digite saldo inicial da conta: ";
        cin >> valor;

        for (int i = 0; i < NUMCONTAS; i++)
    {
        if (this->contas[i].numero == 0)
        {
            this->contas[i] = {senhaConta, numeroConta, titular, tipo, valor};
            cout << "Senha criada!" << endl;
            break;
        }
    }
    }
}