#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, y;
    char opt;

    // Seed the random number generator
    srand(time(NULL));

    do {
        y = 1 + rand() % 10; // Random number between 1 and 10

        printf("Guess a number from 1 to 10: ");
        scanf("%d", &x);

        if (x < y) {
            printf("The number is %d\n", y);
            printf("Your number is smaller.\n");
        }
        else if (x > y) {
            printf("The number is %d\n", y);
            printf("Your number is larger.\n");
        }
        else {
            printf("The number is %d\n", y);
            printf("Your number is correct!\n");
        }

        // Ask the user if they want to continue playing
        do {
            printf("Do you want to continue playing? (y/n): ");
            scanf(" %c", &opt); 
            
            // Check for valid input
            if (opt != 'y' && opt != 'Y' && opt != 'n' && opt != 'N') {
                printf("Invalid input. Please enter 'y' or 'n'.\n");
            }
        } while (opt != 'y' && opt != 'Y' && opt != 'n' && opt != 'N');

    } while (opt == 'y' || opt == 'Y'); // Continue if 'y' or 'Y' is entered

    return 0;
}
