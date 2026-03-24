#include <stdio.h>
#include <stdarg.h>

void my_sum(char types,int args, ...){
    va_list ap;
    va_start(ap,args);
    int sum = 0;

    switch(types){
        case 'S':
            for(int i = 0; i<args; i++){
                printf("%s ",va_arg(ap, char*));
            }
            printf("\n");
            break;
        case 'C':
            for(int i = 0; i<args; i++){
                printf("%c",va_arg(ap, int));
            }
            printf("\n");
            break;
        case 'D':
            for(int i = 0; i<args; i++){
                sum += va_arg(ap, int);
            }
            printf("%d\n",sum);
            break;
    }
    va_end(ap);
}

int main(){
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);
    
    return 0;
}
