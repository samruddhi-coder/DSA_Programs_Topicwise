#include<iostream>

using namespace std;

void fibo(int n1)
{
    int a1,b1;
    a1=0;
    b1=1;

    for(int i=1;i<=n1;i++)
    {

        cout<<a1<<' ';
        int next=a1+b1;
        a1=b1;
        b1=next;
    }

    return;
}

int main()
{
    int n;
    cin>>n;

    fibo(n);
}
