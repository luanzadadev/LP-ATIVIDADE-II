#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    float preco;
    float desc;
    int dia;
    printf("Digite o pre�o: \n");
    scanf("%f", &preco);

    fflush(stdin);

    printf("Escolha o dia da semana: \n");
    scanf("%d", &dia);

    if (preco >= 100)
    {

        printf("Op��o de desconto da semana.\n");
        printf(" 1 = Desconto de Segunda a sexta\n");
        printf("2 = Desconto de sabado e domingo. \n");

        switch (dia)
        {
        case 1:

            desc = 0.1 * preco;
            printf("O desconto ser�: %.1f\n", desc);

            break;

        case 2:

            desc = 0.15 * preco;

            printf("O desconto ser�: %.1f\n", desc);

            break;
        }
    }
    else if (preco < 100)
    {

        printf("A compra n�o havera desconto.");
    }
    return 0;
}