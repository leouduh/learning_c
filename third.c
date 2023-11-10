#include <stdio.h>
/* This Program basically copies input to output*/



int main(){
    int ch;
    while((ch = getchar()) != EOF){
        putchar(ch);
        ch = getchar();
    };
}