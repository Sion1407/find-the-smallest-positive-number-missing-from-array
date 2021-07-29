//given an array of N integers including 0.
//the task is to find the smallest +ve number missing from array
/*
i/p
0 -9 1 3 -4 5
o/p
2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],temp=0,b=0,j=0,count=0,missing=INT_MAX;
    for (int i = 0; i < n; i++)//taking input from user and taking note of count of positive integers
    {
        cin>>a[i];
        if(a[i]>=0){count++;}
    }
    int check[count];
    while (b<n)//storing all the positive integers in check[]
    {
        if(a[b]>=0){
            check[j]=a[b];
            j++;
        }
        b++;
    }b=0;
    sort(check,check+count);//sorting the check[]
    for (int i = 0; i < count; i++)//finding the smallest missing element in the array
    {
        if(check[i]!=b){
            missing=b;
            cout<<missing;
            break;
        }
        b++;   
    } 
}
