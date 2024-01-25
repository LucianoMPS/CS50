#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[100], key[100];
    int tam, keyTam, i, soma, posicao, quantLetras[26];


    scanf("%s", key);           // escanea a chave de criptografia
    keyTam = strlen(key);

    if(keyTam < 26 || keyTam > 26)  // verifica se a chave é valida (obs: deve ter 26 caracteres)
    {
        printf("\nerro, chave de criptografia invalida!\n");
        return 0;
    }

    for(i=0;i<26;i++)
        quantLetras[i] = 0;

    for(i=0;i<keyTam;i++)   // verifica se a chave é valida(obs: ela só pode ter letras, tanto maisculas ou minusculas
    {                                                                            //e essas letras devem ser distintas)
            if(key[i] >= 'A' && key[i] <= 'Z')
            {
                key[i] -= 65;
                posicao = key[i];
                quantLetras[posicao] += 1;
                key[i] += 65;
            }
            else if(key[i] >= 'a' && key[i] <= 'z')
            {
                key[i] -= 97;
                posicao = key[i];
                quantLetras[posicao] += 1;
                key[i] += 97;
            }
            else
            {
                printf("\nerro, chave de criptografia invalida!\n");
                return 0;
            }
    }

    for(i=0;i<26;i++)                           // verifica se alguma letra da chave repetiu mais de uma vez
    {
        if(quantLetras[i] > 1)
        {
            printf("\nerro, chave de criptografia invalida!\n");
            return 0;
        }
    }


    printf("texto simples: ");   // escanea o texto a ser criptografado
    scanf(" %[^\n]", &texto);
    tam = strlen(texto);


    for(i = 0; i < tam; i++)    // processo de criptografia
    {
        if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z')
        {
            if(texto[i] >= 'A' && texto[i] <= 'Z')
            {
                texto[i] -= 65;
                posicao = texto[i];
                texto[i] = 0;

                if(key[posicao] >= 'A' && key[posicao] <= 'Z')  // verifica se a chave de criptografia é maiscula ou minuscula, e caso necessario altera a chave para corresponder com o texto dado
                    texto[i] += key[posicao];
                else if(key[posicao] >= 'a' && key[posicao] <= 'z')
                    texto[i] += (key[posicao]-32);
            }

            else if(texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] -= 97;
                posicao = texto[i];
                texto[i] = 0;

                if(key[posicao] >= 'A' && key[posicao] <= 'Z')  // verifica se a chave de criptografia é maiscula ou minuscula, e caso necessario altera a chave para corresponder com o texto dado
                    texto[i] += (key[posicao]+32);
                else if(key[posicao] >= 'a' && key[posicao] <= 'z')
                    texto[i] += key[posicao];
            }
        }
    }

    printf("texto sifrado: %s\n", texto);

    return 0;
}
