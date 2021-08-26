#include <stdio.h>
#include <float.h>

int main(void){
// part1();
// part2();
// part3();
// part4();



}

void part1(){
int x;
int y;

printf("Enter two integers separated by a space\n" ); //prompt
scanf("%i%d", &x, &y);
printf("%d %d\n", x, y);

return 0;
}

void part2(){
 printf("%d\n", 642);
 printf("%i\n", 642);
 printf("%d\n", +642);
 printf("%d\n", -642);
 printf("%hd\n", 32000);
 printf("%ld\n", 2000000000L);
 printf("%o\n", 642);
 printf("%u\n", 642);
 printf("%u\n", -642);
 printf("%x\n", 455);
 printf("%X\n", 455);
  
 return 0;
}

void part3(){
 printf("%e\n", 1234567.89);
 printf("%e\n", +1234567.89);
 printf("%e\n", -1234567.89);
 printf("%E\n", 1234567.89);
 printf("%f\n", 1234567.89);
 printf("%g\n", 1234567.89);
 printf("%G\n", 1234567.89);
    
 return 0;

}

void part4(){
 char ch;

 /*printf("Without space before string\n" );
 scanf("%c", &ch);
 printf("%c", ch); 
 */

 printf("Without space before string\n" );
 scanf("%c", &ch);
 printf("%c", ch); 
}