#include <stdio.h>
#include <stdarg.h>

int average(int args, ...){
    int sum = 0;
    va_list ap;
    va_start(ap, args);

    for(int i = 0; i < args; i++){
        sum += va_arg(ap, int);
    }

    va_end(ap);

    return sum/args;
}

int main(){
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}
