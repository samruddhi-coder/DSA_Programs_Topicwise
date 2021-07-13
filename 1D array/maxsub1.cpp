#include<iostream>
#include<climits>

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
    
    int maxx = INT_MIN;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if(sum<0)
        {
            sum=0;
        }

        maxx = max(maxx,sum);
        
    }
    

    cout<<maxx;
    return 0;
}