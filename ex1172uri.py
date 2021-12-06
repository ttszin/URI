#coding: UTF-8

x = []
cont = 0
while cont<10:
    n=int(input(""))
    x.append(n)
    if n<=0:
        print("X[%.0f] ="%cont,1)
    else:
        print("X[%.0f] ="%cont,x[cont])
    cont+=1
