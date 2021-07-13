#include<iostream>

using namespace std;


int factor(int n1)
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
    int n;
    cin>>n;

   cout<<factor(n);

}