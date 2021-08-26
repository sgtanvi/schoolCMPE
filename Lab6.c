#include <stdio.h>

int main(void){


// Part 1a: Write a program that adds two fractions
    /*Enter fraction and assign */

    // int a, b, c, d, denm, num;

    /*
        scanf("%d/%d", &a, &b);

    
        
    printf("Enter second fraction: ");
        scanf("%d/%d", &c, &d);
        
    
    denm = b*d;
    num = (a*d)+(c*b);


    printf("%d/%d\n", num, denm);*/

// Part 1b: Modified Part 1a with user enters both fractions at the same time, seperated by a + sign 
    /*printf("Enters both fractions at the same time, seperated by a + sign: \n");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);
    denm = b*d;
    num = (a*d)+(c*b);


    printf("%d/%d\n", num, denm);*/


// Q2. Write a program to create a check digit for student ID # 
    int z, a, b, c, d, e, f, g, h;
    printf("Enter student id: \n");
    scanf("%d", &z);

    a = z%10;
    z /= 10;
    b = z%10;
    z /= 10;
    c = z%10;
    z /= 10;
    d = z%10;
    z /= 10;
    e = z%10;
    z /= 10;
    f = z%10;
    z /= 10;
    g = z%10;
    z /= 10;
    h = z%10;
    z /= 10; 



    // Add 1st, 3rd, 5th, 7th digits 
    int addOdd = b + d + f + h;;
    printf("Adding the 1st, 3rd, 5th, 7th digits: %d \n", addOdd);

    // Add 2st, 4rd, 6th, 8th digits 
    int addEven = a + c + + e + g;
    printf("Adding the 2st, 4rd, 6th, 8th digits: %d \n", addEven);

    //Mulitpy the 1st sum by 3 and add to second sum
    int calc3 = (addOdd*3) + addEven;

    //Subtract 1 from total
    calc3--;

    //Remainder when divied by 10 
    calc3 = calc3%10;

    //Subtract remainder from 9
    calc3 = 9-calc3;

    printf("Our check digit is %d", calc3);






//Q3. Design a percent calculator:
    /*float max, score, p; 
    printf("What is the max score? ");
    scanf("%f", &max);


    printf("What is your score? ");
    scanf("%f", &score);

    p = (score/max)*100;
    printf("Here is your percent: %.2f %%", p);*/
    


return 0;

}
