// Copyright 2020 SharunovEvgenya
//
// Created by sharg on 08.12.2020.
//


#include "MyString.h"


int main() {
    MyString first;
    std::cout<< first.length() <<std::endl;
    MyString second("WHAT????????");
    std::cout<< second.length() <<std::endl;
    std::cout<< second.get() <<std::endl;
    MyString copySec(second);
    std::cout<< copySec.length() <<std::endl;
    std::cout<< copySec.get() <<std::endl;
    MyString temp1("TEST FIRST!");
    std::cout<< copySec.operator+(temp1).get() <<std::endl;
    std::cout<<copySec.operator-(temp1).get()<<std::endl;
}