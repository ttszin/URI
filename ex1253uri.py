#coding: UTF-8

alfabeto=["abcdefghijklmnopqrstuvwyxz"]
continuar=True

while continuar==True:

    num=int(input(""))
    letra=input("")
    for alfabeto in range (num):
        print(alfabeto[letra])
        break


