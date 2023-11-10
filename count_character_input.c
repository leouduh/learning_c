#include <stdio.h>
#include <stdbool.h>

/*This program counts the number of times you send something to the buffer

The input buffer that is. When you press 'Enter' It says the number of times you have sent something to the input buffer since the start of the program. 
*/

int main(){
    long count;
    char ch;
    bool done = false;
    count = 0;
    while((ch = getchar()) != EOF){
        if (ch == '\n'){
            count++;
            printf("Made %ld entry(ies) into the buffer in total\n", count);
        };
    };

    done = true;
    printf("--------------------------------\n");
    printf("Thank you for participating, everything in the input buffer thus far is: ");
    printf("%c\n", ch);
    printf("%c\n", EOF);
    if(done == 1 && EOF == ch){
        ch = 'e';
        while((ch=getchar()) != EOF){
            if(ch='\n'){
                printf("\\n");
            }else{
                printf("%c", ch);
            };
        };
    };
}
