#include<iostream>

using namespace std;


void agecheck(int n)
{
    if(n>=18)
    {
        cout<<"person can vote";
    }
    else
    {
        cout<<"person cannot vote";
    }

    return ;
}
int main()
{

    int n1;
    cin>>n1;

    agecheck(n1);
    return 0;
}