//Write an algorithm to determine maximum of three numbers. Also draw the corresponding flow chart.

#include<stdio.h>

int main(){
    int a, b, c, max;
    printf("Enter the 3 numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        max = a;
    }
    else if(b>=a && b>=c){
        max = b;
    }
    else{
        max = c;
    }
    printf("The max of the 3 numbers are: %d",max);
    

    return 0;
}
