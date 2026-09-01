# 基础直方图
import matplotlib.pyplot as plt #以后 plt 等价于 matplotlib.pyplot
from matplotlib import rcParams
rcParams['font.family'] = rcParams['font.sans-serif'] = 'SimHei'#设置中文支持,中文字体为简体黑体
ax = plt.figure().add_subplot() #建图,获取子图对象ax
#纵向
ax.bar(x = (0.2,0.6,0.8,1.2),height = (1,2,3,0.5), width = (0.1,0.2,0.05,0.4))
#横向
ax.barh(y = (0.2,0.6,0.8,1.2),width = (1,2,3,0.5), height=(0.1,0.2,0.05,0.4))
#x表示4个柱子中心横坐标分别是0.2,0.6,0.8,1
#height表示4个柱子高度分别是1,2,3,0.5
#width表示柱子宽度分别是0.1,0.2,0.05,0.4)
ax.set_title ('我的直方图')

# 堆叠直方图
ax = plt.figure().add_subplot()
labels = ['Jan', 'Feb', 'Mar', 'Apr']
num1 = [20, 30, 15, 35]#Dept1的数据
num2 = [15, 30, 40, 20]#Dept2的数据
cordx = range(len(num1))#x轴刻度位置
rects1 = ax.bar(x = cordx, height=num1, width=0.5, color='red',label="Dept1")
rects2 = ax.bar(x = cordx, height=num2, width=0.5, color='green',label="Dept2",bottom=num1)#bottom指定堆叠
ax.set_ylim(0, 100)#y轴坐标范围
ax.set_ylabel("Profit")#y轴含义(标签)
ax.set_xticks(cordx)#设置x轴刻度位置
ax.set_xticklabels(labels) #设置x轴刻度下方文字

# 对比直方图
ax = plt.figure(figsize=(10,5)).add_subplot()
ax.set_ylim(0,400)#指定y轴坐标范围
ax.set_xlim(0,80)#指定x轴坐标范围
#以下是3组直方图的数据
x1 = [7, 17, 27, 37, 47, 57]#第一组直方图每个柱子中心点的横坐标
x2 = [13,23,33,43,53,63] #第二组直方图每个柱子中心点的横坐标
x3 = [10, 20, 30, 40, 50, 60]
y1 = [41,39,13,69,39,14] #第一组直方图每个柱子的高度
y2 = [123,15,20,105,79,37] #第二组直方图每个柱子的高度
y3 = [124, 91, 204, 264, 221, 175]
rects1 = ax.bar(x1, y1, facecolor='red', width=3, label = 'Iphone')
rects2 = ax.bar(x2, y2, facecolor='green', width=3, label = 'Huawei')
rects3 = ax.bar(x3, y3, facecolor='blue', width=3, label = 'xiaomi')
ax.set_xticks (x3)#x轴在x3中的各坐标点下面加刻度
ax.set_xticklabels(('A1','A2','A3','A4','A5','A6'))
#指定x轴上每一刻度下方的文字
#显示右上角三组图的说明
ax.legend()     
#在rects的每个柱子顶端标注数值
def label(ax,rects) :
    for rect in rects:
        height = rect.get_height()
        ax.text(rect.get_x() + rect.get_width()/2.0,height+14,str(height),rotation=90) #文字旋转90度
label(ax,rects1)
label(ax,rects2)
label(ax,rects3)

# 散点图、折线图、曲线图
import math,random
def drawPlot(ax) :
    xs = [i / 100 for i in range(1500)] #1500个点的横坐标,间隔0.01
    ys = [10*math.sin(x) for x in xs]
    #对应曲线y=10*sin(x)上的1500个点的y坐标
    ax.plot(xs,ys,"red",label = "Beijing") #画曲线y=10*sin(x)
    ys = list(range(-18,18))
    random.shuffle(ys)
    ax.scatter(range(16), ys[:16], c = "blue") #画散点
    ax.plot(range(16), ys[:16], "blue", label="Shanghai")#画折线
    ax.legend()#显示右上角的各条折线说明
    ax.set_xticks(range(16))#x轴在坐标0,1...15处加刻度
    ax.set_xticklabels(range(16)) #指定x轴每个刻度下方显示的文字
ax = plt.figure(figsize=(10,4),dpi=100).add_subplot() #图像长宽和清晰度drawPlot(ax)
drawPlot(ax)

