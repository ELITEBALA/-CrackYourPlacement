#include<iostream>
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
    int x;
    cin>>x;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=x)
        {
            cout<<"Ceiling is "<<a[i];
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Ceiling does not exist in the array.";
    }
}