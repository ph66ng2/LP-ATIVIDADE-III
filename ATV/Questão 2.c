#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade[5];
    char nome[5] [250];
    double nota[5][3];

    char resultado [250];

    double soma = 0;
    double media[5];


    int i;
    int j;

    for ( i = 0; i < 5; i++)
    {
    printf("Diga o nome do aluno \n");
    gets(nome[i]);

    printf("Diga a idade do estudante \n");
    scanf("%d", &idade[i]);


        for (j = 0; j < 3; j++)
        {
            printf("\n Digite a nota \n");
            scanf("%lf", &nota[i][j]);

            soma += nota[i][j];   
        }

        media[i] = soma / 3;

        soma = 0;


        fflush(stdin); 
        
    }

        system("cls || clear");


    for (i = 0; i < 5; i++)
    {

        
        if (media[i] >= 7){
            strcpy(resultado, "Aprovado");
        } else if (media[i] < 7 && media[i] >= 3)
        {
            strcpy(resultado, "Recuperacao");
        } else if (media[i] < 3)
        {
            strcpy(resultado, "Reprovado");
        }   


        printf("%d° Aluno \n", i+1);

        printf("Nome: %s \n", nome[i]);

        printf("Idade: %d \n", idade[i]);

             for ( j = 0; j < 3; j++)
        {
            printf("\n Nota: %1.lf \n", nota[i][j]);
        }

        printf ("Media: %1.lf \n", media[i]);

        printf("Resultado: %s \n", resultado);
                
        
    }
    



 }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
