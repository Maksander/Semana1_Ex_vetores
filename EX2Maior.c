#include <stdio.h>
#include <stdlib.h>

void main (){
    /*
    Escreva um programa em C que encontra o maior elemento em um vetor de 10
	valores digitados pelo usuário.
	*/
    int v[10];
    int maior;
    //pre
    int i=0;
    printf("Digite %d valor\n", i+1);
    scanf("%d",&v[i]);
    maior=v[i];
    for( i=1; i<10; i++){
        printf("Digite %d valor\n", i+1);
        scanf("%d",&v[i]);
        if(maior<v[i]){
        	maior=v[i];
		}
    }
    printf("Maior numero: %d",maior);
}
