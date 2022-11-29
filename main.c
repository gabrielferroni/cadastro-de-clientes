#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

     struct cadrasto{
     char nome[20];
     int telefone;
     int cpf;
  };
  struct cadrasto cad[30];

  int main(){

  char atend;
  char quant;
  int i,j;
  int opcao;
  int novamente = 1;
  FILE *f;

   do{
               system("cls");
        printf("\n");
        printf ("\t\t\t===============================\n");
        printf ("\t\t\t |      AUTO & PECAS    |\n");
        printf ("\t\t\t===============================\n");
        printf ("\t\t\t|\t                       |\n");
        printf("\t\t\t|\t 1 - Cadastrar Cliente |\n");
        printf("\t\t\t|\t 2 - Exibir Cadastro   |\n");
        printf("\t\t\t|\t 3 - Apagar cadastro   |\n");
        printf("\t\t\t|\t 4 - Sair              |\n");
        printf ("\t\t\t|\t                      |\n");
        printf ("\t\t\t===============================\n");
        printf ("\n\n");
        printf("\t\t\t Por favor, selecione uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);
        system("cls");

  switch(opcao){

    case 1:
            printf("Quantos cadrasto voce deseja realizar:");
            scanf("%d",&quant);
                  system("cls");

         for(i=1;i<=quant;i++){
            system("cls");

             f= fopen("arquivo.txt","a");
       if (!f){
            printf("ERRO de abertura do arquivo!");
              };

        printf("\n");
        printf ("\t\t\t===============================\n");
        printf ("\t\t\t\t  AUTO & PECAS\n");
        printf ("\t\t\t===============================\n");
        printf ("\t\t\t|\t                          \n");
        printf("\t\t\t|\t 1 - Nome do Cliente:");
        scanf("%s",&cad[i].nome);
        fprintf(f,"%s \n",cad[i].nome);
        fflush(stdin);
        printf("\t\t\t|\t 2 - Telefone do Cliente:");
        scanf("%i",&cad[i].telefone);
        fprintf(f,"%i \n",cad[i].telefone);
        fflush(stdin);
        printf("\t\t\t|\t 3 - CPF do Cliente:");
        scanf("%i",&cad[i].cpf);
        fprintf(f,"%i",cad[i].cpf);
        fflush(stdin);
        printf ("\t\t\t|\t                            \n");
        printf ("\t\t\t===============================\n");
        printf ("\n\n");
        printf ("\t\t\t=====================================\n");
        printf ("\t\t\t |\t                                 \n");
        printf("\t\t\t  |\t Cadastro efetuado com sucesso!  \n");
        printf ("\t\t\t |\t Deseja continuar?               \n");
        printf ("\t\t\t |\t 0-NAO  ||  1-SIM => ");
        fclose(f);
        scanf("%d", &novamente);
        printf ("\t\t\t |===================================\n");
        fclose(f);
          if(novamente == 1){
                        }

         }break;

          case 2:

            for(i=1;i<=quant;i++){
                     f= fopen("arquivo.txt","r");
                       if (!f){
            printf("ERRO de abertura do arquivo!");
              }
                      printf("\n");
        printf ("\t\t\t==================================================\n");
        printf ("\t\t\t\t  AUTO & PECAS\n");
        printf ("\t\t\t==================================================\n");
        printf ("\t\t\t       EXIBINDO CADSTRO                           \n");
        printf ("\t\t\t==================================================\n");
        printf("\t\t\t\t  Nome do Cliente: %s \n",cad[i].nome);
        printf("\t\t\t\t  Telefone do Cliente: %d \n",cad[i].telefone);
        printf("\t\t\t\t  CPF do Cliente: %i \n",cad[i].cpf);
        printf("\t\t\t\==================================================\n");
               system("pause");
               system("cls");

             }break;

          case 3:
              system("cls");
        printf ("\t\t\t======================================\n");
        printf ("\t\t\t\t            AUTO & PECAS            \n");
        printf ("\t\t\t======================================\n");
        printf ("\t\t\t |\t                                 |\n");
        printf("\t\t\t  |\t Qual cadastro deseja excluir?");
        scanf("%d", &j);
        printf ("\t\t\t |===================================\n");
         system("cls");

        memset(&cad[j].nome,0,sizeof(cad[j].nome));
        memset(&cad[j].telefone,0,sizeof(cad[j].telefone));
        memset(&cad[j].cpf,0,sizeof(cad[j].cpf));

         system("cls");
        printf ("\t\t\t=========================================================|\n");
        printf ("\t\t\t\t            AUTO & PECAS                               |\n");
        printf ("\t\t\t=========================================================|\n");
        printf ("\t\t\t |\t                                                     |\n");
        printf("\t\t\t  |\t           Apagado com sucesso!                      |\n");
        printf ("\t\t\t |=======================================================|\n");
                        system("pause");
                        system("cls");
         break;

          case 4:
              system("cls");
        printf ("\t\t\t========================================================|\n");
        printf ("\t\t\t\t            AUTO & PECAS                               |\n");
        printf ("\t\t\t |=======================================================|\n");
        printf ("\t\t\t |\t        Fechando o programa !                        |\n");
        printf("\t\t\t  |\t                                                     |\n");
        printf ("\t\t\t |=======================================================|\n");
            system("pause");
            system("cls");
            return 0;
  }
  }while(novamente == 1);
  };
