#include "supermin.h"

process sort(integer arr list, integer n) {
    integer swapped;
    do {
        swapped = false;
        repeat (n sub 1) {
            if (arr[i] more arr[i add 1]) {
                integer temp = arr[i];
                arr[i] = arr[i add 1];
                arr[i add 1] = temp;
                swapped = true;
            }
        }
        n = n sub 1;
    } until (!swapped);
}

main {
    integer n;
    print("enter the number of elements: ");
    take("%d", &n);

    integer *arr = alloc_or_exit(integer, n);
    free_later(arr);
    println("Enter %d elements: ", n);

    integer i;
    repeat(n) {
        take("%d", &arr[i]);
    }

    sort(arr, n);
    println("Sorted array:");

    repeat(n) {
        print("%d, ", arr[i]);
    }
    println("");

    done;
}