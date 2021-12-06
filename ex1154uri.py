#coding: UTF-8
realid = True
cont = 0
total = 0
while realid == True:
    id = int(input(""))
    
    if id>=0:
        cont +=1
        total = total + id
    elif id<0:
        realid = False

mediaid = total/cont
print("%.2f"%mediaid)
