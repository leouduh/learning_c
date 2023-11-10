#include <stdio.h>
#define FACTOR 3
#define addition(a,b) (a+b)


int main(){
    int next, first;
    for (int i=0; i <20; i++){
        if (i >= 1){
            printf("%i times 3 is: %i------while %i + %i is: %i \n", i, i*FACTOR, i, i+1, addition(i, i+1));
            
        };
    };
    return 0;
}