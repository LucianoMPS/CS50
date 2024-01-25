#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int key, tam, i, soma;
    char texto[100];

    scanf("%d", &key);      // ler a chave de troca de letra
    if(key < 0)
    {
        printf("erro");
        return 0;
    }

    printf("plaintext: ");  // ler a string a ser criptografada
    scanf(" %[^\n]", &texto);
    tam = strlen(texto);

    for(i = 0; i < tam; i++)    // processo de criptografia
    {
        if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z')
        {
            if(texto[i] >= 'A' && texto[i] <= 'Z')
            {
                texto[i] -= 64;
                soma = 64;
            }

            else if(texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] -= 96;
                soma = 96;
            }

            texto[i] = (key + texto[i])%26;
            texto[i] += soma;
        }
    }

    printf("ciphertext: %s\n", texto);

    return 0;
}
