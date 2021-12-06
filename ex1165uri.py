#coding: UTF-8

m=int(input(""))
for i in range (0,m):
    n=int(input(""))
    primo=True
    for i in range (2,n):
        if n%i==0:
            primo = False
            break
    if primo == True:
        print(n,"eh primo")
    else:
        print(n,"nao eh primo")
