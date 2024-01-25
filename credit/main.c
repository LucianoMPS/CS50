#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarEmpresa(long long int num, int quantDigitos);
int validar(long long int num, int empr);
int contaDigitos(long long int num);

int main()  // 4003600000000014
{
    long long int num;
    int empresa, quantD;
    char empresaNome[20];

    scanf("%lld", &num);

    printf("%lld", num);

    quantD = contaDigitos(num);

    printf("\n%d", quantD);

    empresa = verificarEmpresa(num, quantD);

    printf("\n%d", empresa);

    if(empresa == 0)
        strcmp("Visa", empresaNome);

    else if(empresa == 1)
        strcmp("Mastercard", empresaNome);

    else if(empresa == 2)
        strcmp("AmericanExpress", empresaNome);



    printf("%s", empresaNome);

    return 0;
}

int contaDigitos(long long int num)
{
    int quantDigitos = 0;

    if(num == 0)
        quantDigitos = 1;
    else{
        while(num != 0)
        {
            quantDigitos += 1;
            num = num/10;
        }
    }
    return quantDigitos;
}

int verificarEmpresa(long long int num, int quantDigitos)
{
    int a1, b2, c3, d4, e5, f6, g7, h8, i9, j10, k11, l12, m13, n14, o15, p16;  //menor digito para o maior
    int empr;

    a1 =  num%10;
    b2 = (num%100)-a1;
    c3 = (num%1000)-(a1+b2);
    d4 = (num%10000)-(a1+b2+c3);
    e5 = (num%100000)-(a1+b2+c3+d4);
    f6 = (num%1000000)-(a1+b2+c3+d4+e5);
    g7 = (num%10000000)-(a1+b2+c3+d4+e5+f6);
    h8 = (num%100000000)-(a1+b2+c3+d4+e5+f6+g7);
    i9 = (num%1000000000)-(a1+b2+c3+d4+e5+f6+g7+h8);
    j10 = (num%10000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9);
    k11 = (num%100000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10);
    l12 = (num%1000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11);

    if(quantDigitos == 13)
        m13 = (num%10000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12);
    else if(quantDigitos == 14)
    {
        m13 = (num%10000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12);
        n14 = (num%100000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13);
    }
    else if(quantDigitos == 15)
    {
        m13 = (num%10000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12);
        n14 = (num%100000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13);
        o15 = (num%1000000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13+n14);
    }

    else if(quantDigitos == 16)
    {
        m13 = (num%10000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12);
        n14 = (num%100000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13);
        o15 = (num%1000000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13+n14);
        p16 = (num%10000000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13+n14+o15);
    }

                                      // 4003600000000014
    printf("\n%d\n", a1);
    printf("\n%d\n", b2);
    printf("\n%d\n", c3);
    printf("\n%d\n", d4);
    printf("\n%d\n", e5);
    printf("\n%d\n", f6);
    printf("\n%d\n", g7);
    printf("\n%d\n", h8);
    printf("\n%d\n", i9);
    printf("\n%d\n", j10);



    if((quantDigitos == 13 || quantDigitos == 16) && p16==4)
        empr = 0;

    else if(p16 == 5 && (o15==1 || o15==2 || o15==3 || o15==4 || o15==5))
        empr = 1;

    else if(quantDigitos==15 && ((o15==3 && n14==14) || (o15==3 && n14==7)));
        empr = 2;

    return empr;
}
/*
int validar(long long int num, int empr)
{
    int a1, b2, c3, d4, e5, f6, g7, h8, i9, j10, k11, l12, m13, n14, o15, p16;  //menor digito para o maior

    a1 =  num%10;
    b2 = (num%100)-a1;
    c3 = (num%1000)-(a1+b2);
    d4 = (num%10000)-(a1+b2+c3);
    e5 = (num%100000)-(a1+b2+c3+d4);
    f6 = (num%1000000)-(a1+b2+c3+d4+e5);
    g7 = (num%10000000)-(a1+b2+c3+d4+e5+f6);
    h8 = (num%100000000)-(a1+b2+c3+d4+e5+f6+g7);
    i9 = (num%1000000000)-(a1+b2+c3+d4+e5+f6+g7+h8);
    j10 = (num%10000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9);
    k11 = (num%100000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10);
    l12 = (num%1000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11);
    m13 = (num%10000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12);
    n14 = (num%100000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13);
    o15 = (num%1000000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13+n14);
    p16 = (num%10000000000000000)-(a1+b2+c3+d4+e5+f6+g7+h8+i9+j10+k11+l12+m13+n14+o15);
}
*/
