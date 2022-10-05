#include <stdio.h>
#include <stdlib.h>
int main(void)
// Mensagem com informações do usuário
{
    printf("Sou Elisiana dos Santos, Analise e desenvolvimento de sistemas,Lasalle 202221371 ,estou muito gostando muito da disciplina! \n" ); 
    // Operação que o usuário pode fazer 
    printf("Escolha uma opção: \n");
    printf("1 raiz quadrada \n 2 soma \n 3 multiplicação \n 4 divisão \n 5 potenciação \n");
   int opcao; 
   // Inserir a operação desejada
   scanf("%i",&opcao);
   int resultado,valor1,valor2;
   switch (opcao)
   {
    // raiz quadrada
   case 1:
    printf("Digite um numero para calcular \n");
    scanf ("%i" , &valor1);
    resultado=sqrt(valor1);
    printf(" O seu resultado é: %d", resultado);
   break;
    // soma
   case 2:
   printf(" Digite o primeiro numero \n");
   scanf ("%i", &valor1);
   printf( "Digite o valor dois \n");
   scanf("%i" , &valor2);
   resultado=valor1+valor2;
   printf(" O seu resultado é: %d", resultado);
    break;
    // multiplicação
    case 3:
   printf(" Digite o primeiro numero \n");
   scanf ("%i", &valor1);
   printf( "Digite o valor dois \n");
   scanf("%i" , &valor2);
   resultado=valor1*valor2;
   printf(" O seu resultado é: %d", resultado);
    break;
    //divisão
    case 4:
   printf(" Digite o primeiro numero \n");
   scanf ("%i", &valor1);
   printf( "Digite o valor dois \n");
   scanf("%i" , &valor2);
   resultado=valor1/valor2;
   printf(" O seu resultado é: %d", resultado);
    break;
    //potenciação
    case 5:
   printf(" Digite o primeiro numero \n");
   scanf ("%i", &valor1);
   printf( "Digite o valor dois \n");
   scanf("%i" , &valor2);
   resultado=pow(valor1,valor2);
   printf(" O seu resultado é: %d", resultado);
    break;
   
   default:
    break;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
    }
    

    