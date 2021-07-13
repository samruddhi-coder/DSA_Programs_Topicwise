#include<iostream>

using namespace std;


void min(int a1,int b1,int c1)
{
    if(a1>b1 && a1>c1)
    {
        cout<<"max:"<<a1<<endl;
    }

    else if(b1>a1 && b1>c1)
    {
        cout<<"max:"<<b1<<endl;
    }
    else
    {
        cout<<"max:"<<c1<<endl;

    }



    return;
}
void max(int a1,int b1,int c1)
{
   if(a1<b1 && a1<c1)
    {
        cout<<"min:"<<a1<<endl;
    }

    else if(b1<a1 && b1<c1)
    {
        cout<<"min:"<<b1<<endl;
    }
    else
    {
        cout<<"min:"<<c1<<endl;

    }
    return;
}

int main()
{

    int a,b,c;
    cin>>a>>b>>c;

    min(a,b,c);
    max(a,b,c);
    return 0;
}