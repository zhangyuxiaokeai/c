#
# # import string
# #
# # print ("\n=========(1)读取文件")
# # with open(r"D:\Dream It Possible.txt",encoding='utf8') as fp:
# #     text=fp.read()
# # print("\n=========(2)处理缩写（用替换功能）：")
# text=text.replace("'m","am").replace("n't","not").replace("'ll","will").replace("'re","are")
# print("\n=======(3)处理英文标点（用替换功能，替换成空格）：",string.punctuation)
# chars=string.punctuation
# table=''.maketrans(chars,*len(chars))#构建替换映射表
# print('Tel:30647359'.translate(table))
# text=text.translate(table)
# print("\n=======(4)统一体换大小写")
# text=text.lower()
# print("\n=======(5)分割单词，得到单词列表")
# words_list=text.split()
# print(words_list)
# print("\n=======(6)统计词频（用字典作计数器）")
# freq_dict={}
# for word in words_list:
#     freq_dict[word]
# t = input("输入字符串")
# d = x = 0
# for ch in t:
#     if ch.islower():   # 是小写
#         x=1+x
#     elif ch.isupper():   # 是大写
#         d=1+d
# print("大写字母个数：", d, "小写字母个数：", x)
import string
print("姓名：谭乃夫 学号：20190751163")
print("\n=========(1)读取文件")
with open("D:\Dream It Possible.txt",'r+') as fp:
    text=fp.read()
text = text.replace("'m"," am").replace("n't"," not").replace("'ll"," will").replace("'s"," is")
chars = string.punctuation
table = ''.maketrans( chars, " "*len(chars))
text = text.translate(table)
text = text.translate(table)
text = text.lower()
words_list = text.split()

words_set = set(words_list)
sords_set = words_set - {"to", "and", "a", "is", "are"}
freq_dict = {}
for word in words_set:
    freq_dict[word] = words_list.count(word)
freq_order=sorted(freq_dict.items(),key=lambda x:x[1],reverse=True)
c=list(freq_order)
print('前10个字母和次数为：',c[0:10])