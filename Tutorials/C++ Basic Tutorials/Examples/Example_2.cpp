/*Example 2: Over locar/automatic variables*/

#include <iostream>
using namespace std;

int main(){
    auto x=5;
    {
        auto x=3;
        {
            auto x=1;
            cout<<x<<endl;
        }
        cout<<x<<endl;
    }
    cout<<x<<endl;
}

 /*
 ### Output ###
 1
 3
 5
 */