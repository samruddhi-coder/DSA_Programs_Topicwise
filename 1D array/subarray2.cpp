//subarray consecutive  max diff
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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int prev=a[1]-a[0];
        int current=2;
        int ans=2;

        for(int i=2;i<n;i++)
        {
            if(prev == a[i]-a[i-1])
            {

                current++;
            }

            else
            {
                prev= a[i]-a[i-1];
                current=2;
            }

            ans=max(ans,current);
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}