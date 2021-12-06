#coding:UTF-8
x = 666
l = []
cont = 0 
while x!=0:
    x = int(input(""))
    for i in range (1,x+1):
        l.append(i)
        l[i-1] = str(l[i-1])
        i=i+1
    l = " ".join(l)
    if x!=0:
        print(l)
        t=[]