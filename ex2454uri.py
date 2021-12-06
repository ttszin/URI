#coding: UTF-8

a,b = [int(x) for x in input().split()]

if a==1 and b==0:
    print("B")
elif a==1 and b==1:
    print("A")
else:
    print("C")
