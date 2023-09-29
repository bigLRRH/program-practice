from csv import reader
import numpy as np
from numpy import loadtxt

#导入训练集合
with open('C:\\Users\\13728\\Desktop\\program practice\\python\\AiClub\\EnterTest\\2IrisClassicfication\\train.csv','r') as raw_train_data:
    train_datalist = loadtxt(raw_train_data,delimiter=',')

#导入测试集合
with open('C:\\Users\\13728\\Desktop\\program practice\\python\\AiClub\\EnterTest\\2IrisClassicfication\\test.csv','r') as raw_test_data:
    test_datalist = loadtxt(raw_test_data,delimiter=',')

#knn算法
k = 10

for testdata in test_datalist:
    #计算距离并将[距离，类别]赋值distancelist
    distancelist = []
    for traindata in train_datalist:
        #距离=f(|x1-x2|)+g(|y1-y2|),不知道怎么取直接取几何距离
        distance = (abs(testdata[0]-traindata[0]))**2 + (abs(testdata[1]-traindata[1]))**2
        distancelist.append([distance,traindata[2]])

    #根据距离排序distance(冒泡排序)
    i=1
    while i<len(distancelist)-1:
        j=0
        while j<len(distancelist)-1:
            if distancelist[j][0]<distancelist[j+1][0]:
                distancelist[j][0],distancelist[j+1][0] = distancelist[j+1][0],distancelist[j][0]
            j+=1
        i+=1

    #计算k范围内数据的类别数
    x=1
    label1,label2,label3=0,0,0
    while x<=k:
        if distancelist[x][1] == 0.:
            label1 +=1
        elif distancelist[x][1] == 1.:
            label2 +=1
        elif distancelist[x][1] == 2.:
            label3 +=1

    #判断当前testdata的类别
    if label1>label2:
        if label1>label3:
            print(0)
        else:
            print(2)
    else:
        if label2>label3:
            print(1)
        else:
            print(2)
    
    print('/n')