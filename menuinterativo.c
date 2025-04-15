#include <stdio.h>

int main()
{
    int opcao;

    while (1)
    {

        printf("Escolha uma opção (1 a 3): ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            int numero;
        case 1:
            printf("Digite um numero inteiro: .\n");
            scanf("%d", &numero);
            printf("O numero %d e %s. \n", numero, (numero % 2 == 0) ? "par" : "ímpar");
            break;

        case 2:
            printf("Números de 1 a 10:\n");
            for (int i = 1; i <= 10; i++)
            {
                printf("%d ", i);
            }
            printf("\n");

            break;

        case 3:
            printf("Saindo do programa...\n");
            return 0;

        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    return 0;
}
