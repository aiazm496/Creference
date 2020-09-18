#include <iostream>

using namespace std;

class AkashClass
{
    public:
        void coolSaying(){
            cout << "preaching to the choir" << endl;
        }
};

int main()
{
    AkashClass akashObject;
    akashObject.coolSaying();
    return 0;
}
