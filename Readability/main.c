#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NivelEscolar(char texto[], int tamanho);

int main()
{
    int grau, tam;
    char texto[1000];

    gets(texto);
    tam = strlen(texto);

    grau = NivelEscolar(texto, tam);

    if(grau < 1)
        printf("Before Grade 1");
    else if(grau >= 16)
        printf("Grade 16+");
    else
        printf("Grade %d", grau);

    return 0;
}

int NivelEscolar(char texto[], int tamanho)
{
    int grauL, i;   //grau leitura / quantidade de palavras / quant frases
    float indice, L, S, quantL = 0, quantP = 0, quantF=0;

    for(i = 0; i< tamanho; i++)
    {
        if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z')
        quantL += 1;
    }

    for(i = 0; i< tamanho; i++)
    {
        if(texto[i] == ' ')
        quantP += 1;
    }
    quantP += 1;

    for(i = 0; i< tamanho; i++)
    {
        if(texto[i] == '.' || texto[i] == '?' || texto[i] == '!')
        quantF += 1;

    }

    L =(quantL/quantP)*100;
    S = (quantF/quantP)*100;

    indice = (0.0588*L)-(0.296*S)-15.8;
    grauL = round(indice);

    return grauL;
}
