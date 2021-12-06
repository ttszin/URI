#coding: UTF-8

a,b,c=[int(x) for x in input().split()]
d,f,g=[int(x) for x in input().split()]

tempoc1 = b/c
tempoc2= f/g

if tempoc1<tempoc2:
    print(a)
elif tempoc1>tempoc2:
    print(d)