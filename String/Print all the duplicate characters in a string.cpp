#include<iostream>
#include<map>
using namespace std;
int main()
{
    string a;
    cin>>a;
    map<char,int> count;
    for(char i:a)
    {
        count[i]++;
    }
    for(auto i:count)
    {
        if(i.second>1)
        {
            cout<<i.first<<", count = "<<i.second<<endl;
        }
    }
}