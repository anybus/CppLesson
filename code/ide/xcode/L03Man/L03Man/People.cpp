//
//  People.cpp
//  L01OOP
//
//  Created by anybus on 2017/2/18.
//  Copyright © 2017年 anybus. All rights reserved.
//

#include "People.hpp"

namespace jikexueyuan {
    People::People(){
        this->age = 10;
        this->sex = 1;
    }
    People::People(int age,int sex){
        this->age = age;
        this->sex = sex;
    }
    int People::getSex(){
        return this->sex;
    }
    
    int People::getAge(){
        return this->age;
    }
    void People::sayHello(){
        printf("hello cpp ns\n");
    }
}




