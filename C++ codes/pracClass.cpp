#include <iostream>
#include <string>
using namespace std;

class TestClass{

    public:
        TestClass(string s){
            setName(s);
        }

        string getName(){
            return name;
        }

        void setName(string x){
            name = x;
        }


    private:
        string name;


};


int main(){

    TestClass tc("test");
    tc.setName("exam");
    cout << tc.getName();

    return 0;
}
