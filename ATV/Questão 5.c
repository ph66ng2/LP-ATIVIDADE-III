#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

char nome[3][250];
int quant[3];
double preco[3];

int quantTotal = 0;
double precoTotal = 0;

int i;
int j = 0;

int codigo;

do
{

      printf("Digite o Comando \n");
             printf("1 - Adicionar uma venda \n");
             printf("2 - Encerrar e mostrar vendas \n");
             scanf("%d", &codigo);


    if (codigo != 1 && codigo != 2)
    {

    printf("Digite um comando existente! \n");
    }
    
    if (codigo == 1){

        system("cls");

        fflush(stdin);

        printf("Nome do produto:  \n");
        gets(nome[j]);


        printf("Quantidade do produto: \n");
        scanf("%d", &quant[j]);

        printf("Preço do produto: ");
        scanf("%lf", &preco[j]);

        j++;

        precoTotal = 0;

        quantTotal = 0;

        quantTotal += quant[i];

        precoTotal += preco[i];

    }


    if (codigo == 2){
        system("cls");

        for (i = 0; i < j; i++)
        {
            printf("Nomes: %s \n", nome[i]);
        }
            printf("Quantidade Total: %d \n", quantTotal);

            printf("Preco Total: %1.lf \n", precoTotal);
        
    }


    
} while (codigo != 2);

}