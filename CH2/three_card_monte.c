#include <stdio.h>

int main(){
    // char *cards = "JQK"; // this variable can't modify this string
    char cards[] = "JQK"; // create an array from a literal is the solution to be able
                          // to modify this string(which is actually a copy)   
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;
}

// if you want to change the content of a string, you'll need to work on a copy 
// It's done by creating the string as a new array
// char cards[] = "JQK"; -> cards is an array, there's no array size given, so you have to set it to something immediately

/*  void stack_deck(char cards[]) {  cards is a char pointer

} 

    void stack_deck(char *cards){ This function is equivalent to the one above

    } */

/*
    tip: try to never set a simple char pointer to a string literal value like: 
        char *s = "Some String";

    it can compile, but at some point of the code you would try to change it, and it cause problems and you would not find this bug.
    So, if you want to set a pointer to a literal, always make sure you use the const keyword:
        const char *s = "some string";
    
    That way, if the compiler sees some code that tries to modify the string, it will give you a compile error:
        s[0] = 'S';
        monte.c: 7: error: assignment of read-only location
    
*/