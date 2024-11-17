#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_ch;
    printf("This is a 3 points game:\n1. Rock\n2. Paper\n3. Scissors\n\n");
    int botp = 0;
    int userp = 0;
    // Round print loop
    for (int x = 0; x < 3; x++) {
        printf("\nRound %d\n", x + 1);  // Prints rounds
        srand(time(NULL));
        int bot_ch = (rand() % 3) + 1;  // Bot input generator
        int corr = 0;  // Correct value entered indicator
        while (corr == 0) {  // Correctness checker
            printf("Enter your choice: ");
            scanf("%d", &user_ch);

            if (user_ch == 1 || user_ch == 2 || user_ch == 3) {
                corr = 1;
            } 
            else {
                printf("Invalid Input! Please enter 1, 2, or 3.\n");
            }
        }
        printf("Bot's choice is %d\n", bot_ch);
        // Game logic
        if (user_ch == bot_ch) {
            printf("Tie! No points awarded.\n");
            x--;  // Don't count this round, redo it
        }
        else if ((user_ch == 1 && bot_ch == 3) || 
                   (user_ch == 2 && bot_ch == 1) || 
                   (user_ch == 3 && bot_ch == 2)) {
            printf("You win this round!\n");
            userp++;
        } 
        else {
            printf("Bot wins this round!\n");
            botp++;
        }
    }
    printf("\nYour points: %d\n", userp);
    printf("Bot's points: %d\n", botp);
    if (userp > botp) {
        printf("YOU WON THE GAME!\n");
    } else if (botp > userp) {
        printf("BOT WON THE GAME!\n");
    } else {
        printf("IT'S A DRAW!\n");
    }
    return 0;
}