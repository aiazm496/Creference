#include <iostream>

int main(){

    int currVal;
    int val;

    if(std::cin>>currVal){
        int cnt = 1;

        while(std::cin>>val){
            if(val==currVal){
                ++cnt;
            }
            else{
                std::cout<<currVal<<" count is " << cnt << std::endl;
                currVal = val;
                cnt = 1;

            }

        }
        std::cout<<currVal<<" count is " << cnt << std::endl;




    return 0;
    }

   else{

        std::cerr << "please enter correct data" << std::endl;
        return -1;
   }




}
