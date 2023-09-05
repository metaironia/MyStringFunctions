#include <stdio.h>
#include <stdlib.h>

#include "my_str_functions.h"

//works well
int MyPuts (const char *const input_str) {

    if (input_str == NULL) return EOF;

    for (size_t counter = 0; input_str[counter] != '\0'; counter++) {

        putchar (input_str[counter]);
    }

    return 1;
}


const char *MyStrchr (const char *const input_str, int symbol) {

    if (input_str == NULL) return NULL;

    for (size_t counter = 0; counter < sizeof (input_str); counter++) {

        if (input_str[counter] == symbol)
            return (input_str + counter);
    }

    return NULL;
}

