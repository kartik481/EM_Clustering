#include<iostream>
using namespace std;
int main()
{
	int count=0;
    int i1,i2,i3,x1,x2;
	int k0[10];
    int k1[10];
    int k2[10];
    cout<<"K-Means Algo in c++ using numbers"<<endl;
    cout<<"Enter 10 numbers: "<<endl;
    for(i1=0;i1<10;i1++)
    {
        cin>>k0[i1];
    }
    int m1;
    int m2;
 
    cout<<"Enter cluster Centroid 1: "<<endl;
    cin>>m1;
    cout<<"Enter cluster Centroid 2: "<<endl;
    cin>>m2;
     
int Oldm,Oldm1;
do
{
Oldm=m1;
Oldm1=m2;
i1=i2=i3=0;
for(i1=0;i1<10;i1++)
{
x1=k0[i1]-m1;
if(x1<0){x1=-x1;}
x2=k0[i1]-m2;
if(x2<0){x2=-x2;}
if(x1<x2)
{
    k1[i2]=k0[i1];
    i2++;
}
else
{
k2[i3]=k0[i1];
i3++;
}
}
 
x2=0;
for(x1=0;x1<i2;x1++)
    {
        x2=x2+k1[x1];
    }
    m1=x2/i2;
 
x2=0;
    for(x1=0;x1<i3;x1++)
    {
        x2=x2+k2[x1];
    }
    m2=x2/i3;
 
    cout<<"Cluster 1: ";
    for(x1=0;x1<i2;x1++)
    {
        cout<<k1[x1]<<" ";
    }
    cout<<endl<<"m1="<<m1<<endl;
 
    cout<<"Cluster 2: ";
    for(x1=0;x1<i3;x1++)
    {
        cout<<k2[x1]<<" ";
    }
    cout<<endl<<"m2="<<m2<<endl;
    count++;
    cout<<" --------------------"<<endl;
    }while(m1!=Oldm&&m2!=Oldm1);
 
    cout<<count<<"-> Clusters created"<<endl;
 
}
