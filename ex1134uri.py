#coding: UTF-8

a = 0
g = 0
d = 0
fim = False

while fim!= True:
    x = int(input(""))
    
    if x!=4 and x==1:
        a+=1
    if x!=4 and x==2:
        g+=1
    if x!=4 and x==3:
        d+=1
    elif x==4:
        fim = True
print("MUITO OBRIGADO")
print("Alcool:",a)
print("Gasolina:",g)
print("Diesel:",d)


