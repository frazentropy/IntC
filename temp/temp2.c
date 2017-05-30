#include <stdio.h>
#include <stdlib.h>

int this_function() {
    return 14;
}

int this_other_function();

int main () {
    this_function();
    this_other_function();
    return EXIT_SUCCESS;
}

int this_other_function() {
    return this_function();
}
