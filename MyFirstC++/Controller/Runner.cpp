//
//  Runner.cpp
//  MyFirstC++
//
//  Created by Lamb, Isaac on 1/23/18.
//  Copyright © 2018 Lamb, Isaac. All rights reserved.
//

#include "Controller.hpp"
#include "Timer.hpp"

int main() {
    Timer time;
    time.displayInformation();
    Controller app;
    app.start();
}
