#include<iostream>

using namespace std;

void print(int num)
{
    
    cout<<num<<endl;
    return;
}
int addnum(int num1, int num2)
{
    print(num1);
    print(num2);
    int sum=num1+num2;
    cout<<"sum:";
    return sum;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;

    cout<<addnum(n1,n2);


}