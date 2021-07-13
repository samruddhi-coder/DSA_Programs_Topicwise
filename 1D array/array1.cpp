//finding max till i


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int maximum=-1;
    for(int i=0;i<n;i++)
    {   
       maximum= max(maximum,a[i]);

    }
           
    cout<<maximum<<endl;


    
    return 0;
}