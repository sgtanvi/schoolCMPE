//
//  main.cpp
//  Lab6
//
//  Created by admin on 10/17/22.
//
#include <fstream>
#include <iostream>
using namespace std;

bool ispunctuation(char punc) {
  if (punc == '!' || punc == ';' || punc == ',' || punc == '"' || punc == ':' ||
      punc == '-' || punc == '.' || punc == '?' || punc == '!')
    return true;
  return false;
}

int punctuationCount(fstream &inData) {
  if (inData.eof())
    return 0;

  char ch;
  inData >> ch;

  if (ispunctuation(ch))
    return 1 + punctuationCount(inData); // recursion conditions met

  return punctuationCount(inData);
}

void reversePrint(fstream &inData, ofstream &Out) {
  char ch;
  inData >> noskipws >> ch;

  if (inData.eof())
    return;

  reversePrint(inData, Out); // recursion conditions met
  cout << ch;

  Out << noskipws << ch; // outputing to file
}

int main() {
  // declaring streams
  fstream inData("input.txt");
  ofstream Out("output.txt");

  // user choice
  int choice;

  if (!inData) {
    cout << "Cannot open the input file. "
         << "Program terminates!" << endl;
    return 1;
  }

  // display choices
  cout << "Story File: input.txt\n\n";
  cout << " 1. Find the number of punctuations in the story\n 2. Print the "
          "story in reverse (to output.txt)\n 3. Both\n";
  cout << "Enter choice: ";
  cin >> choice;

  // invalid choice
  while (choice < 1 || choice > 3) {
    cout << "Invalid choice. Enter again: ";
    cin >> choice;
  }
  cout << "\n";

  switch (choice) {
  case 1:
    cout << "The story has " << punctuationCount(inData)
         << " Punctuation marks.\n";
    break;

  case 2:

    cout << "The story in reverse is: \n";
    reversePrint(inData, Out);
    break;

  case 3:

    cout << "The story has " << punctuationCount(inData)
         << " Punctuation marks.\n";
    inData.clear();
    inData.seekg(0);
    cout << "The story in reverse is: \n";
    reversePrint(inData, Out);
    break;
  }
  inData.close();
  Out.close();
  return 0;
}
/*
//returns true if we run into punctuation
bool ispunctuation(char punc){
    if (punc =='!'|| punc ==';' || punc ==','|| punc =='"'|| punc ==':'|| punc =='-'|| punc =='.'|| punc =='?'||  punc =='!') {
        return true;
    } else {
        return false;
    }
}

int punctuationCount(ifstream& inData){
    if(inData.eof()) return 0;
    
    char ch;
    inData>>  ch;
    
    if(ispunctuation(ch)){
        //recursive funtion conditions met
        return 1 + punctuationCount(inData);
    }
    
    return punctuationCount(inData);
}

void reverseprint(ifstream& inData, ofstream& outData){
    char ch;
    inData>>noskipws>>ch;
    
    if(inData.eof()) return;
    
    reverseprint(inData, outData);
    cout<<ch;
    
    outData<<noskipws<<ch;

}*/

//at every

/*
int main() {
    
    //declaring file stream data
    ifstream Data("input.txt");//("input.txt");
    ofstream Out("output.txt");
    
    int choice; //variable for user
    //open files
    
    //Out.open("output.txt");//output file
    Data.open("input.txt"); //open the input file
        
//    if (!Data)
//    {
//    cout << "Cannot open the input file. "
//    << "Program terminates!" << endl;
//    return 1;
//    }
    
    
    cout<<" 1. Find number of punctuation\n 2.Print story in reverse\n 3.both\n";
    
    cout<<"Enter choice: ";
    cin>> choice;
    
    while(choice<1 || choice>4){ cout<< "INVALID";}
    
    switch (choice){
        case 1:
            cout<<"the story has"<<punctuationCount(Data)<<"punctuations";
            
        case 2:
            cout<<"reverse story:";
            reverseprint(Data, Out);
            cout<<" \nLa Fin";
            
        case 3:
            cout<<"reverse story and no punctuations:";
            reverseprint(Data, Out);
            cout<<" \nLa Fin";
        case 4:
            cout<<"bye";
            
            exit(1);

    }
    
    
    //string str = inData.getline(<#char_type *__s#>, <#streamsize __n#>);
    //Close files
    Data.close();
    Out.close();
    
        return 0;
}*/
