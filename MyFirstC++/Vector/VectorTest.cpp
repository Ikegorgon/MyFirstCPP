//
//  VectorTest.cpp
//  MyFirstC++
//
//  Created by Lamb, Isaac on 1/29/18.
//  Copyright © 2018 Lamb, Isaac. All rights reserved.
//

#include "VectorTest.hpp"

using namespace std;

VectorTest :: VectorTest() {
    cin >> size;
    vector<int> vInt(size);
    while (size < 0) {
        cout << "Bad input - try again: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    for (int i = 0; i < size; i++) {
        vInt[i] = i + 1;
    }
    for (auto i = vInt.begin(); i != vInt.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    cin >> text;
    vString.push_back(text);
    for (auto i = vString.begin(); i != vString.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}
