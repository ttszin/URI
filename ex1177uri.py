#coding:UTF-8
x=int(input(""))
cont = 0

for j in range (1000):
    print("N[%d] = %d" %(j,cont))
    cont+=1
    if(cont == x):
        cont = 0
                
            

