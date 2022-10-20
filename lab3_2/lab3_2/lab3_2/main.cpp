//part 2
#include<iostream>
#include<vector>
#include "triangle.h"
#include "circle.h"
#include "shape.h"
#include "rectangle.h"
using namespace std;

#define PI 3.14159265358979323846

int main(){
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<shape*> shapes(n);
    cout << "Choose:\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n\n";

    
    for (int i = 0; i < n; i++){
        int choice;
        cout << "Enter choice number for shape " << i + 1 << ": ";
        cin >> choice;
        while (choice < 1 || choice > 3){
            cout << "Invalid Choice. Enter choice: ";
            cin >> choice;
        }
        if (choice == 1) shapes[i] = new circle;
        else if (choice == 2) shapes[i] = new rectangle;
        else if (choice == 3) shapes[i] = new triangle;

        shapes[i]->getParameters();
        shapes[i]->area();
        cout << "\n";
    }
    return 0;
}

