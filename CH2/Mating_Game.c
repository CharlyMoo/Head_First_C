#include <stdio.h>

int main()
{
    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    printf("Choice address: %p, choice value: %i\n",contestants, *choice);
    printf("contestants[] = { %i, %i, %i}\n\n", contestants[0], contestants[1], contestants[2]);
    printf("Contestants[0]: %i | address: %p\n",contestants[0],choice);
    contestants[0] = 2;
    printf("After new assignment\n contestants[0]: %i | address: %p\n\n", contestants[0], choice);
    printf("Contestants[1]: %i | address: %p\n", contestants[1], choice+1);
    contestants[1] = contestants[2];
    printf("After new assignment\n contestants[1]: %i | address: %p\n\n", contestants[1], choice+1);
    printf("Contestants[2]: %i | address: %p\n", contestants[2], choice+2);
    contestants[2] = *choice;
    printf("After new assignment\n contestants[2]: %i | address: %p\n\n", contestants[2], choice+2);
    printf("I'm going to pick contestants number %i\n", contestants[2]);
    return 0;
  }


