#include <stdio.h>
#include <float.h>
#include <stdlib.h>
/*************************************************************
 *
 * //Part 1, 2, 3 : Taking Average
 * Objective    : A program that takes the average of two floats
 * Input        : two float parameters  
 * Output       : the average  
 *
 *************************************************************/

int main(){
/*
//Lab problem 1 
    char string[100];
    char mychar;
    FILE *text = fopen("myfile.txt", "w"); // writing code to open file 

    fputs("Lab", text); //Inputs string literal 
        fclose(text); //closing file 

//Lab problem 2

    printf("Assignment 2\n");
    text = fopen("myfile.txt", "r"); //Opening file again to read 
    fscanf(text, "%c", &mychar); //Scaning file for the first character of "Lab"
    printf("First character is: %c\n", mychar); //Displays the character 
        fclose(text); //closing file  

    text = fopen("myfile.txt", "r"); //Opening file again to read 
    fgets(string, 100, text); //character string to 100 characters 
    printf("Here is your string: %s\n", string); //Displays for user 
        fclose(text); //closing file 

//Lab problem 3

    printf("Assignment 3\n");
    text = fopen("myfile.txt", "r"); // Opeing file again to read 
    while (!feof(text)){ //continues to print string until end of the txt flie is detected 
      printf("%c", fgetc(text)); //prints character 
    }
    printf("\n");
        fclose(text); //closing file 
*/
//Lab problem 4
/*
    char stringtwo[100];
    FILE *fp = fopen("anotherfile.txt", "w"); // writing code to open file 

    fputs("Another file for Lab \n Here is another string for Lab", fp); //Inputs string literal 
        fclose(fp); //closing file 

    //read and print for 4
    
    fp = fopen("anotherfile.txt", "r"); // Opeing file again to read 

        fgets(stringtwo, sizeof(stringtwo), fp); //reads the first line 
        fputs(stringtwo, fp); //stores the first line 
        printf("Assignment 4: %s", stringtwo); //Displays for user 
        
        fgets(stringtwo, sizeof(stringtwo), fp); //reads the second line 
        fputs(stringtwo, fp); //stores the second line 
        printf("%s\n", stringtwo); //Displays for user 

        fclose(fp); //closing file */

//Lab problem 5
/*
    //this becomes a infinite loop. This was unexpected
    char stringtwo[100];
    FILE *fp = fopen("anotherfile.txt", "w"); // writing code to open file 
    fputs("Another file for Lab \n Here is another string for Lab", fp); //Inputs string literal 
        fclose(fp); //closing file 

    fp = fopen("anotherfile.txt", "r"); // Opeing file again to read 
    
    while (!feof(fp)){ //continues to print string until end of the txt flie is detected 
    fgets(stringtwo, sizeof(stringtwo), fp);
    printf("%s\n", stringtwo); //prints character 
    } 
        fclose(fp); //closing file 
*/

    return 0;
}
