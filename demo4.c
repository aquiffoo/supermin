#include "supermin.h"

main {
    integer *arr = alloc_or_exit(integer, 10);
    free_later(arr);

    arr[0] = 34;
    arr[1] = 35;
    println("%d", arr[0] + arr[1]);

    done;
}
