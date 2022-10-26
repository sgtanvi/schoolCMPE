//
//  main.cpp
//  lab7
//
//  Created by admin on 10/24/22.
//
#include <iostream>

#include <string>

#include <stack>

#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;

      double n=0;

      int position=0;

      stack<int> wholeNumbers;

      cout<<"Enter a decimal number:";

      cin>>s;

      string::iterator counter = s.begin();

      while(*counter!='.' && counter!=s.end()){

          wholeNumbers.push(*counter-48);

          counter++;

          position=position+1;

          for(int i=0;i<position;i++){

                n=n+(wholeNumbers.top()*pow(10,i));

                wholeNumbers.pop();

            }

            position=-1;

            if(counter!=s.end()){

                counter++;

            }

            while(counter!=s.end()){

                n=n+((*counter-48)*pow(10,position));

                position=position-1;

                counter++;

            }
          cout<<n;
      }}

/*Inside the while loop, push the push a number to the wholeNumbers stack by subtracting it with 48.
 Increment the counter and position variable by 1 inside the while loop.
 Count the number of digit, push each digit to top of stack and find the end of the number,
 Run a for loop up to the value of position variable and pop a value from the wholeNumbers stack.*/
