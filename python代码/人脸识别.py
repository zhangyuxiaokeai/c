import random

import numpy as np
x=np.arange(10)
y=np.arange(2,12)
print(x)
print(y+x)

x=np.random.randint(1,10,10)
print("x:\n",x)
print("==========>大于5的元素乘以二。其余元素除以二：\n",np.where(x>5,2*x,x/2))
print("\n===>(x>=8)则x*2,（x<=4)则^2,其余为0）")
print(np.piecewise(x,[x>=8,x<=4],[lambda x:2*x,lambda x:x**2]))
print("\n=======>（x>=8）则x*2,(4<x<8)原样输出，（x<=4）则^2:")
print(np.piecewise(x,[x>=8,(4<x)&(x<8),x<=4],[lambda x:2*x,lambda x:x,lambda x:x**2]))
print("\n")
d=np.random.randint(0,1000,100)
print(d)