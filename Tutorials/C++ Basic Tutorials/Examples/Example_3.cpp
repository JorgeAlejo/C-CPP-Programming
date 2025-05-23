/*Example 3: regarding static variables*/

#include <iostream>
using namespace std;

void demo(){
    static int x = 0;
    cout<<x<<endl;
    x++;
}

int main (){
    demo();
    demo();
    demo();
    demo();
    return 0;
}

 /*
 ### Output ###
 0
 1
 2
 3
 */