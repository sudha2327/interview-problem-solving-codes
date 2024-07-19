s=int(input().strip())
p=input()
sl=v=0
for i in  p:
    if i=='U':
        sl+=1
    else:
        sl-=1
    if i=='U' and sl==0:
        v+=1
print(v)
        
        
        
