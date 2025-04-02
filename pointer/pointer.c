#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *pointer = NULL;

    pointer = array;
    for (int i = 0; i < 5; i++) {
        printf("address value: %d\n", *(pointer + i));
    }
}
