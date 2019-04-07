#include<stdio.h>
int main()
{
 int n,i,h=0,j=0,a=0,p=1,k,y,v;
 char *month[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
char *weekday[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
printf("Enter The Year\n");
scanf("%d",&y);
printf("  CALENDER YEAR %d",y);

if(((y%4==0)&&(y%100!=0))||(y%400==0))
{
  day[1]=29;
}

for(v=1;v<=y;v++)
{
 if(((v%4==0)&&(v%100!=0))||(v%400==0))
{
  day[1]=29;
}
 else
 day[1]=28;
for(n=0;n<12;n++)
{
  if(v==y)
  {printf("\n");
  printf("$$$$$$$$$$ %s $$$$$$$$$$\n",month[n]);}
 for(i=0;i<7;i++)
 {if(v==y)
  {
  printf("%s",weekday[i]);
  printf(" ");}
 }
  if(v==y)
 { printf("\n");}
  while(j>0)
  {if(v==y)
    {printf("    ");}
  j--;
 }
  
 for(i=1;i<=day[n];i++)
  {
    if((a>0)&&(i==7-k)&&(p>0))
    {if(v==y)
     {printf("%d",i);}
     i++;
    if(v==y)
     {printf("\n");}
     h=0;
     j=0;
     p=0;
    }if(v==y)
    {printf("%d",i);}
    if(i<10)
    { if(v==y)
     {printf("   ");}
    }
    else if(v==y)
    {printf("  ");}
    h++;
  if(h==7)
   {if(v==y)
    {printf("\n");}
    h=0;
   }
   j++;
  if(j==7)
    {
    j=0;  
    }
  }
  h=0;
  a++;
  p++;
  k=j;
}
}
  return 0;
}
    
