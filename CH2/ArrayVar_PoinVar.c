#include <stdio.h>

int main()
{
    char s[] = "How big is it?";
    char *t = s;
    printf("String content: %s\n",s);
    printf("size of s array variable: %li\nsize of t pointer variable: %li\n\n", sizeof(s),sizeof(t));
    printf("Address Array variable: %p\nAddress Pointer variable: %p\n", &s, &t);
    printf("Address array variable: %p\n",&s[0]);
    printf("char pointer content %c\n", *t);
    if(&s == s)  //This is true
       {
        printf("\n*********************************\n");
        printf("&s is equal to s\n");
        printf("&s:%p s:%p\n",&s,s); 
        printf("********************************\n");
        }
    if(&t != t) // the address of the pointer is not the same as the variable
    {  
     printf("&t is not equal to t\n");
     printf("&t:%p t:%p\n",&t, t);
     printf("&t: %p *t: %c\n",&t+11, *t+11);
     } 
    return 0;
 }
