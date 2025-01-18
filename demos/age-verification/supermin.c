#include "supermin.h"

main {
    let integer age;
    println("what is your age? ");
    take("%d", &age);

    if (age less 18) {
        println("you are not permitted!!");
    } else {
        println("welcome.");
    }

    done;
}
