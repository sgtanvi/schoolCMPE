/*************************************************************
 * Question 1
 * 
 * Notes:
 * Involves int, char, short. 
 * Integer uses 4 bytes (will use the most bytes).
 * Character uses 1 byte. 
 * Short integer uses 2 bytes. 
 * 16 variables each. 
 *
 *
 *
 * I can use a union to store three variables of each type  and also because I dont need to 
 * use the integer, charater,  and short at the same time.
 * Then I can create a array to initialize these variables. 
 * With a union all members share the same memory, so 4 bytes is the size of the union.
 *************************************************************/
#include <stdio.h>
#include <string.h>
typedef union{              //declaring union
        int myint;          //creating an integer variable 
        char mychar;        //creating a character variable 
        short myshort;      //creating a short integer variable
    } mem;

int main(){
    mem f[16];              //creating an array called f with a size of 16
                            //therefore we can intialize 16 variables of 
                            //integer, charater,  and short.
        //problem with code here: doesnt print out char
        //Example:
        f[0].myint = 1;     //initializing one integer variable to 1
        f[0].mychar = 'a';  //initializing one char variable to "a"
        f[0].myshort = 2;   //initializing one shart integer variable to 2
                            
                            //displaying to user:
        printf("my first integer : %d \n my first character: %c \n my first short integer: %hu \n", f[0].myint, f[0].mychar,f[0].myshort); 

    return 0;
}


/*************************************************************
 * Question 2
 * Objective    : A C program that stores each element of an array into a single variable
 * Input        : Array ad[8]
 * Output       : int data  
 *
 * Math Process for for-loop: 
 * data =(0 * 2^0)+ (0 * 2^1)+ (0 * 2^2)+ (0 * 2^3)+ (0 * 2^4)+ (1 * 2^5)+ (0 * 2^6)+ (1 * 2^7)
 * data = 2^5 + 2^7 = 160
 *************************************************************/

#include <math.h>
#include <stdio.h> 

int main(){

    int ad[8] ={0,0,0,0,0,1,0,1};   //declaring anf initializing my array 
    int data = 0;                   //declare and initialize integer variable data to zero  

    for(int i=0; i< 8;i++){         //make a for-loop that goes through each element of the array ad
        if(ad[i]==1){               //checks if current element of the array ad is equal to one
            data= data+(ad[i]*pow(2,i));    //adds the sum to 0 or 1 that is in the array element 
        }
    }
    printf("data is =%d\n", data);   // Displays data on screen 

    return 0; 
}