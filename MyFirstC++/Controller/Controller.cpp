//
//  Controller.cpp
//  MyFirstC++
//
//  Created by Lamb, Isaac on 1/23/18.
//  Copyright © 2018 Lamb, Isaac. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller() {
    
}

void Controller :: start() {
    output();
    cout << "Enter A Number To Find It's Prime Factors" << endl;
    while (num > 0) {
        if (num > 0) {
            prime();
        }
        if (!(num > 0)) {
            cout << "Invalid Response" << endl << endl;
            break;
            break;
        }
    }
}

void Controller :: output() {
    name = "Isaac Lamb";
    cout << name << endl;
    for (int i = 13; i < 32; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << printf("%p",(void*)&name) << endl;
    cout << "My name is " << name << " and I like the number " << 12 << endl;
}

void Controller :: prime() {
    cout << "Input A Number Here: ";
    cin >> num;
    for (int i = 1; i < num + 1; i++) {
        if (num % i == 0) {
            if (num == 1) {
                cout << 1 << " ";
            } else if (num / i == i) {
                cout << num / i << " " << num / i << " ";
            } else {
                cout << num / i << " ";
            }
        }
    }
    cout << endl;
}
