#include<iostream>
int r(int);
int length(int);
using namespace std;
int main()
{
int a[100],b[7];
int t,i,k=0,m,rno,j,mid,l;
int *o,*p;
cout<<"Enter no. of Test cases: "<<endl;
cin>>t;
cout<<"Now Enter the Nos.: "<<endl;
for(i=0;i<t;i++)
    cin>>a[i];
j=t;
while(t>0)
{  
   i=(j-t); 
  rno=r(a[i]);
 l=length(a[i]);

  if(rno!=a[i])
  { 
     if(l%2==0)
     {  
      mid=((l/2)-1);
       
     while(rno!=0)
     {
       m=rno%10;
       rno=rno/10;
       b[k]=m;
       k++;
     }
     o=b;
     p=&b[l-1];
     for(k=0;k<(l/2);k++)
     {
       (*p)=(*o);
       p--;
       o++;
     }
     m=0;
     for(k=0;k<l;k++)
       m=m*10+b[k];  
     
     if(m<a[i])
       {
         int v=b[mid];
         b[mid]=v+1;
         b[mid+1]=v+1;
         m=0;
         for(k=0;k<l;k++)
            m=m*10+b[k];
       }   
     a[i]=m;
     k=0;
    
    }
     

    else
    {
        mid=(l/2);
        
       while(rno!=0)
       {
         m=rno%10;
         rno=rno/10;
         b[k]=m;
         k++;
       } 
       o=b;
       p=&b[l-1];
       for(k=0;k<(l/2);k++)
       {
         (*p)=(*o);
         p--;
         o++;
       }
       m=0;
       for(k=0;k<l;k++)
         m=m*10+b[k];  
  
       if(m<a[i])
         {
           int v=b[mid];
           b[mid]=(v+1);
           m=0;
       for(k=0;k<l;k++)
           m=m*10+b[k];
         }
       a[i]=m;
       k=0;

    }  

  }
  t--;
} 
 
cout<<"Output: "<<endl;
for(k=0;k<j;k++)
    cout<<a[k]<<endl;
return 0;
}

int r(int n)
{
  int rno=0,r;
  while(n!=0)
  {
     r=n%10;
     n=n/10;
     rno=rno*10+r;
  }
  return(rno);
}

int length(int n)
{
   int l=0;
   while(n!=0)
   {
      n=n/10;
      l++;
   }
   return(l);
}



