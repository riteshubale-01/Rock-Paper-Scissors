#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    int player_score=0, computer_score=0;
    char ans, play_again;
    
    printf("Welcome to Rock, Paper & Scissors Game!\n");
    printf("Here are the rules of the games :\n");
    printf("(1) Scissors beats Paper\n(2) Paper Beats Rock\n(3) Rock beats Scissors\nOne who scores 10 points first wins the game!\n");
    printf("Do you wish to proceed? (y/n) : \n");
    scanf("%c", &ans);

    do{
            if (ans == 'y' || ans == 'Y'){
            while(1){
                printf("Choose 0 for Rock, 1 for Paper, 2 for Scissor\n");
                scanf("%d", &player);

                /*
                    0 --> Rock
                    1 --> Paper
                    2 --> Scissor
                */
                srand(time(0));
                computer = rand() % 3;
                printf("Computer chose %d\n", computer);

                if (player == 0 && computer == 0 || player == 1  && computer == 1 || player == 2  && computer == 2){
                    printf("It's a draw!\n");
                }
                else if (player == 0 && computer == 1 || player == 1  && computer == 2 || player == 2  && computer == 0){
                    printf("You Loose!\n");
                    computer_score++;
                }
                else if (player == 0 && computer == 2 || player == 1  && computer == 0 || player == 2  && computer == 1){
                    printf("You Won!\n");
                    player_score++;
                }
                else{
                    printf("Invalid input! Try again.\n");
                }
                if (player_score == 10) {
                    printf("\nScore : You = %d, Computer = %d\n", player_score, computer_score);
                    printf("Congratulations! You won the game with 10 points!\n");
                    break;
                } 
                else if (computer_score == 10) {
                    printf("\nScore : You = %d, Computer = %d\n", player_score, computer_score);
                    printf("Computer won the game with 10 points. Better luck next time!\n");
                    break;
                }
            }
        }
        else{
            printf("You can come back any time later! Thank You\n");
        }
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again);

    }while (play_again == 'y' || play_again == 'Y');
        
    printf("Thanks for playing! Goodbye.\n");
    
    
    return 0;
}
