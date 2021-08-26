#include <stdio.h>
#include <float.h>

int main(void){

    //1. Print the larger of the two usser inputted numbers
    
    
    float a = 0, b = 0; 

    printf("Enter you first number:");      //prompting user 
    scanf("%f", &a);                        //reading user input

    printf("Enter second number:");         //prompting user
    scanf("%f", &b);                        //reading user input 

    //the condition of the if statement compares the values entered 
    if(a > b ) printf("the largest number entered: %.3f\n", a);
    else printf("the largest number entered: %.3f\n", b); 



    /*____________________________________________________________________________________________*/

    //2. three diferent numbers and then prints sum, avg, the product, the smallest, and largest 

    
    
    float a, b, c, sum, avg, product;

    printf("Enter three numbers:");
    scanf("%f %f %f", &a, &b, &c);

    sum = a+b+c;
    printf("Sum is %.2f \n", sum);

    avg = sum/3;
    printf("Average is %.2f \n", avg);

    product = a*b*c;
    printf("Product is %.2f \n", product);

    if (a>b && a>c){
        
        if(b>c){
            //c is smaller
            printf("Smallest is %.2f\n", c);
        }
        else {
            //b is smaller
            printf("Smallest is %.2f\n", b);
        }
        
        printf("Largest is %.2f\n", a);
    }
    
    else if (b>a && b>c){
     //b is greater
        if(a>c){
            //c is smaller
            printf("Smallest is %.2f\n", c);
        }
        else {
            //a is smaller
            printf("Smallest is %.2f\n", a);
        }
        
        printf("Largest is %.2f\n", b);
    }
    
    else {
     // (c>a && c>b) c is greater
        if(b>a){
            //a is smaller
            printf("Smallest is %.2f\n", a);
        }
        else {
            //b is smaller
            printf("Smallest is %.2f\n", b);
        }
        
        printf("Largest is %.2f\n", c);
    }
    



    /*____________________________________________________________________________________________*/
    //3. Calendar dates  

    
    //declaring variables
    int m1, d1, y1, m2, d2, y2, date;
   
    //promting user
    printf("Enter first date (mm/dd/yy):");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy):");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    //comparing year variables
    if(y2>y1){
        //then date 2 is the latest
        date = 1;
    }
    else if (y2>y1){
        date = 2;
        //then date 1 is the latest
    }

    //comparing month variables
    else{
         if(m2>m1){
             date = 1;
            //then date 2 is the latest
        }
        else if (m2>m1){
            //the date 1 is the latest
            date = 2;
        }

        //comparing month varibles 
        else{
            if(d2>d1){
                date = 1;
                //then date 2 is the latest
            }
            else{
                date = 2;
                //the date 1 is the latest
            }
        }



    }

    //prints outputon screen
    switch(date){
        case 1:
            printf("%d/%d/%2d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
            break;
        
        case 2:
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
            break;

        default:
            printf("Both dates are the same.");
            break;
    }








    return 0;
}