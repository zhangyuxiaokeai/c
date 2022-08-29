#案例实战
#利用NUMPY中的随机函数，生成成年男性的体重数据（单位斤整形）
# ，并可视化，要求符合正态分布，标准值为140
import numpy as np
import matplotlib.pyplot as plt

#随机生成20万个人的体重，均值为140标准差为30 正态分布
weight=np.random.normal(140,30,size=(2000000)).astype(int)
#用freq统计不同体重的人数
freq=np.zeros((2000000))
for w in weight:
    freq[w]+=1
#可视化
xWeight=np.arange(0,300)#设置x坐标
plt.plot(xWeight,freq[0:300])
plt.savefig('d:\\freqWeigt.jpg') #保存图片
plt.show()