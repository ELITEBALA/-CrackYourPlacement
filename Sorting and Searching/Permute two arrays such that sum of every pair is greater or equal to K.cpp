#include<iostream>
#include<vector>
using namespace std;
string find(vector<int> &a,vector<int> &b,int k)
{
    int n=a.size();
    int c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]+b[i]>=k)
        {
            continue;
        }
        else
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        return "No";
    }
    else
    {
        return "Yes";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(b[j]<b[j+1])
            {
                int t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    cout<<find(a,b,k);
}