//
//  Controller.hpp
//  MyFirstC++
//
//  Created by Lamb, Isaac on 1/23/18.
//  Copyright © 2018 Lamb, Isaac. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>

class Controller {
public:
    Controller();
    void start();
    void output();
    void prime();
    std::string name;
    int num = 1;
};

#endif /* Controller_hpp */
