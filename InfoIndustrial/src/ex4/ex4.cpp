#include <iostream>

using namespace std;

int tamanhoNome(char* nome){
    int n=0;
    while(*nome){
        n++;
        *nome++;
    }
    return n;
}

void inverteNome(char* nome){
    int n,tam = tamanhoNome(nome);
    char nomeInvertido[n];
    //cout<<tam;
    for(int i=0;i<tam;i++){
        n--;
        nomeInvertido[i] = nome[n];
        cout<<nome[n]; 
    }
    nome = nomeInvertido;
}