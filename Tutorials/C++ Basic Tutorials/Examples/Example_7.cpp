 //Example 7: Regarding logical Operators
 
 #include<iostream>
 using namespace std;
 int main()
 {
 	int a=10,b=50,c=30;
 	if(a>b&&a>c)
 	cout<<"a is greater";
 	if(b>a&&b>c)
 	cout<<"b is greater";
 	if(c>a&&c>b)
 	cout<<"c is greater";
    return 0;
 }

 /*
 ### Output ###
 b is greater
 */