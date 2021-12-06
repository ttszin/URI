#coding: UTF-8

a,b = input().split(" ")

a = int(a)
b = int(b)

divisao = (a/b)
resto = (a%b)

if (a==b*divisao+resto):
    print("%.0f"%divisao,resto)


