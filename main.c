#include <stdio.h>
#include "structs.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    printf("Hi, World!\n");

    hi();


    insertFirst(1, 15);
    insertFirst(2, 22);
    insertFirst(3, 71);
    print();
    deleteFirst();
    print(); 

    return 0; //everything after this doesn't run
}
