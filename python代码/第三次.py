import math
##请输入第一条边
a=float(input("请输入第一条边："))
b=float(input("请输入第二条边："))
c=float(input("请输入第三条边："))
if a+b>c and b+c>a and a+c>b :
    print("该三条边构成三角形")
    q=(a+b+c)/2
    s=sqrt.math(64)
   ## s=sqrt.math(q(q-a)*(q-b)*(q-c))
    print("该三角形的面积为:",s)
else:
    print("该三条边无法构成三角形")
