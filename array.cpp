//Given an array,A , of N integers, print 's elements in reverse order as a single line of space-separated numbers.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    for(int i=size-1;i>=0;i--)
    {
       cout<<A[i]<<" ";
        
    }
}
