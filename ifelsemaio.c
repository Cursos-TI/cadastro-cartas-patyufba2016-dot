#include <stdio.h>

int main() {
    int opcao;
    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu Saldo é 15.000,00 \n");
        break;
    case 2:
        printf("Digite banco, ag e conta \n");
        break;
    case 3:
        printf("Digite o valor do saque \n");
        break;
    default:
         printf("Opção inválida\n");
        
    }



return 0;
}