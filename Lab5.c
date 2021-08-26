#include <stdio.h>


void ex1a() {

    char ch1, ch2;
    printf("Enter first character:\n");
    scanf("%c", &ch1);
    printf("%c\n", ch1);
    printf("Enter second character:\n");
    scanf("%c", &ch2);
    printf("%c\n",ch2);

    printf("....................\n");

}

void ex1b(){
    
    char ch1, ch2;
    printf("Enter first character:\n");
    ch1 = getchar();
    putchar(ch1);
    printf("\nEnter second character:\n");
    ch2 = getchar();
    putchar(ch2);

    printf(".....................\n");
    
}

void ex1c(){
    char ch1, ch2;
    ch2 = 0;
    printf("Enter first character:\n");
    ch1 = getchar();
    putchar(ch1);
    printf("\nENter second character:\n");

    while (ch2 != '\n') ch2 = getchar();

    ch2 = getchar();
    putchar(ch2);

    printf("\n......................\n");
}

void ex2(){
    printf("---Example 2a----\n");
    printf("I am trying to print a \'?\'\"\n");

    printf("---Example 2b----\n");
    printf("\"I\tam\ttrying\tto\tprint\ta\t\'?\'\"\n");
}

void ex3(){
    int int_ = 1.2;
    char chaR = 8;
    printf("%d\n", int_);
    printf("chaR%c", chaR);
}

int main(void){
    int int_ = 1.2;
    char chaR = 8;
    printf("%d\n", int_);
    printf("chaR%c", chaR);;
    
}
