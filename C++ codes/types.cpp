#include <iostream>
#include <string>
#include "globvar.h"

//int global_int;
int main(){

    //signed char c = 260;
    //long long i = 11555777551321;
    //char c = "a";
    //double d = i;
    //char c = 121;
    //char c = 'a';
    //unsigned int i = 10;
    //bool c = 22;
    //std::cout << c << std::endl;
    //std::cout << "Hello"
    //"World"  << std::endl; //concatenation.
    //bool a = false;
    //int a = 3.2424235;
    //double a = 2.142L;
    //int a = 07;
    //std::string a = "akash";
    //long long int s = 1251318468468684ll;
    //double s = 3;
    //char s = 290;
    //int s = 0b100011;
    //int s = 024;
    //int s = 0x2F;
    //double s = 3.2e5;
    ////float s = 3.2f;
    //long long int s = 23ll;
    //char s = 66;
    //std::cout << "Hello\tWorld" << std::endl;
    //bool test = false;
    //double test = 10e-2;
    //int test{1.2};
    //std::string s;
    //int s = {3.14};
    //int local_int;
    int local_int{};  //initialize to 0 only.
    int lucal_int;     //default initialized to random garbage value
    extern int yhat;  //declaring global var from globarvar.h0.

    std::cout << local_int << std::endl;
    std::cout << lucal_int << std::endl;
    std::cout << yhat << std::endl;


    return 0;
    }
