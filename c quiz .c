#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int askQuestion(char *question, char *options[], int correctOption, int timeLimit) {
    time_t start_time, current_time;
    int chosenOption;

    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, options[i]);
    }

    printf("\nEnter your choice (1-4): ");
    time(&start_time); 

    do {
        time(&current_time); 
        if (current_time - start_time > timeLimit) {
            printf("\nTime's up!\n");
            return 0; 
        }

        
        if (scanf("%d", &chosenOption) == 1) {
            break; 
        }

    } while (1);

    return (chosenOption == correctOption); 
}

int main() {
    int score = 0;
    char *questions[] = {
        "Which of the following loops is used for definite iteration?   ",
        "What is the purpose of the sizeof operator in C?",
        "Which of the following is a valid way to end a C statement?",
        "What is the correct syntax for declaring a variable in C?",
        "What is the purpose of the '#include' directive in C?"
    };

    char *options[][4] = {
        {"A. for","B. while","C. do-while","D. if"},
        {"A. To find the size of a variable", "B.  To find the square root of a number", "C. To determine the ASCII value of a character", "D.  To calculate the remainder of division"},
        {"A. .", "B. ,", "C. ;", "D. :"},
        {"A. variable int x;", "B. x = int variable;", "C. int x = variable;", "D. x int = variable;"},
        {"A. To include a header file", "B. To define a macro", "C. To declare a variable", "D. To comment out code"}
    };

    int correctAnswers[] = {1, 1, 3, 3, 1}; 

    printf("Welcome to the Quiz!\n");

    for (int i = 0; i < 5; i++) {
        int result = askQuestion(questions[i], options[i], correctAnswers[i], 60);

        if (result) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect!\n");
        }
    }

    printf("\nQuiz completed! Your score: %d out of 5\n", score);

    return 0;
}