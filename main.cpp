#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int maxno=INT_MIN;
  int minno=INT_MAX;
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
   cin>>a[i];
 }
 for(int i=0;i<n;i++){
   maxno=max(maxno,a[i]);
   minno=min(minno,a[i]);

 }
 cout<<maxno<<endl;
 cout<<minno<<endl;
}