#coding: UTF-8

n = int(input(""))
cont =1
if n <=1000:
    while cont<=n:    
        x = input("")
        if len(x)>3:
            print("3")
        elif len(x)<=3:
            two=0
            if x[0:1]=="t":
                two =two+1
            if x[0:2]=="w":
                two=two+1
            if x[2:3]=="o":
                two=two+1
            if two >=2:
                print("2")
            else:
                print("1")
        cont+=1
            