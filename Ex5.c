#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho=30,i;
	float total=0;
    int VET[tamanho];
    
    for(i=0; i<tamanho; i++)
        {
        printf("Digite o %d Valor:",i+1);
        scanf(" %d", &VET[i]);
        total=total+VET[i];
    }
    printf("\nA media: %f ",total/tamanho);
}
