#include<iostream>

using namespace std;


int facto(int n1)
{
    int fact=1;

    for(int i=1;i<=n1;i++)
    {
        fact*=i;
        //cout<<fact<<" ";
    }

    return fact;
}


int main()
{
    int n,r;
    cin>>n>>r;

    int nCr=facto(n)/(facto(n-r)*facto(r));
    cout<<nCr;

    return 0;
}