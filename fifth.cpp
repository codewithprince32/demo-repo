#include<iostream>
using namespace std;
int main()
{
// int n, i;
// cout<<"enter your number :";
// cin>>n;
// if(n<2)
// {
//     cout<<"not a prime number";
//     return 0;
// }

// for(i = 2; i < n; i++)
// {
//     if(n%i==0)
//     {
//         cout<<"not a prime number";
//         return 0;   
//     }
// }

// cout<<"prime number";
// return 0;

// int i,n;
// cout<<"enter a number :";
// cin>>n;

//    cout<<(n*(n+1))/2;
// return 0;

// int i,n,sum=0;
// cout<<"enter a number :";   
// cin>>n; 
// for(i=1;i<=n;i++)
// {
//     sum=sum+i;
// }
// cout<<sum;
// return 0;

// long int fact,i,n;
// cout<<"enter your number :";
// cin>>n;
// fact=1;
// for(i=1;i<=n;i++)
// {
//     fact=fact*i;
// }
// cout<<fact;
// return 0;

int prev,last,curr,n,i;
cout<<"enter a number :";
cin>>n;
prev=0;
last=1;
cout<<prev<<" "<<last<<" ";
for(i=2;i<n;i++)
{
    curr=prev+last;
    cout<<curr<<" ";
    prev=last;
    last=curr;
}
return 0;




















}