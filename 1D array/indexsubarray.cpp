#include<iostream>

using namespace std;

int main()
{
    int n,s1;
    cin>>n;
    cin>>s1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int i=0;
    int s,e,sum=0,j=0;

    for(j=0;j<n && sum+a[j]<=s1;j++)
    {
        sum=sum+a[j];

    }

    //cout<<"sum"<<sum;
    if(sum==s1)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;

    }
    cout<<"j"<<j;
    while (j<n)
    {

        sum = sum+a[j];

        /* code */
        while(sum>s1)
        {

            //cout<<"i"<<i;
            sum=sum-a[i];
          //  cout<<"sum1"<<sum;
            i++;
        }

        if (sum==s1)
        {
            s=i+1;
            e=j+1;
            break;
        }

        
        
       
    }

    cout<<s<<e;
    


    


    return 0;
}