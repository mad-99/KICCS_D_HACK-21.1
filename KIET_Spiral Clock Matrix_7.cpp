#include<iostream>
#include<vector>
using namespace std;

int main(){

// int t=1;
int y;
cin>>y;
int ans=1;
int t=y;
int arr[y][y];

int i;
int k = 0;
int l = 0;
int x=y;
x--;
y--;

while(k <= x && l <= y)
{
for(i = l; i <= y; ++i)
{
arr[k][i]=ans++;
}


k++;
for(i = k; i <= x; ++i)
{
arr[i][y]=ans++;
}


y--;
if(x >= k)
{
for(i = y; i >= l; --i)
{
arr[x][i]=ans++;
}
x--;
}


for(i = x; i >= k; --i)
{
arr[i][l]=ans++;
}

l++;
}
for(int i=0;i<t;i++){
for(int j=t-1;j>-1;j--)
cout<<arr[j][i]<<" ";

cout<<endl;
}

return 0;
}