#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho=6,i,media=0,troca;
    int VET[tamanho];
    int OrdVet[tamanho];
    //popula_______________________________________________
    for(i=0; i<tamanho; i++)
        {
        printf("Digite o %d Valor:",i+1);
        scanf(" %d", &VET[i]);
        OrdVet[i]=VET[i];
    }
    //Ordena_Sem_Repetir________________________________
    i=0;
    do{
    	//system("PAUSE");
    	if(OrdVet[i+1]<OrdVet[i]){
            troca=OrdVet[i];
            OrdVet[i]=OrdVet[i+1];
            OrdVet[i+1]=troca;
            i=0;
        }
        else if(OrdVet[i+1]==OrdVet[i]){
        	troca=OrdVet[tamanho-1];
        	OrdVet[tamanho-1]=OrdVet[i];
        	OrdVet[i]=troca;
        	tamanho = tamanho - 1;
        	i=0;
		}
		else i++;
	}while(i<tamanho-1);
    //imprime______________________________________________
    //for( i=0; i<tamanho; i++)printf("%d,", OrdVet[i]);
    for( i=0; i<tamanho; i++)printf("%d%s",OrdVet[i],i < tamanho-1 ? "," : "");
    return 0;
}
