#include <stdio.h>
#define debugging
#ifdef debugging
    #define debug if (1)
#else
    #define debug if (0)
#endif

void _sm_main_runtime(int argc, char **argv) {
    debug {
        printf("[INFO]: Supermin debug mode enabled.\n");
    }
}

int main(int argc, char **argv) {
    debug {
        printf("[DEBUG]: debug message.\n");
    }
    
    return 0;
}
