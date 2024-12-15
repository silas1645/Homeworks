#include <stdio.h>

void printCharacters(char charToPrint, char endingChar, int numToPrint) {
    for (int i = 0; i < numToPrint; i++) { 
        printf("%c", charToPrint);
        if (i < numToPrint - 1) {
            printf(" ");
        }
    }
    printf("%c\n", endingChar);
}

int main () {
    int num1, num2;

    printf("Please put two integers:\n");

    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Pleaser input two integers. \n"); 
        return 1;
    }

    if (num1 <= 0, num2 <= 0) {
        printf("error, idiot");
    }

    for (int i = num1; i <= num2; i++) {
        printCharacters('!', '#', i);
    }

return 0;


}