# 1、使用列表推导式，列表中存储100以内能被7整除的正整数，输出列表，即列表中所元素之和。
print("使用列表推导式，列表中存储100以内能被7整除的正整数，输出列表，即列表中所元素之和。")
list_i=[]
q=7
s=7
while q<100:
   if q%7==0:
      list_i.append(q)
   q=q+1
print(list_i)
# 2、利用列表，输出斐波那契数列前20项，并求和。
print("利用列表，输出斐波那契数列前20项，并求和。")
list_b=[1,1]
s=0
total=0
q=str(input("请输入你要求的前好多项的和"))
while(int(s)<int(int(q)-2)):
   list_b.append(list_b[-1]+list_b[-2])
   s=s+1
print(list_b)
for ele in range(0, len(list_b)):
    total = total + list_b[ele]
print("列表元素之和为: ", total)


#3、用列表常用方法，在已知列表['elephant', 'monkey', 'snake', 'tiger']， 从键盘上输入要查找的动物 ，然后在列表中查找对应的元素，如果找到，输出该元素在列表中的索引位置，否则输出未找到。
print("用列表常用方法，在已知列表['elephant', 'monkey', 'snake', 'tiger']， 从键盘上输入要查找的动物 ，然后在列表中查找对应的元素，如果找到，输出该元素")
list_c=["elephant","monkey","snake","tiger"]
q=str(input("请输入你要寻找的动物:"))
if(list_c.count(q)!=0):
   print("该动物在列表中的下标为",list_c.index(q))
else:
   print("该元素未在该列表中")



#5、使用列表常用方法，将列表[6,25,3,15,2,36,8,41,33,13]中的最后2个元素依次移到列表的首部，然后将列表降序排序后输出显示。
print("使用列表常用方法，将列表[6,25,3,15,2,36,8,41,33,13]中的最后2个元素依次移到列表的首部，然后将列表降序排序后输出显示。")
list_find=[6,25,3,15,2,36,8,41,33,13]
# list_find.remove(33)
# list_find.remove(13)
# list_find.insert(0,13)
# list_find.insert(1,33)
list_find[0],list_find[8]=list_find[8],list_find[0]
list_find[1],list_find[9]=list_find[9],list_find[1]
print(list_find)
list_find.sort(reverse=True)
print(list_find)
#6、删除列表[9,26,5,15,4,36,8,41,34,13]中的所有素数。
print("删除列表[9,26,5,15,4,36,8,41,34,13]中的所有素数")
list_sushu=[9,26,5,15,4,36,8,41,34,13]
for n in list_sushu:
     for i in range(2, n):
         if int(n % i) == 0:
             break
     else:
        list_sushu.remove(n)
print(list_sushu)

#7、已知两个3行3列的矩阵（使用列表来存储），实现其对应位置的数据相加，并返回一个新矩阵。
print("已知两个3行3列的矩阵（使用列表来存储），实现其对应位置的数据相加，并返回一个新矩阵。")
x_list=[[12,7,3],
        [4 ,5,6],
        [7 ,8,9]]
y_list=[[5,8,1],
        [6,7,3],
        [4,5,9]]
xy_list=[[0,0,0],
        [0,0,0],
        [0,0,0]]
for i in range(len(x_list)):
    for l in range(len(x_list[i])):
        xy_list[i][l]=x_list[i][l]+y_list[i][l]
print(xy_list)
print("姓名：谭乃夫 学号：20190751163 ")