#ifndef SUPERMIN_H
#define SUPERMIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/* definitions */
#define print           printf
#define integer         int
#define take            scanf
#define until           while
#define add             +
#define sub             -
#define mul             *
#define div             /
#define mod             %
#define is              ==
#define isnt            !=
#define true            1
#define false           0
#define done            return 0
#define real            double
#define and             &&
#define or              ||
#define let             // nothingness
#define list            []
#define size            sizeof
#define more            >
#define less            <
#define process         void
#define proc            void
#define procedure       void
#define do              do
#define moreEq          >=
#define lessEq          <=
#define nonassignable   void

typedef char* string;

// shoutout to giose for this idea
#define _range(varname, number) (int varname=0; varname<number; ++varname)
// end shoutout
int println(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\n");
    return 0;
}
#define repeat(count)   for (int i = 0; i < (count); i++)
#define allocate        alloc
void release(void *ptr) {
    free(ptr);
}
#define copystr         strcpy
#define concat          strcat(dest,src)
#define alloc_or_exit(type, size)               \
    ({                                          \
        type *ptr = (type *)malloc(sizeof(type) * (size)); \
        if (!ptr) exiterr();                    \
        ptr;                                    \
    })

void exiterr(){
    printf("Memory allocation failed!\n");
    exit(1);
}

void free_cleanup(void **ptr) {
    if (*ptr) {
        free(*ptr);
        *ptr = NULL;
    }
}

#define free_later(ptr) \
    __attribute__((cleanup(free_cleanup))) void *free_later_var = (ptr)

#define obj(name)               struct name
#define member(type, name)      type name
#define makeObj(type, varname)  type varName
#define accessMember(obj, mem)  obj.mem

#define salloc(size) (char [size]){0}

#ifdef debugging
    #define debug if (1)
#else
    #define debug if (0)
#endif

integer _sm_main(integer argc, string *argv);

void _sm_main_runtime(integer argc, string *argv) {
    debug {
        println("[INFO]: Supermin debug mode enabled.");
    }
}

#define main                                                \
    int main(int argc, string *argv) {                      \
        _sm_main_runtime(argc, argv);                                 \
        return _sm_main(argc, argv);                        \
    }                                                       \
    integer _sm_main(integer argc, string *argv)    


#endif

int SUPERMIN_DEBUG = 0;