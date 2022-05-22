#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
  return a>b;
}
int main()
{
    int size,key;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
    
    cin>>array[i];
    }
    sort(array,array+size,compare);
    cin>>key;
    cout<<array[key-1];

    return 0;
}