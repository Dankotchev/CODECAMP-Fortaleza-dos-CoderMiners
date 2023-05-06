#include <stdio.h>

int main()
{
    int temperatura;
    scanf("%d", &temperatura);

    if (temperatura > 24)
    {
        printf("Alta");
    }
    else if (temperatura >= 18 && temperatura <= 24)
    {
        printf("Ideal");
    }
    else
    {
        printf("Baixa");
    }

    return 0;
}
