#include <stdio.h> 
#include <float.h>

int main(void){

/*************************************************************
 *
 * //Part 1: sum of integers from 1 to 10
 * Objective    : A program that sums up integers from 1 to 10
 * Input        : N/A
 * Output       : Sum of the integers from 1 to 10
 *
 *************************************************************/

	
	
	//Variable declaration
	int num1 = 1, sum = 0, x = 1;

	//using a while loop
	while (x != 11){
		
		//adds the sum so far to with n+1 integer
		sum = sum + num1;
		//increments n to add to total when the loop runs again 
		num1++;
		//increments x so it can pass though the loop again
		x++;
	}//loop ends when x reaches to 11
	
	
	//using a for loop 
	//for loop condition expression:
		//declares and initializes i, gives condition that i has to be less than 11, and increments i
	for (int i = 1; i < 11; i++){
		//adds the sum so far to with n+1 integer
		sum = sum + num1;
		//increments n to add to total when the loop runs again 
		num1++;
	}//loop ends

	//prints output
	printf("The sum of the integers is %d\n", sum);




/*************************************************************
 *
 * // Part 2: finds the largest positive number
 * Objective    : A program that finds the largest positive number
 * Input        : Numbers 
 * Output       : Returns the largest positive number
 *************************************************************/
	
	//Variable declaration	
	float max = 0.0, num;

	//for loop that contiues to loop until break statement
	for (;;){
		//prompts and scans for a number
		printf("Enter a number(0 to terminate): ");
		scanf("%f", &num);

		//prints output and breaks loop when user types in 0
		if (num == 0) {
			printf("The largest number entered was: %.3f\n", max);
			break;
		}
		
		//saves the larger number when current inputted number is larger than the previously saved number
		if(num>max) max = num; 

		
	}




/*************************************************************
 *
 * //Part 3: reverse the number inputted r
 * Objective    : A program that reverses the digits of the positive number entered
 * Input        : A positive number
 * Output       : Positive integer that is reversed 
 *
 *************************************************************/
	
	//Variable declaration
	int c, num=0, a;
	//Promting user for a positive integer
	printf("Enter a positive integer: ");
	scanf("%d", &c);

	//do statement 
	do{
		a = c%10; 				//modulus 10 to get the last digit
		num = num *10+a;		//multiplying number by 10 and adding the result of modulus
		c/=10;					
	}while(c!=0);				//checks if loop needs to run again by checking the modulus 

	printf("The reversal is: %d\n", num); //prints output to user 



/*************************************************************
 *
 * // Bonus: find the salary 
 * Objective    : A program that can find the salary based on the hours worked and hourly rate
 * Input        : hours worked and hourly rate
 * Output       : Salary 
 *
 *************************************************************/

	//Variable declaration where 
		//h = hours worked 
		//r = hourly rate
		//s = salary 
	float h, r, s;

	//for loop that contiues to loop until break statement
	for(;;){
    
	// prompts user for hours worked 
	printf("Enter # of hours worked (-1 to end): "); 
	scanf("%f", &h);
	if (h == -1) break;									//breaks loop when -1 is entered 

	// prompts user for hourly rate 
	printf("Enter hourly rate of the worked: ");
	scanf("%f", &r);

	if(h<=40){											//calculation for salary when less than or equal to 40 hrs is given 
		s=r*h;
	}
	else{
		s=(r*40)+(1.5*r*(h-40));				    	//calculation for salary when more than 40 hrs is given
	} 

	printf("Salary is $%.2f\n\n", s);					// prints output: salary 

	} 
	


	



	



return 0;
}