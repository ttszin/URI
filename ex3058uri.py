#coding: UTF-8

n= int(input(""))
listapreco=[]
if n>=1 and n<=100:
    for i in range (n):
        p,g=input().split(" ")
        p=float(p)
        g=int(g)
        if p>0 and p<=1000.00 and g>=1 and g<=1000:
            preco=p*1000/g
            listapreco.append(preco)
            menor = min(listapreco)
        
print("%.2f"%menor)
            
            






