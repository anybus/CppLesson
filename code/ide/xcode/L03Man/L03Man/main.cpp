//
//  main.cpp
//  L03Man
//
//  Created by anybus on 2017/2/18.
//  Copyright © 2017年 anybus. All rights reserved.
//

#include <iostream>
//#include "People.hpp"
//using namespace jikexueyuan;
#include "Man.hpp"

int main(int argc, const char * argv[]) {
    People *man = new Man();
    man->sayHello();
    int age = man->getAge();
    std::cout<< age ;
    return 0;
}
