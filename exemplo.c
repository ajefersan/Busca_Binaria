#include "busca_binaria.h"


int main(){

    int vetor[TAM];
    int  busca,g,i,a = 0,op;

    gerar_num(vetor,TAM);
    ordenar(vetor,TAM);
    printf("Digite o numero que voce deseja buscar , o numero deve estar entre 0 e 100\n");
    scanf("%d",&busca);
    system("cls||clear");
    g = pesq_bin(vetor,TAM,busca,&a);

    if(g == -1)
            printf("O numero nao foi encontrao \n");
    else
            printf("Numero encontrado na posicao %d, foram feitas %d comparacoes\n",g,a);
    printf("Deseja exibir o vetor ? 1 - S 0 - N \n");
    scanf("%d",&op);
    if(op)
        for(i=0;i<TAM;i++)
            printf("%d \n",vetor[i]);

        else
            exit(1);

        return 0;

}
