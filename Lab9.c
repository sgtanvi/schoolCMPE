#include <stdio.h> 
#include <float.h>
#include <stdbool.h>


int main(void){

/*************************************************************
 *
 * //Part 1: Fibonaci numbers
 * Objective    : A program that calculates the first 15 numbers of the Fibonaci numbers and puts them in an array
 * Input        : N/A
 * Output       : Array of Fibonaci numbers 
 *
 *************************************************************/

// Declare an array of size 14 (since arrays start at 0) and input the first 
    int fib_num[14]= {0,1}; 

// Initialized num1 and num2 to the first and second index 
    int num1 = 0;
    int num2 = 1;
    int num3 = 2;


// Length of the array fib_num -1 so the for loop stops before calulating the 16th term 
    int length_fib_num = sizeof(fib_num) / sizeof(fib_num[0]) -1; 

// print output
  /*  printf("fib_num[0] = %d\n", fib_num[0]);
    printf("fib_num[1] = %d\n", fib_num[1]);

// used to print the output 
    int n = 2;

// for loop to calculate the first 15 numbers of fibonaci sequence
    for(int i = 0; i < length_fib_num; i++){

        // calulates the next number in the fibonaci sequence
        fib_num[num3] = fib_num[num2] + fib_num[num1]; 
        
        num1++; 
        num2++;
            num3++; 

    //print output 
        printf("fib_num[%d] = %d\n", n, fib_num[n]); 

        n++;

    }*/








   
int number[10]={0};
int digit;
long int n = 0;
    
for(;;){
printf("Enter a number (0 to terminate): ");
scanf("%ld", &n);

while(n >= 0){

    if(n==0 || n>0) break;

    while (n > 0){
        digit = n % 10;
        n /= 10;
    }

    
}
    




return 0; 
}