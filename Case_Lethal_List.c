#include <stdio.h>

int main()
{
    int doses[] = {1, 3, 2, 10000};
    printf("Issue dose (3[doses] style): %i\n",3[doses]);
    printf("Issue dose (doses[3] style): %i\n",doses[3]);
    printf("Issue dose (*(doses + 3) style): %i\n", *(doses + 3));
    printf("Issue dose (*(3 + doses) style): %i\n", *(3 + doses));
    // Usage of array variables
    int drinks[] = {4, 2, 3};
    //These lines are equivalent
    /*
    printf("1st order: %i drinks\n",drinks[0]);
    printf("1st order: %i drinks\n",*drinks);
    // More equivalent lines, generally drinks[i] == *(drinks + i)
    printf("3rd order: %i drinks\n", drinks[2]);
    printf("3rd order: %i drinks\n", *(drinks+2));
    */
    return 0;

}
