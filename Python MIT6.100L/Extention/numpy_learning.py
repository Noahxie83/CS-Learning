import numpy as np
# print(np.array([1,2,3]))
# print(np.arange(1,9,2))
# print(np.linspace(1,10,4))
# print(np.random.randint(10,20,[2,3]))# 和random库不同Numpy中的randint是左闭右开的
# print(np.random.randint(10,20,5))
# a=np.zeros(3)
# print(a)
# print(list(a))
# a=np.zeros((2,3),dtype=int)
""" 
常用属性和函数: 
    dtype   数组元素的类型
    ndim    数组是几维的
    shape   数组每一维的长度
    size    数组元素个数
argwhere()  查找元素
    tolist()转换为list
    min()   求最小元素
    max()   求最大元素
reshape()   改变数组的形状
flatten()   转换成一维数组
"""
# b = np.array([i for i in range(12)])
# a = b.reshape((3,4))
# print(len(a))
# print(a.size)
# print(a.ndim)
# print(a.shape)
# print(a.dtype)
# L=a.tolist()
# print(L)
# b=a.flatten()
# print(b)

# a = np.array((1,2,3,4))
# b = np.delete(a,1)
# print(b)
# b=np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]])
# print(np.delete(b,1,axis=0))
# print(np.delete(b,1,axis=1))
# print(np.delete(b,[1,2],axis=0))
# print(np.delete(b,[1,3],axis=1))

# a = np.array((1,2,3,5,3,4))
# pos = np.argwhere(a==3)
# print(pos)
# a = np.array([[1,2,3],[4,5,2]])
# print(2 in a)
# pos = np.argwhere(a==2)
# print(pos)
# b = a[a>2]
# print(b)
# a[a>2]=-1

# a = np.array((1,2,3,4))
# b = a + 1
# print(b)
# print(a*b)
# print(a+b)
# c = np.sqrt(a*10)
# print(c) 

a = np.arange(8)
b = a[3:6]
print(b)
c = np.copy(a[3:6])
b[0] = 100 #注意修改b会修改a
print(a)
print(c)
a = np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])
b = a[1:3,1:4]
