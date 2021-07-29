//given an array of N integers including 0.
//the task is to find the smallest +ve number missing from array
/*
i/p
0 -9 1 3 -4 5
2 1 -9 5 3 -4
o/p
2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],temp=0,b=0,j=0,count=0,missing=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>=0){count++;}
    }
    int check[count];
    while (b<n)
    {
        if(a[b]>=0){
            check[j]=a[b];
            j++;
        }
        b++;
    }b=0;
    sort(check,check+count);
    for (int i = 0; i < count; i++)
    {
        if(check[i]!=b){
            missing=b;
            cout<<missing;
            break;
        }
        b++;   
    }
    
    
}