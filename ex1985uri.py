#coding:UTF-8
p = int(input())
total = 0.0
    
for i in range (p) :
    num = input()
    num = num.split(" ")
    
    if int(num[0])==1001:
        total += int(num[1])*1.50
        print("%.2f"%total)
    elif int(num[0])==1002:
        total += int(num[1])*2.50
        print("%.2f"%total)
    elif int(num[0])==1003:
        total += int(num[1])*3.50
        print("%.2f"%total)
    elif int(num[0])==1004:
        total += int(num[1])*4.50
        print("%.2f"%total) 
    
    elif int(num[0])==1005:
        total += int(num[1])*5.50
        print("%.2f"%total)   
