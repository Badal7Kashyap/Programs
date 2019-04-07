#include<iostream>
using namespace std;
void gap(int,int,int *,int,int);
int main()
{
  int a[100];
  int n,no,i,j,h=1,k;
  cout<<"Enter no. of Elements: "<<endl;
  cin>>n;
  cout<<"Now Enter the elements one by one: "<<endl;
  for(i=0;i<n;i++)
      cin>>a[i];
  
  cout<<"{}  ";
  
  for(i=0;i<n;i++)
  {
    no=a[i];  
    k=i;   
      cout<<"{"<<no<<"}  ";
      gap(n,no,&a[i],h,k);
      h++;
  }

cout<<endl;
return 0;
}

void gap(int e,int no,int *p,int h,int k)
{
  if(h==e)
      return;

  else{
        
        int i=e-h,v=no;
      while(i>0){
            p++;
            k++;
       v=(v*10)+(*p);
       cout<<"{"<<v<<"}  ";
       if(k<(e-1))
          gap(e,v,p,h+1,k);
       else
           return;
       i--;
       v=no;
       }  
      
    }
}       
      
    

