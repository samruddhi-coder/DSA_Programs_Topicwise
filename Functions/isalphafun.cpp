#include<iostream>

using namespace std;

void alphacheck(char c)
{
    if(isalpha(c))
    {
        cout<<"alphabet";
    }
    else if(isdigit(c))
    {
        cout<<"digit";
    }
    else{
        cout<<"special";
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