#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais;
    int quant=0, dinheiro;

    while(1)
    {
        printf("Troca devida: ");
        scanf("%f", &reais);
        if(reais>0)
                break;
    }

    dinheiro = round(reais*100);

    quant += dinheiro/25;
    quant += (dinheiro%(25))/10;
    quant += ((dinheiro%25)%10)/5;
    quant += (((dinheiro%25)%10)%5)/1;

    printf("%d", quant);

    return 0;
}
