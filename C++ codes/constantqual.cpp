#include <iostream>


int main(){

    int i = 2;

    //i =3;    //cant change value of constant var
    const int &r = i;    //ref to constant cant change int object it refers.

    //r = 4;  ref to const cant change the object it refers.

    const int *p = &i;
    *p=2;
    //pointer to const can't change the value of i.

    //Thus it is said dont think const ref, pointer
    //actually ref,points to objects as original obj could change.

    return 0;
}
