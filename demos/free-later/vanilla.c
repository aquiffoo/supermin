#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *arr = malloc(10 * sizeof(int));

    if (arr == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }

    arr[0] = 34;
    arr[1] = 35;
    printf("%d\n", arr[0] + arr[1]);

    free(arr);

    return 0;
}
