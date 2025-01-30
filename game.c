#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char play_again;
    do
    {
        int guessed_number, count = 0;
        srand(time(0)); // Seed the random number generator

        // Generate a random number in the range [1, 100]
        int random_number = (rand() % 100) + 1;

        printf("\n--- Welcome to the Guess the Number Game! ---\n");
        do
        {
            printf("\nGuess the number (1-100): ");
            scanf("%d", &guessed_number);

            if (guessed_number < 1 || guessed_number > 100)
            {
                printf("\nPlease enter a number between 1 and 100!");
                continue;
            }

            if (guessed_number > random_number)
            {
                printf("\nLower number please!");
            }
            else if (guessed_number < random_number)
            {
                printf("\nHigher number please!");
            }
            count++;
        } while (guessed_number != random_number);

        int score = (100 - count) > 0 ? (100 - count) : 0;
        printf("\nCongratulations!! You guessed the number in %d attempts.", count);
        printf("\nYour score is %d", score);

        printf("\n\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    printf("\nThank you for playing! Goodbye!\n");
    return 0;
}
