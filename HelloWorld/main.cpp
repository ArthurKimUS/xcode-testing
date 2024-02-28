//
//  main.cpp
//  HelloWorld
//
//  Created by Arthur on 2024/02/28.
//

#include <iostream>
#include "header.hpp"
#include <cstdlib>
using namespace std;

int main() {
    // insert code here...
    cout << "Hello  World!\n";
    
    print("What's up?");
    
    string myString;
    
    print("enter number:");
    cin >> myString;
    print("your number:");
    print(myString);
    
    for (int i = 0; i < 10; ++i)
    {
        cout << i << endl;
    }
}
