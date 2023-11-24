#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    
    int numero[5];
    double nImpar = 0;
    double nNeg = 0;
    double nMaior;
    double nMenor = 999999;
    double somaTotal;
    double somaPar;
    double mediaN = 0;
    double mediaPar = 0;

    int i;
    int iPar;


    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d° numero \n", i+1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            iPar++;

            somaPar += numero[i];

            mediaPar = somaPar / iPar;

        } else if (numero[i] % 2 != 0)
        {
            nImpar++;
        }

        if (numero[i] > nMaior){
            nMaior = numero[i];
        }  
        
        if (numero[i] < nMenor){
            nMenor = numero[i];
        }

        if (numero[i] < 0){
            nNeg++;
        }


        somaTotal += numero[i];

        mediaN = somaTotal / 5;
    }



    printf("Quantidade de numeros impares: %0.lf \n", nImpar);
    printf("Quantidade de numeros negativos: %0.lf \n", nNeg);
    printf("Maior Numero: %0.lf Menor Numero: %0.lf \n", nMaior, nMenor);
    printf("Media de Numeros Pares: %0.lf \n", mediaPar);
    printf("Media total: %0.lf \n", mediaN);
    
    

 }
