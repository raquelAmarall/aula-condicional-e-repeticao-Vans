/*Tabuada
crie um programa que: solicite ao usuario um num entre 1 a 10
caso o valor seja invlidao, use continue para solicitar novamente
quando o valor for valido, imprima a tabuada completa (1 a 10 + laco for com impressao)
*/

#include <stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("Digite um numero entre 1 a 10: ");
        scanf("%d", &num);

        if (num >= 1 && num <= 10)
        {
            break;
        }
        else
        {
            printf("Digite novamente um numero entre 1 a 10: ");
            continue;
        }
    }
    for (int i = 1; i <= 10; i++){
       printf("%d X %d = %d\n", num, i, num * i);
    }
}