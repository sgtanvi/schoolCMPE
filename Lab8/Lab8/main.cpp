//
//  main.cpp
//  Lab8
//
//  Created by admin on 11/1/22.
//

#include <iostream>
#include <stack>
using namespace std;
int main(){
    string str;
    cout<<"Enter a arithmatic string: ";
        getline (cin,str);
   
    bool flag=true;
    stack<char> st;
    
    //looping thru whole string
    for(int i=0;i<str.size();i++){
        //checking if it matches element
        if( (str.at(i)>='0' && str.at(i)<='9') || str.at(i)=='+' || str.at(i)=='-' || str.at(i)=='/'|| str.at(i)=='*' || str.at(i)==' '  ){
              // cout<<str.at(i) <<"came"<<endl;
            continue;
         
        }
        if( str.at(i)=='{' || str.at(i)=='(' ){
            st.push(str.at(i));
        }
        else if(!st.empty() &&((st.top() == '{' && str.at(i) == '}') || (st.top() == '(' && str.at(i) == ')')))
                 st.pop();
        else{
            flag=false;
            break;
        }
        
    }
    
    if(!st.empty()){
        cout<<"Does not match"<<"\n";
    }else{
    if(flag)
        cout<<"Match"<<"\n";
    else
        cout<<"Does not match"<<"\n";
    }
    return 0;
}
