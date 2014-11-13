Busca Binaria
=============
#####Algorítmo de busca binária , implementado na linguagem C

A pesquisa ou busca binária é um algoritmo de busca em vetores que segue o paradigma
de divisão e conquista. Ela parte do pressuposto de que o vetor está ordenado e
realiza sucessivas divisões do espaço de busca comparando o elemento buscado (chave)
com o elemento no meio do vetor. Se o elemento do meio do vetor for a chave, a busca
termina com sucesso. Caso contrário, se o elemento do meio vier antes do elemento
buscado, então a busca continua na metade posterior do vetor. E finalmente,
se o elemento do meio vier depois da chave, a busca continua na metade anterior do vetor.
 
O codigo abaixo cria um vetor de tamanho definido por uma constante ,e o preenche de forma
randomica com numeros entre 0 e 100, após isso o vetor randomico e ordenado,em seguida
o usuario digitara um numero para saber se este, se encontra no vetor, caso o numero
seja encontrado é retornado a posiçãodo numero no vetor e o numero de comparações
realizadas para encontralo.

######Autor: Jeferson Santos
######Data: 27/10/2014
