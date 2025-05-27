// Verify the greater number between two integers

#include<iostream>

using namespace std;

int main()
{
    int number_1, number_2;
    cout<<"Enter first number:\n";
    cin>>number_1;
    cout<<"Enter second number:\n";
    cin>>number_2;

    if (number_1>number_2)
    {
       cout<<"First number is greater"; 
    }
    else if (number_1<number_2)
    {
        cout<<"Second number is greater";
    }
    else cout<<"Both numbers are equal";
    
    return 0;
}