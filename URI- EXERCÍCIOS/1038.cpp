// 1038.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include<stdio.h>
#include <iostream>


int main()
{
    int cod;
    float qtd, final;
    scanf ("%d %f",&cod,&qtd);
    if (cod == 1)
    {
        final = qtd * 4.00;
        printf("Total: R$ %.2f\n", final);
    }
    else
        if (cod == 2)
        {
            final = qtd * 4.50;
            printf("Total: R$ %.2f\n", final);
        }
        else
            if (cod == 3)
            {
                final = qtd * 5.00;
                printf("Total: R$ %.2f\n", final);
            }
            else
                if(cod == 4)
                {
                    final = qtd * 2.00;
                    printf("Total: R$ %.2f\n", final);
                }
                else
                    if (cod == 5)
                    {
                        final = qtd * 1.50;
                        printf("Total: R$ %.2f\n",final);
                    }


    return 0;


}

