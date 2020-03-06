#include <stdio.h>
#include <stdlib.h>

void main (){
    /*Escreva um programa em C que ordena um vetor de 40 elementos digitados pelo
	usu�rio.
	*/
	int tamanhoV=40;
    int v[tamanhoV];
    int i=0;
    int troca;
    //popula_______________________________________________
    for( i=0; i<tamanhoV; i++){
        printf("Digite %d valor\n", i+1);
        scanf("%d",&v[i]); // & operador de extração
    }
    //ordena_______________________________________________
    for(i=0; i<tamanhoV-1; i++){
		if(v[i+1]<v[i]){
    		troca=v[i];
    		v[i]=v[i+1];
    		v[i+1]=troca;
    		i=-1;
    	}
	}
	printf("\n");
    //imprime______________________________________________
    for( i=0; i<tamanhoV; i++)printf(" %d,", v[i]);
    //system("PAUSE");
}
