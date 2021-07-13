#include<iostream>

using namespace std;

bool evenodd(int n1)
{
    if(n1%2==0)
    {
        return true;
    }
   return false;
}
int main()
{
    int n;
    cin>>n;

    if(evenodd(n))
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

    return 0;
}