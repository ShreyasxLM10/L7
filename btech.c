#include <stdio.h>

int main() {
    int choice;
    
    printf("Menu:\n");
    printf("1. Btech CSE\n");
    printf("2. Btech AIML\n");
    printf("3. Btech Electrical\n");
    printf("4. Btech Mechanical\n");
    printf("Enter your choice (1-4): ");
    
    switch(choice) {
        case 1:
            printf("You have chosen Btech CSE\n");
            break;
        case 2: {
            printf("You have chosen Btech AIML\n");
            break;
	case 3:  {
            printf("You have chosen Btech Electrical\n");
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
    
    return 0;
}

