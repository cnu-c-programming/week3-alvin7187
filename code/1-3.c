#include <stdio.h>


int power(int base, int exp){
    if(exp == 0){
        return 1;
    }
    exp--;
    
    return base * power(base,exp);
    
}

int main(){
    
    printf("%d\n",power(2,3));
    printf("%d\n",power(5,0));
    printf("%d\n",power(3,4));
    return 0;
}

