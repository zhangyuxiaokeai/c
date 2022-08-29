import math
#第一题输出自己的姓名
from abc import print

print("这是张余的第二个程序")
#第二题摄氏度与华氏度的转换方法
a=90
b=5*(a-32)/9
print("当前的温度为",b)
#d第三题，编写程序，实现输入用户姓名，年龄和地址，然后输出
d=input("请输入你的姓名：")
e=int(input("请输入你的年龄："))
f=input("请输入你的地址：")
print("你的名字是",d,"你的年龄为",e,"你居住在",f)
#编写一个程序，要求输入两个整数，求出两数之和
h=int(input("请输入第一个数:"))
i=int(input("请输入第二个数:"))
j=h+i
print("两数之和为",j)
#编写程序，实现键盘输入商品的单价和数量，求出商品的总价
k=int(input("请输入商品的价格"))
l=int(input("请输入商品的数量"))
print("商品的总价值为",k*l)
#编写程序，实现输入语文，数学，外语三门课的成绩，显示总分和平均分
yuWen=float(input("请输入语文成绩"))
shuXue=float(input("请输入数学成绩"))
waiYu=float(input("请输入英语成绩"))
print("总分=",yuWen+shuXue+waiYu,"平均分=",(yuWen+shuXue+waiYu)/3)
#编写程序，要求输入三角形边长，计算三角型面积
on
p=(onee=float(input("请输入第一条边的边长"))
two=float(input("请输入第二条边的边长"))
three=float(input("请输入第三条边的边长"))+two+three)/2
s=math.sqrt(p*(p-one)*(p-two)*(p-three))
print("三角形的面积为：",s)
