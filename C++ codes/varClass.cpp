#include <iostream>
#include <string>
using namespace std;

class AakashClass{

    public:
        AakashClass(string z){
            setName(z);       //initializing obj variable
        }

    private:
        string name;

    public:      //setter func
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
};

int main(){

    AakashClass ao("Suresh");
    //ao.setName("Akash");
    cout << ao.getName() <<endl;

    AakashClass ao2("Holiya");
    cout << ao2.getName();

    return 0;
}
