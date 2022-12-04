#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("guess the number between 1 to 100\n");
    do
    {
        
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("guess the lower number\n");
        }
        else if (guess < number)
        {
            printf("guess the higher number\n");
        }
        else
        {
            printf("you guessed the number in %d chance\n", nguesses);
        }
        nguesses++;
    } while (guess!=number);

    return 0;
}