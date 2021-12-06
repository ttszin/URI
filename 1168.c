#include<stdio.h>
#include<string.h>

int numleds(char x[1000]);
int main(){

    int n,i,nled;
    char num[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        
        scanf("%s",num);
        nled = numleds(num);
        printf("%d leds\n",nled);

    }

    return 0;
}

int numleds(char x[1000]){
    int j,leds;
    leds = 0;
    for (j=0;j<strlen(x);j++){
        if (x[j]=='1'){
            leds+=2;
        }
        else if (x[j]=='2'){
            leds+=5;
        }
        else if (x[j]=='3'){
            leds+=5;
        }
        else if (x[j]=='4'){
            leds+=4;
        }
        else if (x[j]=='5'){
            leds+=5;
        }
        else if (x[j]=='6'){
            leds+=6;
        }
        else if (x[j]=='7'){
            leds+=3;
        }
        else if (x[j]=='8'){
            leds+=7;
        }
        else if (x[j]=='9'){
            leds+=6;
        }
        else if (x[j]=='0'){
            leds+=6;
        }
        
    }

    return leds;
}