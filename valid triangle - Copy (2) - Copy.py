a,b,c=map(int,input().split())
print("sides are",a,b,c)
s=(a+b+c)/2
print("area is",s)
area=s*(s-a)*(s-b)*(s-c)**0.5

print("area is",area)

if a+b>=c and b+c>=a and a+c>=b:
    if area>0:
        print("YES")
else:
    print("NO")
