#include<stdio.h>
#include<string.h>
int main(){

    char def1[22], def2[22], def3[22];

    scanf("%s %s %s",def1,def2,def3);
   
    if (strcmp(def1,"vertebrado")==0){
        if (strcmp(def2,"ave")==0){
            if(strcmp(def3,"carnivoro")==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            } 
        }

        else if (strcmp(def2,"mamifero")==0){
            if(strcmp(def3,"onivoro")==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            } 
        }
    }
    else if (strcmp(def1,"invertebrado")==0){
        if (strcmp(def2,"inseto")==0){
            if(strcmp(def3,"hematofago")==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            } 
        }
    
        else if (strcmp(def2,"anelideo")==0){
            if(strcmp(def3,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            } 
        }
    
    }







    return 0 ;
}