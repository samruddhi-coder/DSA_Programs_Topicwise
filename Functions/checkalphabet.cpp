#include<iostream>

using namespace std;

void alphacheck(char c)
{
    if((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        cout<<"alphabet";
    }
    else
    {
        cout<<"not alphabet";
    }
return;
}

int main()
{

    char a;
    cin>>a;

    alphacheck(a);
    return 0;
}