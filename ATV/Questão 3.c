#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;
    int j = 0;

    int numero[25];
    char nome [25][250];

    int comando;

     
    

        do
        {
             printf("Digite o Comando \n");
             printf("1 - Adicionar Contatos \n");
             printf("2 - Encerrar e mostrar contatos \n");
             scanf("%d", &comando);
            



            if (comando != 1 && comando != 2){

                printf("Digite um comando existente! \n");
            }


            if (comando == 1){
                    fflush(stdin);

                    printf("Digite o Nome \n");
                    gets(nome[j]);

                    printf("Digite o numero \n");
                    scanf("%d", &numero[j]);  
                
                j++;
            }


            if (comando == 2){
                for (i = 0; i < j; i++)
                {
                    printf("Nome: %s \n", nome[i]);

                    printf("Numero: %d \n", numero[i]);
                }
                
           }
            

            
        } while (comando != 2);
        
        
    
    
    }