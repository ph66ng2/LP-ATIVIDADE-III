#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");


    double peso[5];
    double altura[5];
    char nome[5][250];
    int idade[5];

    int i;

    double maiorPeso;
    double menorPeso = 9999;
    double maiorAltura; 
    double menorAltura = 9999;
    int maiorIdade; 
    int menorIdade = 99999;


    for ( i = 0; i < 5; i++)
    {
        fflush(stdin);

        printf("Escreva o %d° nome", i+1);
        gets(nome[i]);

        printf("Escreva o peso da %d° pessoa", i+1);
        scanf("%lf", &peso[i]);

        printf("Escreva a altura da %d° pessoa", i+1);
        scanf("%lf", &altura[i]);

        printf("Escreva a idade da %d° pessoa", i+1);
        scanf("%d", &idade[i]);

        fflush(stdin);

        if (altura[i] > menorAltura)
    {
        menorAltura = altura[i];
    } else if (maiorAltura < altura[i])
    {
        maiorAltura = altura[i];
    }


    if (peso[i] > menorPeso)
    {
        menorPeso = peso[i];
    } else if (maiorPeso < peso[i])
    {
        maiorPeso = peso[i];
    }


    if (idade[i] > menorIdade)
    {
        menorIdade = idade[i];
    } else if (maiorIdade < idade[i])
    {
        maiorIdade = idade[i];
    }

    }


    for (i = 0; i < 5; i++)
    {
        if (maiorIdade = idade[i]){
            printf("O mais velho é: %s", nome[i]);
            printf("E sua idade é: %d", idade[i]);
        }

        if (menorIdade = idade[i]){
            printf("O mais novo é: %s", nome[i]);
            printf("E sua idade é: %d", idade[i]);
        }

        if (maiorAltura = altura[i])
        {
            printf("O mais alto é: %s", nome[i]);
            printf("Sua altura e de: %dcm", altura[i]);
        }

        if (menorAltura = altura[i])
        {
            printf("O mais alto é: %s", nome[i]);
            printf("Sua altura e de: %dcm", altura[i]);
        }
        
    }
    

    
    
    


    

}