# 饼图
def drawPie(ax) :
    lbs = ('A', 'B', 'C', 'D')#四个扇区的标签
    sectors = [16, 29.55, 44.45, 10]#四个扇区的份额 (百分比)
    expl = [0, 0.1, 0, 0]#四个扇区的突出程度
    ax.pie(x=sectors, labels=lbs, explode=expl,autopct='%.2f', shadow=True, labeldistance=1.1,pctdistance = 0.6,startangle = 90)
    ax.set_title("pie sample")
ax = plt.figure().add_subplot()
drawPie (ax)

# 热力图
import numpy as np
data = np.random.randint(0, 100, 30).reshape(5, 6)
#生成一个5行六列,元素[0,100]内的随机矩阵
xlabels = ['Beijing', 'Shanghai', 'Chengdu', 'Guangzhou', 'Hangzhou','Wuhan']
ylabels = ['2016', '2017', '2018', '2019', '2020']
ax = plt.figure(figsize=(10,8)).add_subplot()
ax.set_yticks(range(len(ylabels))) #y轴在坐标[0,len(ylabels)) 处加刻度
ax.set_yticklabels(ylabels)#设置y轴刻度文字
ax.set_xticks(range(len(xlabels)))
ax.set_xticklabels(xlabels)
heatMp = ax.imshow(data, cmap=plt.cm.hot, aspect='auto',vmin = 0,vmax = 100)
for i in range(len(xlabels)):
    for j in range(len(ylabels)):
        ax.text(i,j,data[j][i],ha = "center",va = "center",color = "blue",size=26)
plt.colorbar(heatMp)#绘制右边的颜色-数值对照柱
plt.xticks(rotation=45,ha="right")#将x轴刻度文字进行旋转,且水平方向右对齐
plt.title("Sales Volume(ton)")

# 基础雷达图
def drawRadar(ax):
    pi = 3.1415926
    labels = ['EQ','IQ','人缘','魅力','财富','体力'] #6个属性的名称
    attrNum = len(labels)#attrNum是属性种类数,此处等于6
    data = [7,6,8,9,8,2]#六个属性的值
    angles = [2*pi*i/attrNum for i in range(attrNum)]
    #angles是以弧度为单位的6个属性对应的6条半径线的角度
    angles2 = [x * 180/pi for x in angles]
    #angles2是以角度为单位的6个属性对应的半径线的角度
    ax.set_ylim(0, 10)#限定半径线上的坐标范围
    ax.set_thetagrids(angles2,labels,fontproperties="SimHei" )#绘制6个属性对应的6条半径
    ax.fill(angles,data,facecolor='g',alpha=0.25) #填充,alpha:透明度
ax = plt.figure().add_subplot(projection = "polar") #生成极坐标形式子图
drawRadar(ax)

# 多层雷达图
pi = 3.1415926
labels = ['EQ','IQ','人缘','魅力','财富','体力'] #6个属性的名称
attrNum = len(labels)
names = ('张三','李四','王五')
data = [[0.40,0.32,0.35], [0.85,0.35,0.30],
        [0.40,0.32,0.35], [0.40,0.82,0.75],
        [0.14,0.12,0.35], [0.80,0.92,0.35]] #三个人的数据
angles = [2*pi*i/attrNum  for i in range(attrNum)]
angles2 = [x * 180/pi for x in angles]
ax = plt.figure().add_subplot(projection = "polar")
ax.fill(angles,data,alpha=0.25)
ax.set_thetagrids(angles2,labels)
ax.set_title('三巨头人格分析',y = 1.05) #y指明标题垂直位置
ax.legend(names,loc=(0.95,0.9)) #画出右上角不同人的颜色说明

# 多子图
fig = plt.figure(figsize=(8,8))
ax = fig.add_subplot(2,2,1) #窗口分割成2*2,取位于第1个方格的子图
drawPie(ax)
ax = fig.add_subplot(2,2,2,projection = "polar")
drawRadar(ax)
ax = plt.subplot2grid((2,2),(1, 0), colspan=2)
#或写成： ax = fig.add subplot(2,1,2)
drawPlot(ax)
plt.figtext(0.05,0.05,'subplot sample')#显示左下角的图像标题
plt.show( )