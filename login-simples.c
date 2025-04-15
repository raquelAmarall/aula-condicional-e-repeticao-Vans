#include <stdio.h>

int main(){
    int senha;
    
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != 1234){
            printf("Senha incorreta\n");
        }
    }while (senha != 4321);

    printf('Senha correta, parabéns!');

   return 0;

}
