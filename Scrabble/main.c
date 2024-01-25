#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(char word[]);

int main()
{
    int score1, score2;
    char word1[50], word2[50];

    printf("Player 1: ");
    scanf("%s", word1);

    printf("Player 2: ");
    scanf("%s", word2);


    score1 = compute_score(word1);
    score2 = compute_score(word2);


    if(score1 > score2)
        printf("Player 1 wins!\n");
    else if(score1 < score2)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");

    return 0;
}

int compute_score(char word[])
{
    int point = 0, tam, i;

    tam = strlen(word);

    for(i = 0; i < tam; i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] <= 'Z')
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] -= 65;
                point += POINTS[word[i]];

            }

            else if(word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] -= 97;
                point += POINTS[word[i]];
            }
        }
    }


    return point;
}
