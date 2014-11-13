#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Função de busca binaria
int buscabin_pesquisar(int v[],int tam,int valor,int * a) 
{
    int iMenor,iMaior,i;
    iMenor =0, iMaior = tam -1;

    while(iMenor <= iMaior) {
        i = (iMenor + iMaior)/2;
            //Sempre resultara em numero inteiro

        if(v[i]  == valor) {
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
void buscabin_gerarnum(int v[],int tam)
{
    int i;
    srand((unsigned)time(NULL));
    for(i=0;i<tam;i++)
        v[i] = rand() % 100;
}

//função que ordena o vetor (Buble sort)
void buscabin_ordenar(int v[],int tam)
{
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
