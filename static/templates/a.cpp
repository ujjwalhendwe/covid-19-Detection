#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    sort(a,a+n);
    if(n>4)
    {
      for(int i=n-1;i>2;i=i-4)
      {
          sum+=a[i]+a[i-1];
      }
    }
    else {
        sum=a[n-1]+a[n-1];
    }
    cout<<sum;
    return 0;
}   

