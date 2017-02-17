//
//  main.cpp
//  L02NS
//
//  Created by anybus on 2017/2/18.
//  Copyright © 2017年 anybus. All rights reserved.
//

#include <iostream>
#include "People.hpp"

using namespace jikexueyuan;

int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}
