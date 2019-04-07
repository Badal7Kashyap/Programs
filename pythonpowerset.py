def rev(no):
    rno=0
    while no!=0:
        r=no%10
        no=int(no/10)
        rno=rno*10+r
    print("[",rno,"]")    





def gap(l,no,t,i,n):
    if(t==5):
        return
    else:
        k=i
        for j in range(n-(i+1)):
            v=no
            k=k+1
            v=v*10+l[k]
            
            print("[",v,"]")
            rev(v)
            if(k<(n-1)):
                 gap(l,v,t+1,i+1,n)
            
            else:
                return
            
            v=no


l=[1,2,3,4,5]
n=len(l)
g=n-2
print("[ ]")
for i in range(n):
    no=l[i]
    t=i+1
    print("[",no,"]")
    gap(l,no,t,i,n)

