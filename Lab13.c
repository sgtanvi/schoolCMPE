#include <stdio.h>
#include <float.h>
#include <string.h>

/*************************************************************
 *
 * Structures, Union, Eunumerations
 * Objective    : Programs prints out variables from structures
 * Input        : 
 * Output       : Variables, members  
 *
 *************************************************************/

    //Part 1a: creating structure with character arrays and integer and floating-point variable
    struct student{
        char firstname[20]; 
        char lastname[20]; 
        int year; 
        float GPA; 
    };
    typedef struct student Student; //typedef 



    //Part 3
    union number{
        int x;
        double y;
    };



    //Part 4
    enum first_six_months{Jan=1,Fed,Mar,Apr,May,Jun};
    enum Last_six_months{Jul=7,Aug,Sep,Oct,Nov,Dec};



    //5a
    struct my_struct{
        int i;
        char c;
        float f;
    };
    typedef struct my_struct Mine;



    //5a
    void print_mystruct(int i, char c, float f);

    //5b
    void print_int(Mine *another);
    
    

int main(){

    //Part 1b: Intialized members with list 
    Student astudent = {"First", "last", 2020, 3.0}; 
    

    //Part 1b: initialized memebers individually 
    Student bstudent;
    strcpy(bstudent.firstname, "Micky");
    strcpy(bstudent.lastname, "Mouse");
    bstudent.year = 1999;
    bstudent.GPA = 3.5;

    //Part 1c: display each memeber of the variable created 
    printf("Part1: %s, %s,%d, %f \n", bstudent.firstname, bstudent.lastname, bstudent.year, bstudent.GPA);



    //Part 2
    printf("Part 2:\n");
    Student student_arr[2]={{"Lime","Lemon",2039,2.4},{"South","West",1999,3.0}};
    for(int i=0; i<2; i++){
        //print using array
         printf("%s,%s,%d,%f\n", student_arr[i].firstname,student_arr[i].lastname, student_arr[i].year, student_arr[i].GPA);
    }




    //Part 3 
    printf("Part 3:\n");
    //declare variable 
    union number num;
    //use varible and union 
    num.x=100;
    printf("the Value of x is %d\n", num.x);
    printf("the Value of x is %f\n", num.y);

    num.y=10;
    printf("the Value of x is %d\n", num.x);
    printf("the Value of x is %f\n", num.y);
    


    //Part 4
    printf("Part 4:\n");
    // for loop for first enum
    printf("from January to June:\n");
    for(int d = Jan; d<=Jun; d++){
        printf("%d\n", d);
    }
     printf("from July to December:\n");
     //create another one for last 6
    for(int d = Jul; d<=Dec; d++){
        printf("%d\n",d);
    }



    //5a 
    Mine rand = { 1, "Hello", 5.5};
    print_mystruct(rand.i, rand.c, rand.f);



    //5b
    Mine another = { 2, "Bye", 6.5};
    print_int(&another);





    return 0;    
}



//5a
void print_mystruct(int i, char c, float f)
{   
    printf("Part 5a:\n");
    printf("Integer: %d\n", i);
    printf("Character: %c\n", c);
    printf("Float: %f\n", f);
    printf("\n");
}



//5b
void print_int(Mine *another){
    printf("Part 5b:\n");
    printf(" Integer: %d\n", another->i);
}