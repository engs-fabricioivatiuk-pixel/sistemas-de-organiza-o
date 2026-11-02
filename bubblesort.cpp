#include <iostream>
using namespace std;

int main(){
    int trocas = 0;
    int vetor[5] = {9, 7, 6, 2, 8}; //array inicial
    int tamanho = 5; //tamanho do array
    int temp = 0; // variavel auxiliar
    int comparar = 0; // quantidade de comparaçoes
    for(int i = 0; i < tamanho; i++){ //percorre o array
        for(int j = 0; j < tamanho - 1; j++){ // compara os elementos do array
             comparar++; // adiciona +1 na variavel comparação cada vez que entrar no if
            if(vetor[j] > vetor [j + 1]){
                 temp = vetor[j]; // guarda o valor atual
                vetor[j] = vetor[j + 1]; // realiza a troca
                vetor[j + 1] = temp; // recupera o valor guardado
                trocas++;
            }

        }
    }
    for(int n = 0; n < tamanho; n++){ // percorre o array ja corrigido
        cout << vetor[n] << " ";
    }

    cout << "a quantidade de comparações foram " << comparar << endl; // exibe a quantidade de comparaçoes feitas
    cout << "a quantidade de trocas foram " << trocas; //exibe a quantidade de trocas

}