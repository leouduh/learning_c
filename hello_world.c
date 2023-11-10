#include <stdio.h>
#include <string.h>

double f_to_c(double f){
    /*This is a Fahrenheit to celsius converter*/
    double c;
    scanf("%lf", &f);
    c = (f - 32) * (5.0/9.0);
    return c;

}

double c_to_f(double c){
    /*This is a Fahrenheit to celsius converter*/
    double f;
    scanf("%lf", &c);
    f = (c * (9.0/5.0)) + 32;
    return f;

}

int main(){
    int choice;
    double answer, temp;
    char *from = "Fahrenheit";
    char *to = "Celsius";

    printf("Welcome!\npress 1 to convert from F to C\n" 
            "Press 2 to convert from C to F\n");
    scanf("%d", &choice);
    if (choice == 1){
        printf("Please enter temperature in Fahrenheit:   ");
        scanf("%lf", &temp);
        answer = f_to_c(temp);
    }else if (choice == 2){
        printf("Please enter temperature in Celsius:   ");
        temp = getchar();
        answer = c_to_f(temp);
        from = "Celsius";
        to = "Fahreneit";
    }else{
        printf("Please enter a valid input either 1 or 2");
        main();
    };
    printf("You chose to convert from %s to %s\n", from, to);
    printf("%lf %s is equal to %lf %s", temp, from, answer, to);

    return 0;
}
