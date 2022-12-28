#include<iostream>
#include "OperationLib.hpp"


int main(int argc, char **argv)
{
    std::cout << "2+3=" << add(2,3) <<std::endl;
    std::cout << "2*3=" << multi(2,3) <<std::endl; 
    std::cout << "5*10=" << multi(5,10) <<std::endl; 
}