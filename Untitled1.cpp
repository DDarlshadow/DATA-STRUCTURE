#include<iostream>
using namespace std;
int main()

{
int n;
cout<<"enter no of element";
cin>>n;
int arr[n];
cout<<"enter numbers to sort";
for(int i=0;i<=n;i++){
cin>>arr[i];}
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++)	{

if(arr[j]>arr[j+1])
{
int a=arr[j];
arr[j]=arr[j+1];
arr[j+1]=a;
}}}
for(int i=0;i<=n;i++)
cout<<arr[i]<<" ";
return 0;
}

