#include "Giuseppe.h"

bool Prime(int x)
{
    bool prime = true;
    if (x == 0 || x == 1)
    {
        prime = false;
    }
    else
    {
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                prime = false;
        }
    }
    return prime;
}

int main()
{

    clear();
    id("exercicio 7");

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (Prime(i))
            printf("%d\n", i);
    }

    getchar();
    pause("Apertar ENTER para terminar");
    clear();
    return 0;
}