import math
##1.输入三角形的三条边，求面积
a=float(input("请输入第一条边："))
b=float(input("请输入第二条边："))
c=float(input("请输入第三条边："))
if a+b>c and a+c>b and b+c>a and a>0 and b>0 and c>0:
    p=(a+b+c)/2
    s=math.sqrt(p*(p-a)*(p-b)*(p-c))
    print("该三角形的面积为：",s)
else :
    print("该数据不能构成三角形")
##2.输入两个数分别放入a，b变量中，交换a，b变量中的值，再输入a，b变量
one=int(input("请输入第一个数字"))
two=int(input("请输入第二个数字"))
print("one=:",one,"two=",two)
one ,two= two ,one
print("交换后")
print("one=:",one,"two=",two)
##3.鸡兔同笼。输入总头数h，总脚数f，得出鸡兔各有多少只？
def app(a, b):
    x = (4 * a - b) / 2
    if a != 0 and (4 * a - b) % (x * 2) == 0:
        y = a - x
        if x < 0 or y < 0:
            print("{}只动物{}条腿的情况无解".format(a, b))
        else:
            print("鸡有{}只，兔有{}只".format(int(x), int(y)))
    else:
        print("{}只动物{}条腿的情况无解".format(a, b))
a = input("请输入鸡和兔的总数\n")
b = input("请输入鸡和兔的脚数\n")

a = int(a)
b = int(b)
app(a, b)

##4.输入三个数，求其最大值
a=float(input("请输入第一个数字："))
b=float(input("请输入第二个数字："))
c=float(input("请输入第三个数字："))
q=max(a,b,c)
print("最大值是：",q)

##5.编写程序，输入秒数，将值转化为小时和分钟表示，
##并输出。（不足一分钟的秒数按一分钟算）。

second = int( input("请输入秒数 second = ") )
hour = second // 3600
minute = second % 3600 // 60
miao = second % 3600 % 60
if miao==0 :
    print(second,"等于",hour,"小时",minute,"分")
else :
    print(second,"等于",hour,"小时",minute+1,"分")
