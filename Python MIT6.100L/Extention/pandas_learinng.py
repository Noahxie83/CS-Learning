# Series是一维表格,每个元素带标签且有下标,兼具列表和字典的访问形式
import pandas as pd
s = pd.Series(data=[80,90,100],index=['语文','数学','英语'])
for x in s:
    print(x,end=" ")
print("")
print(s['语文'],s.iloc[1])
print(s[0:2]['数学'])
print(s['数学':'英语'][0:])
for i in range(len(s.index)):
    print(s.index[i],end=' ')
s['体育'] = 110
s.pop('数学')
s2 = pd.concat([s, pd.Series([120], index=['政治'])])
print(s2['语文'],s2['政治'])
print(list(s2))

# DataFrame是带行列标签的二维表格,的每一列都是一个Series
pd.set_option('display.unicode.east_asian_width',True)#输出对齐方面的设置
scores = [['男',108,115,97],['女',115,87,105],['女',100,60,130],['男',112,80,50]]
names = ['刘一哥','王二姐','张三妹','李四弟']
courses = ['性别','语文','数学','英语']
df = pd.DataFrame(data=scores,index = names,columns = courses)
print(df)
print(df.values[0][1],type(df.values))
print(list(df.index))
print(list(df.columns))
print(df.index[2],df.columns[2])
s1 = df['语文']
print(s1['刘一哥'],s1.iloc[0])
print(df['语文']['刘一哥'],s1.iloc[0])
s2 = df.loc['王二姐']
print(s2['性别'],s2['语文'],s2.iloc[2])

#DataFrame的切片:
# iloc[行选择器,列选择器] 用下标做切片
#  loc[行选择器,列选择器] 用标签做切片
# pandas 3.0 使用 Copy-on-Write
# 对 DataFrame 进行切片后,不要依赖“视图”行为去修改原 DataFrame
# 如果要修改原 DataFrame,使用 loc / iloc 直接修改
df2 = df.iloc[1:3]
df2 = df.loc['王二姐':'张三妹']
print(df2)
df2 = df.iloc[:2,[1,3]]#行列切片
df2 = df.loc[:'王二姐',['语文','英语']] #和上一行等价
print(df2)
df2 = df.iloc[[1,3],2:4]#取第1、3行,第2、3列
df2 = df.loc[['王二姐','李四弟'],'数学':'英语'] #和上一行等价
print(df2)
print("---下面是DataFrame的分析和统计---")
print(df.T)#df.T是df的转置矩阵,即行列互换的矩阵
print(df.sort_values(by='语文',ascending=False)) #按语文成绩降序排列
print(df['语文'].sum(),df['数学'].mean(),df['英语'].median())
#>>435 85.5 101.0 语文分数之和、数学平均分、英语中位数
print(df['语文'].min(),df['数学'].max())
#>>100 115语文最低分,数学最高分
print(df[['语文','数学','英语']].max(axis=1).loc['王二姐'])#>>115 王二姐的最高分科目的分数
print(df['语文'].idxmax()) #>>王二姐  语文最高分所在行的标签    
print(df['数学'].argmin()) #>>2       数学最低分所在行的行号
print(df.loc[(df['语文']>100)&(df['数学']>=85)])
print("---下面是DataFrame的增删和修改---")
df.loc['王二姐','英语'] = df.iloc[0,1] = 150 #修改王二姐英语和刘一哥语文成绩
df['物理'] = [80,70,90,100]#为所有人添加物理成绩这一列
df.insert(1,"体育",[89,77,76,45])#为所有人插入体育成绩到第1列
df.loc['李四弟'] = ['男',100,100,100,100,100] #修改李四弟全部信息
df.loc[:,'语文'] = [20,20,20,20]#修改所有人语文成绩
df.loc['钱五叔'] = ['男',100,100,100,100,100]#加一行
df.loc[:,'英语'] += 10#>>所有人英语加10分
df.columns = ['性别','体育','语文','数学','English','物理'] #改列标签
print(df)