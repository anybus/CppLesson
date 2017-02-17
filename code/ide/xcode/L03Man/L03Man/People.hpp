//
//  People.hpp
//  L01OOP
//
//  Created by anybus on 2017/2/18.
//  Copyright © 2017年 anybus. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>

namespace jikexueyuan {
    class People{
    private:
        int age;
        int sex;
    public:
        People();
        People(int age,int sex);
        int getAge();
        int getSex();
        void sayHello();
    };
}

#endif /* People_hpp */
