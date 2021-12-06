#coding: UTF-8

n = int(input(""))
soma = 0
for i in range (n):
    a,b=[int(x) for x in input().split()]
    if a>b and b!=a:
        soma +=b

print(soma)
