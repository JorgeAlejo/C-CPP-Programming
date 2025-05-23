/*Example 5: regarding external variables*/

#include <iostream>
using namespace std;

int x = 5;

int main(){
    extern int x;
    cout<<x;
}