#include <stdio.h>
#include <string.h>

int main(){
    short h, p;

    scanf("%hd %hd",&h, &p);

    printf("%.2lf\n",(double)h/p);
	 
	return 0;
}