#include <stdio.h>

int main() {
    const int array[5] = {1, 2, 3, 4, 5};
    const int *pointer = NULL;

    pointer = array;
    for (int i = 0; i < 5; i++) {
        printf("value: %d\n", *(pointer + i));
    }

    int number = 0;
    int *pointer2 = &number;

    printf("Value number: %d\n", number);
    printf("Number address: %p\n", (void *) &number);

    printf("Value pointer: %d\n", *pointer2);
    printf("Address of pointer: %p\n", (void *) pointer2);

    *pointer2 = 100;
    printf("New value of number: %d\n", number);

    return 0;
}
