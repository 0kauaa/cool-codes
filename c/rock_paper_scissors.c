// headers  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// game logic
int game(char users[], char machines[]) {
/*
    returns:
     0 = draw
    -1 = machine's victory
     1 = user's victory
*/

    if (strcmp(users, machines) == 0)
        return 0;

    // rock & paper 
    if (strcmp(users, "rock") == 0 && strcmp(machines, "paper") == 0)
        return -1;
    else if (strcmp(users, "paper") == 0 && strcmp(machines, "rock") == 0)
        return 1;

    // scissor & rock
    if (strcmp(users, "scissor") == 0 && strcmp(machines, "rock") == 0)
        return -1;
    else if (strcmp(users, "rock") == 0 && strcmp(machines, "scissor") == 0)
        return 1;

    // paper & scissor
    if (strcmp(users, "paper") == 0 && strcmp(machines, "scissor") == 0)
        return -1;
    else if (strcmp(users, "scissor") == 0 && strcmp(machines, "paper") == 0)
        return 1;

    return 0;
}

// runner
int main() {
    int choice, result;
    char users[20], machines[20];

    // randomization 
    srand(time(NULL));
    choice = rand() % 100;

    // machine's choise
    if (choice < 33)
        strcpy(machines, "rock");
    else if (choice < 66)
        strcpy(machines, "paper");
    else
        strcpy(machines, "scissor");

    // user's choice
    printf("enter your choice: rock, paper or scissor?\n");
    scanf("%7s", users);

    // game implemetation
    result = game(users, machines);

    // results
    if (result == 0) {
        printf("it is a draw!\n");
    } else if (result == 1) {
        printf("you made it!");
        printf("machine's choise: %s\n", machines);
    } else if (result == -1) {
        printf("oh! not this time...\n");
        printf("machine's choice: %s", machines);
    }

    return 0;   
}

// 06.20.2025.