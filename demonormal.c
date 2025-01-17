#include <stdio.h>

int main(int argc, char **argv) {
    int age;
    printf("what is your age? ");
    scanf("%d", &age);

    if (age < 18) {
        printf("you are not permitted!!");
    } else {
        println("welcome.");
    }

    return 0;
}
