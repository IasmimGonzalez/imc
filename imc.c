#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){

        setlocale(LC_ALL,"Portuguese");
            char nome[80], op;
            float peso, altura, imc;
            int idade;
        
        do{

                printf("Qual o seu nome?\n");
                fgets(nome, 80, stdin);

                printf("Qual  sua idade?\n");
                scanf("%d", &idade);
                fflush(stdin);
            
                printf("Ensira o peso(kg): (ex: 60)\n");
                scanf("%f", &peso);
                fflush(stdin);

                printf("Ensira a altura(m):  (ex: 1.60)\n");
                scanf("%f", &altura);
                fflush(stdin);


                
                imc = peso / (altura * altura);
                printf("\nSeu IMC é: %.2F\ne sua classificação é:\n", imc);

            if (idade < 65 ){
                

                if (imc < 18.5){
                printf("\nAbaixo do peso");
                }


                else{
                    if(imc >= 18.5 && imc<=24.9){
                printf("\nPeso normal.\n");
                    }
                    else{
                        if(imc >= 25.0 && imc <= 29.9){
                        printf("\nExcesso de peso.\n");
                        }
                        else{
                            if(imc >= 30.0 && imc <= 34.9){
                            printf("\nObesidade de classe 1.\n");
                            }
                            else{
                                if(imc >= 35.0 && imc <= 39.9){
                                printf("\nObesidade classe 2.\n");
                                }
                                else{
                                    if(imc >= 40.0){
                                    printf("\nObesidade classe 3.\n");
                                    }
                                }
                            }
                        }
                    }
                }
            printf("\nO calculo foi realizado com base na tabela de\nclassificação de peso pelo IMC para Adultos!\n");
            }
            else{
                if(idade >= 65){

                    if (imc <= 22){
                    printf("\nAbaixo do peso");
                    }
                    else{
                        if(imc >22 && imc<27){
                        printf("\nAdequado ou eutrófico.\n");
                        }
                        else{
                            if(imc >= 25.0 && imc <= 29.9){
                            printf("\nExcesso de peso.\n");
                            }
                            else{
                                if(imc >= 27){
                                printf("\nSobrepeso.\n");
                                }
                            }
                        }
                    }
                } 
            printf("\nO calculo foi realizado com base na tabela de\nclassificação de peso pelo IMC para Idosos!\n");   
            }
        printf("\nReferência: WORLD HEALTH ORGANIZATIONRS.\nLIPSCHITZ, D.A. Screening for Nutritional Status in the Elderly..1994.\n");
        printf("\nDeseja executar novamente? (s/n)\n");
        scanf("%c", &op);
        fflush(stdin);
        system("cls");
        } while(op == 'y' || op == 'Y');   

}
    /* Este programa calcula o IMC e possui diferenciação de acordo com a idade: Adulto ou idoso.
Foi utilizado como base para construção desse programa a tabela a seguir: https://dms.ufpel.edu.br/static/bib/apoio/imc.pdf*/
