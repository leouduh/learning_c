#include <stdio.h>

int main(){
    char ch;
    while((ch = getchar()) != EOF){
        if (ch=='\n'){
        printf("Gotten one character: \\n\n");
        continue;           
        };
        printf("Gotten one character: %c\n", ch);
    };
}