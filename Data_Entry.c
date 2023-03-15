#include <stdio.h>

int main() { 
    char name[40];
    printf("Enter your name: ");
    scanf("%39s", name);
    printf(name);
    return 0;
}