#include <stdio.h>
#include <stdlib.h>

int main (){
    /* Escreva um programa em C que encontra a “moda” em um vetor de 20 elementos
    digitados pelo usuário. Na estatística, a moda de uma coleção de valores é aquele que
    aparece com maior frequência, desempatando arbitrariamente.
    */

    //declarando o vetor
    int i=0,j=0;
    int v[]={15,4,3,2,1,5,7,5,4,0};
    int moda, freq=1, modaAux, freqAux=0;
    moda = v[0];

    for(i=1; i<10; i++){
        freq = v[i]==moda ? freq +1 : freq;
    }
    for(i=1; i<10; i++){
        modaAux = v[i];
        freqAux=0;
        for(j=1; j<10; j++){
            if(v[j]==modaAux)freqAux++;
        }
        if(freqAux >= freq){
            moda = modaAux;
            freq = freqAux;
        }
    }

    printf("A Moda é: %d\ncom frequencia: %d\n",moda,freq);
    return 0;
}
