#include <stdio.h>

void skip(char *msg)
{
    printf("%s \n",msg);
    //printf("Address inside message function: %p\n\n", &msg);
    puts(msg + 6);

}

int main()
{
char *msg_from_amy = "Don't call me";
//printf("Message Address: %p", &msg_from_amy);
skip(msg_from_amy);
return 0;
}
