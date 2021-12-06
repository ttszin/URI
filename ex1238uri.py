#coding: UTF-8

numtestes = int(input(""))
i=0                                     # Variável de contagem 
while i<numtestes:
    geral = input().split()             #Lista com as palavras
    palavra1 = geral[0]                 #Palavra 1 na primeira posição
    palavra2 = geral[1]                 #Palavra2 na segunda posição
    pformada = ""                       #Espaço para montagem da palavra formada 

    j=0                                 # Variável para nova contagem

    while j<len(palavra1) and j<len(palavra2):         #Contador maior que as duas strings 
        pformada += palavra1[j]+palavra2[j]            #Adiciona as letras
        j+=1

    if j<len(palavra1):                                #Contador menor que apenas a  primeira palavra
        pformada+=palavra1[j:]                         #Adiciona a letra da primeira palavra

    
    elif j<len(palavra2):                              #Contador menor que apenas a  segunda palavra
        pformada+=palavra2[j:]                         #Adiciona a letra da segunda palavra 
    
    print(pformada)
    i+=1

