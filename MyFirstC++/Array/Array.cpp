//
//  Array.cpp
//  MyFirstC++
//
//  Created by Lamb, Isaac on 1/26/18.
//  Copyright © 2018 Lamb, Isaac. All rights reserved.
//

#include "Array.hpp"

using namespace std;

Array :: Array() {
    
}
void Array :: test() {
    int intarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double doublearray[10] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    string stringarray[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K",
        "L", "M", "N", "O" , "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    
    cout << "An int is " << intarray[rand() % 10] << " and a double is " << doublearray[rand() % 10] << " and a letter is " << stringarray[rand() % 26] << endl;
}
