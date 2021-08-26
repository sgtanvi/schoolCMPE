#include <stdio.h>
#include <float.h>

/*************************************************************
 *
 * //Part 1, 2, 3 : Taking Average
 * Objective    : A program that takes the average of two floats
 * Input        : two float parameters  
 * Output       : the average  
 *
 *************************************************************/

float average(float test1a, float test1b){						//declares fuction average with two float parameters
	float avg = test1a + test1b / 2;							//calculation 
	
return avg;														//returns avg 
}



/*************************************************************
 *
 * //Part 4: Countdown
 * Objective    : A function that counts down from the max to zero 
 * Input        : integer   
 * Output       : a count down from inputted integer to 0  
 *
 *************************************************************/
int count(int max){
	while(max!=0){												// while loop  runs until max reaches 0 
		printf("%d \n", max);									// prints max number
		max--; 													// Subtracts 1 from max
	}
return 0; 
}

/*************************************************************
 *
 * //Part 5: Array funtion
 * Objective    : A function that initializes the array elements to zero from element 0 to number entered by user  
 * Input        : array, array size, and user input  
 * Output       :Array with initalized elements 
 *
 *************************************************************/

int arrfun(int arr_A[], int size){
	int n = 0;
	
	printf("Enter an interger number less than %d:", size);			//prompts user for the number 
	scanf("%d",&n);	
	while (n>=size){												//loops through if user's number is greater than or equal 
	printf("Try again. Enter an interger number less than %d:", size); 												//to array size
		scanf("%d",&n);	

	}
	
		for(int i=0; i < n; i++){
			arr_A[i] = 0;											//initializes elements to 0 till element user inputted number
		} 
		
	
	for(int loop = 0; loop < size; loop++)							//prints the array with initalized elements 
      printf("%d ", arr_A[loop]);


return 0;	
}

int main(void){
	printf("%f \n",average(3.0,2.0));							//DIsplays result of Part 1, 2, 3		

	printf("%d ", count(5));									//Displays result of Part 4

	int d[5] = {1,2,3,4,5};
	
	arrfun(d,5);												//Calls Part5 
	
return 0;
}
