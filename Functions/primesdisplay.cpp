#include<iostream>

using namespace std;

bool primeno(int n)
{
   for(int i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           return false;
       }
   }

   return true;
}

int main()
{
    int n1,n2;

    cin>>n1>>n2;

    for(int i=n1;i<=n2;i++)
    {
        if(primeno(i))
        {
            cout<<i<<endl;
        }
    }
}
    