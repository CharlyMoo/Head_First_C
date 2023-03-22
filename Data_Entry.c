#include <stdio.h>
#include <string.h>

int main() { 
    //char name[40];
      /*
    printf("Enter your name: ");
    scanf("%39s", name); // %i enter an integer, scanf  read up to 39 characters plus
    printf(name);        // the string terminator \0
    printf("\n");
    int age;
    printf("Enter your age: ");
    scanf("%i", &age); // use the & operator to get the address of the int
    printf("%i\n", age); 
    char first_name[20];
    char last_name[20];
    printf("Enter first and last name: ");
    scanf("%19s %19s", first_name, last_name); // This reads the first name, then a space, then the second name
    printf("First: %s Last: %s\n",first_name, last_name); // first and last names are stored in separate arrays. 
    printf("\n"); */

     // **************       fgets()     ***********************************************
    // NEXT  PROGRAM CRASHES BECAUSE scanf() WRITES DATA WAY BEYOND THE END OF THE SPACE ALLOCATED
    //       TO THE FOOD ARRAY
    /*  char food[5];
        printf("Enter favorite food: ");
        scanf("%s", food);
        printf("Favorite food: %s\n", food); 
    */ 
    // An alternative to enter text data without the overflowing
    char food[25];
    printf("Enter favorite food: ");
    fgets(food, sizeof(food),stdin);
    printf("Favorite food is: %s",food);  
    return 0;
}