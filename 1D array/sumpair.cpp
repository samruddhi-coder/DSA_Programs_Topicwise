#include<iostream>
#include<climits>

using namespace std;

int checksum(int a[],int n,int k)
{
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if (a[low]+a[high]==k)
        {
            cout<<low<<" "<< high <<endl; 
            return 1;       
        }
        else if (a[low]+a[high]>k)
        {
            high--;       
        }
        else
        {
            low++;
        }
    

    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;

    cout<<checksum(a,n,k);


}