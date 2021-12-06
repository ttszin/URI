#coding: UTF-8

senha = True
while senha == True:
    x =  int(input(""))
    if x==2002:
        print("Acesso Permitido")
        senha = False
    else:
        print("Senha Invalida")