#include<bits/stdc++.h>

using namespace std;
void maxmin(int arr[],int i,int n)
{
   int max1,min1,mid,maxa,mina;

   if(i==n)
   {
       maxa=arr[i]; mina=arr[i];
   }
   else if(i==n-1)
   {
     cout<<arr[i]<<"\t";
     cout<<arr[n]<<endl;  if(arr[i]>arr[n]) {maxa=arr[i]; mina=arr[n];}
       else{ mina=arr[i]; maxa=arr[n];}
       //cout<< maxa<<"\t"<<mina<<endl;


   }
   else {
    mid=(i+n)/2;
    cout<<"n="<<mid<<endl;;
    maxmin(arr,i,mid);



   }


}
int main()
{
    int arr[]={3,45,56,67,89,45,675,67,89,234,5667,876554,45678};



maxmin(arr,0,12);



    return 0;
}
