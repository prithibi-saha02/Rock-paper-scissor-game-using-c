#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genrandomno(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }

    if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    if ((c1 == 'p') && (c2 == 's'))
    {
        return 0;
    }
    else if ((c2 == 'p') && (c1 == 's'))
    {
        return 1;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char player, comp;
    char dist[] = {'r', 'p', 's'};
    printf("Welcome to RPS Game.....!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nChoose 1 for Rock 2 for Paper 3 for scissor:\n");
        scanf("%d", &temp);
        getchar();
        player = dist[temp - 1];
        printf("You chose %c\n", player);

        printf("Computer Turns:\n");
        temp = genrandomno(3) + 1;
        comp = dist[temp - 1];
        printf("CPU chose %c\n", comp);

        if (greater(comp, player) == 1)
        {
            compscore += 1;
        }
        else if (greater(comp, player) == -1)
        {
            compscore += 1;
            playerscore += 1;
        }
        else
        {
            playerscore += 1;
        }
        printf("You : %d\ncomp: %d\n",playerscore,compscore);
    }

    if (playerscore > compscore)
    {
        printf("Yepiee! you won congratulations....!\n");
    }

    else if (playerscore < compscore)
    {
        printf("oops! you loose computer wins better luck next time..!\n");
    }
    else
    {
        printf("Its became draw match you and comp have same points.\n");
    }
 
    return 0;
}
