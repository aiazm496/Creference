#include <iostream>


int main(){

  int i = 42;
  int *p1 = &i;
  std::cout << p1 << std::endl;

  *p1 = *p1 * *p1;

   std::cout << *p1 << std::endl;
   std::cout << p1 << std::endl;

   int *p2 = &i;
   std::cout << p2 << std::endl;

   void *p3 = &i;   //used to deal with memory.
   std::cout << p3 << std::endl;









}
