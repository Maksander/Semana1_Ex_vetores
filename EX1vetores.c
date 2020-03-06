#include <stdio.h>
#include <stdlib.h>

void main (){
    //Escreva um programa em C que lê 15 números inteiros e os armazena em um vetor.
    //A seguir, o programa exibe cada número seguido da mensagem “par” ou “ímpar”.
    //declarando um vetor
    int v[15];
    //pre
    int i;
    for( i=0; i<15; i++){
        printf("Digite %d valor\n", i+1);
        scanf("%d",&v[i]); // & operador de extração
    }
    // exibindo de acor com a paridade
    for ( i=0; i<15; i++){
        printf("v[%d]=%d:%s\n",i,v[i],v[i]%2 == 0 ? "par" : "impar");// operador ternario :
    }
    //return 0;
    
    
}
