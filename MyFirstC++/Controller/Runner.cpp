//
//  Runner.cpp
//  MyFirstC++
//
//  Created by Lamb, Isaac on 1/23/18.
//  Copyright © 2018 Lamb, Isaac. All rights reserved.
//

#include "Controller.hpp"
#include "Timer.hpp"
#include "Array.hpp"

int main() {
    Timer time;
    time.displayInformation();
    Array array;
    array.test();
    Controller app;
    app.start();
}
