import random
# # 统计数字出现的次
# # 1)生成一个列表，列表内有随机生成100个整数；
# # 2)数字范围[20, 100]；
# # 3)输出所有不同的数字及其每个数字重复的次数
#
# number = []
# for i in range(0, 100):
#     num = random.randint(20,100)
#     number.append(num)
# print(number)
# he = {}
# for num in number:
#     if num in he.keys():
#         he[num] += 1
#     else:
#         he[num] = 1
# print(he)
# print("谭乃夫 学号20190751163")
# # 2. 使用集合运算完成以下任务
# list_jingli=["曹操","刘备","周瑜",]
# list_jishuyuan=["曹操","张飞","周瑜","赵云",]
# a_set=set(list_jingli)
# b_set=set(list_jishuyuan)
# print(a_set,b_set)
# for i in list_jingli:
#     for q in list_jishuyuan:
#         if (i==q):
#             print(i)
# print("是经理不是技术员",a_set-b_set)
# print("是技术员但不是经理",b_set-a_set)
# isflag=1;
# for i in list_jingli:
#     if(i=='张飞'):
#         isflag=1;
#     else:
#         isflag=0;
# if not isflag:
#     print("张飞不是经理")
# else:
#     print("张飞是经理")
# print("身兼一职",b_set-a_set)
# print("一共有多少人",a_set|b_set)
# #  字典与函数  张余  20190751172
# def  findIDs(x,m,heqilai):
#     q=list(heqilai)
#     for i in q:
#         if(x==i):
#                 if(heqilai[x]<m):
#                     return 0
#                 else:
#                     heqilai[x]=heqilai[x]-m
#                     return 1
#         else:
#             print("找不到该id")
#             return 5
# product=["010105","010106","010107","010108","010109","010110","010111"]
# num=[12,13,11,9,6,17,8]
# heqilai =dict(zip(product,num))
# print(heqilai)
# x=str(input("请输入你要的ID"))
# m=int(input("请输入你要的减少的数量"))
# over1=findIDs(x,m,heqilai)
# print(over1)
# print(heqilai)
#
#
print("张余  20190751172")
#1. 编写一个注册验证程序，设定如下条件：
isflag=True
while(isflag):
    name=str(input("用户名必须以下划线“-”开头，长度必须在3~30个字符之间。"))
    passward=str(input("密码必须以下划线、数字或字母共同组成，不允许有其他符号，长度必须在8~16个字符之间。"))
    name_list=list(name)
    #print(name_list)
    passward_list=list(passward)
    #print(passward_list)
    if(len(name_list)>=3 and len(name_list)<=30):
        if(name_list[0]=='_'):
            isflag=True
        else:
            print("必须有下划线")
            continue
    else:
        print("账号长度不过关")
    if (len(passward_list) > 7 and len(passward_list) <=16):
        i=0
        s=0
        while(i<len(passward_list)):
            if(passward_list[i]=='_'):
                s=1
            else:
                s=0
            i=i+1
        if(s==1):
            ww=passward.replace('_','S')
            q=ww.isalnum()
            m=ww.isalpha()
            b=ww.isdigit()
            #print(m,q)
            if(m=='True' and b=='True'):
                isflag=1
                print("必须有数字或者字母")
            else:
                isflag=False
                #print(q)
    else:
        print("密码长度不过关")


