#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int vetor[10];
    cout << "Vetor randomico:" << endl;
    for(int i=0;i<10;i++){
        vetor[i] = rand();
        cout << vetor[i] << " ";
    }
    
    int len = sizeof(vetor)/sizeof(vetor[0]);
    std::sort(vetor,vetor+len);
    cout << "\nVetor organizado em ordem crescente:" << endl;
    for(int i=0;i<10;i++){
        cout << vetor[i] << " ";
    }

    return 0;
}