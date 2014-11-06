/*
*A pesquisa ou busca binária é um algoritmo de busca em vetores que segue o paradigma
*de divisão e conquista. Ela parte do pressuposto de que o vetor está ordenado e
*realiza sucessivas divisões do espaço de busca comparando o elemento buscado (chave)
*com o elemento no meio do vetor. Se o elemento do meio do vetor for a chave, a busca
*termina com sucesso. Caso contrário, se o elemento do meio vier antes do elemento
*buscado, então a busca continua na metade posterior do vetor. E finalmente,
*se o elemento do meio vier depois da chave, a busca continua na metade anterior do vetor.
 
* O codigo abaixo cria um vetor de tamanho definido por uma constante ,e o preenche de forma
*randomica com numeros entre 0 e 100, após isso o vetor randomico e ordenado,em seguida
*o usuario digitara um numero para saber se este, se encontra no vetor, caso o numero
*seja encontrado é retornado a posiçãodo numero no vetor e o numero de comparações
*realizadas para encontralo.
 
Autor: Jeferson Santos
Data: 27/10/2014
 
 
*/
 
 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 100
int pesqBin(int v[],int tam,int valor,int *a);
void gerarNum(int v[],int tam);
void ordenar(int v[],int tam);
//Função principal
int main(){
 
    int vetor[TAM];
        int  busca,g,i,a = 0,op;
        gerarNum(vetor,TAM);
        ordenar(vetor,TAM);
        printf("Digite o numero que voce deseja buscar , o numero deve estar entre 0 e 100\n");
        scanf("%d",&busca);
        system("cls||clear");
 
        g = pesqBin(vetor,TAM,busca,&a);
        if(g == -1)
                printf("O numero nao foi encontrao \n");
        else
                printf("Numero encontrado na posicao %d, foram feitas %d comparacoes\n",g,a);
        printf("Deseja exibir o vetor ? 1 - S 0 - N \n");
        scanf("%d",&op);
        if(op)
        for(i=0;i<TAM;i++)
            printf("%d \n",vetor[i]);
        else   exit(1);
 
        return 0;
 
}
//Função de busca binaria
int pesqBin(int v[],int tam,int valor,int * a){
    int iMenor,iMaior,i;
    iMenor =0, iMaior = tam -1;
    while(iMenor <= iMaior){
        i = (iMenor + iMaior)/2;
        //Sempre resultara em numero inteiro
 
        if(v[i]  == valor){
            (*a)++;
            return i;
        }
        else if(v[i]  < valor) {
            (*a)++;
             iMenor = i+1;
        }
        else {
            (*a)++;
            iMaior = i-1;
 
        }
    }
 
    return -1;
}
//preenchimento  do vetor com numeros entre 0 e 100
void gerarNum(int v[],int tam){
        int i;
        srand((unsigned)time(NULL));
        for(i=0;i<tam;i++)
                v[i] = rand() % 100;
 
}
 
//função que ordena o vetor (Buble sort)
void ordenar(int v[],int tam){
        int aux;
        int i,j;
        for(i=0;i<tam;i++){
                for(j=i+1;j<tam;j++){
                        if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
 
            }
                }
 
        }
 
}