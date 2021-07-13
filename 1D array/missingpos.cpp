//finding positive missing no.

#include<iostream>

using namespace std;

int main()
{   
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int ans;

    const int N= 1e6;

    bool newarray[N];

    for(int i=0;i<N;i++)
    {
        newarray[i]=false;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=0)
        {
            newarray[a[i]]=true;
        }
    }

    for (int i = 1; i < N; i++)
    {
        if(newarray[i]==false)
        {
            ans=i;
            break;
        }
    }

    cout<<ans;
    
    




    



    return 0;
}