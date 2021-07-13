#include<iostream>

using namespace std;

int main()
{
    int t;

    cin>>t;
    while (t--)
    {

        int n;
        cin>>n;

        int a[n+1];
        a[n]=-1;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int cnt=0;
        int mx=-1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>mx && a[i]>a[i+1])
            {
                cnt++;
            }

            mx=max(mx,a[i]);
            cout<<mx<<endl;
        }

        cout<<cnt;
        
        

    }   
    
    return 0;
}