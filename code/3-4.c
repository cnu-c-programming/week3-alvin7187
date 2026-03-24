#include <stdio.h>
#include <stdarg.h>

int max_of(int args, ...){
    int max = -100000;
    va_list ap;
    va_start(ap, args);

    for(int i = 0; i < args; i++){
        int temp = va_arg(ap, int);
        if(max < temp)
            max = temp;
    }

    va_end(ap);

    return max;
}

int main(){
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    
    return 0;
}
