//
//  main.cpp
//  Lab7_2
//
//  Created by admin on 10/25/22.
//

#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

double numeric(string num);

bool isOperand(char c){
    return isalpha(c) || isdigit(c);
}
int getPrecedence(char c){
    if(c=='-' || c == '+'){
        return 1;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    return 0;
}

class postFix{
    public:
    postFix();
    postFix(std::string);
    string showInFix() const;
    void getInFix(string&);
    string infixToPostfix(string);
    friend bool ifGreater(char, char);

    private:
    string infix;
};

postFix::postFix(){
}

postFix::postFix(string infix){
    this->infix = infix;
}

string postFix::showInFix() const{
    return infix;
}

void postFix::getInFix(string& i){
    this->infix = i;
}

bool ifGreater (char top, char  current){
    //if the current has a greater precedence than the stack
    if(current == '*' || current == '/'){
        if(top == '+' || top == '-'){
            return true;
        }
    }
    return false;
}
string postFix::infixToPostfix(string infix){
     
        stack<char> st;
        string result;
     
        for(int i = 0; i < infix.length(); i++) {
     
            if((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= '0' && infix[i] <= '9'))
                result += infix[i];
     
            else if(infix[i] == '(')
                st.push('(');
     
            else if(infix[i] == ')') {
                while(!st.empty() && st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
     
            //If an operator is scanned
            else {
                while(!st.empty() && !ifGreater(st.top(), infix[i])){
                    
                        if(st.top() == '('){
                            break;
                        }
                        result += st.top();
                        st.pop();
                    
                }
                st.push(infix[i]);
            }
            
        }
// Pop all the remaining elements from the stack
    while(!st.empty()) {
        if(st.top() == '(' || st.top() == ')'){
            st.pop();
        }
        else{
            result += st.top();
            st.pop();
        }
    }
    
    return result;
}


int main(int argc, const char * argv[]) {
    string number = "1234";
    string dec = "1.23";
    string if1 = "A+B-C";
    string if2 = "(A+B)*C";
    string if3 = "(A+B)*(C+D)";
    string if4 = "A+((B+C)*(E+F)-G)/(H-I)";
    string if5 = "A+B*(C+D)-E/F*G+H";

    cout << "digital number is: " << numeric(number) << endl;
    cout << "digital number is: " << numeric(dec) << endl;
    
    postFix p1;
    postFix p2;
    postFix p3;
    postFix p4;
    postFix p5;
    
    p1.getInFix(if1);
    cout << "Postfix1: " << p1.infixToPostfix(if1) << endl;
    p2.getInFix(if2);
    cout << "Postfix2: " << p2.infixToPostfix(if2) << endl;
    p3.getInFix(if3);
    cout << "Postfix3: " << p3.infixToPostfix(if3) << endl;
    p4.getInFix(if4);
    cout << "Postfix4: " << p4.infixToPostfix(if4) << endl;
    p5.getInFix(if5);
    cout << "Postfix5: " << p5.infixToPostfix(if5) << endl;
            
    return 0;
}

double numeric(string num){
    bool isDeci = false;
    stack<int> number;
    stack<int> d;
    double r = 0.0;
    for(int i = 0; i < num.length(); i++){
        if(num.at(i) == '.'){
            isDeci = true;
            d.push((int)num[i]-48);
        }
        else{
            number.push((int)num[i]-48);
        }
    }
    
    int i = d.size()* (-1);
    if(isDeci){//convert stack to result
        while(!d.empty()){
            r += d.top() * pow(10,i);
            d.pop();
            i++;
        }
    }
    i = 0;
    while(!number.empty()){//convert stack to result
        r += number.top() * pow(10,i);
        number.pop();
        i++;
    }
    
    return r;
}

/*
 digital number is: 1234
 digital number is: 122.8
 Postfix1: AB+C-
 Postfix2: AB+C*
 Postfix3: AB+CD+*
 Postfix4: ABC+EF+*G-HI-/+
 Postfix5: ABCD+*+EF/G*-H+
 Program ended with exit code: 0
 */

