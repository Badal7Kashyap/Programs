#include<iostream>
using namespace std;
int main()
{

  int a[100],i,n;
  cout<<"Enter no. of Elements: "<<endl;
  cin>>n;
  
  cout<<"Now Enter the Elements one by one"<<endl;
  for(i=0;i<n;i++)
      cin>>a[i];


  int p=0,max=a[0],sum=0,h=-1;
  

while(n>0)
{
  for(i=n;i>0;i--)
  {
      h++;
      sum=sum+a[h];
       
      if(sum>max)
          max=sum;
  }
  
 h=p;
 p++;
 sum=0;         
 n--;
} 

cout<<"Maximum sumarray = "<<max<<endl;

return 0;
}

