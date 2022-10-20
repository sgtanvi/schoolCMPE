//
//  main.cpp
//  tester
//
//  Created by admin on 9/29/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int *p;
    int x;
    x = 12;
    p = &x;
    cout << x << ", ";
    *p = 81;
    cout << *p << endl;
    return 0;
}
