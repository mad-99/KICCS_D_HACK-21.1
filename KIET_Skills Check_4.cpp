#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    {
    int t;
    cin>>t;
    while(t--)
    {
        int a,d,k,n,inc;
        cin>>a>>d>>k>>n>>inc;
        int prob = a;
        for(int i=1;i<n;i++)
        {
            if(i%k==0)
            {
                d+=inc;
            }
            prob+=d;
        }
        cout<<prob<<endl;
    }
    return 0;
}