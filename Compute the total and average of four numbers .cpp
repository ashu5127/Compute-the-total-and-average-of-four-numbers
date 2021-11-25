
#include <iostream>
using namespace std;
int main()
{
    int a=25,b=20,c=15,d=25;
    float total;
    float average;
cout<<"Compute the total and average of four numbers :"<<endl;
cout<<"----------------------------------------------------:"<<endl;

cout<<"Input 1st two numbers (separated by space) :"<<a<<" "<<b<<endl;// 25 20
cout<<"Input last two numbers (separated by space) :"<<c<<" "<<d<<endl;// 15 25
total=a+b+c+d;
cout<<"The total of four numbers is :"<<total<<endl; //85
average=total/4;
cout<<"The average of four numbers is :"<<average<<endl;// 21.25
return 0;
}
