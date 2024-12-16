//Write  an  algorithm  to  determine  the  sum  of  individual  digits  of  a  given  integer

#include<stdio.h>
int main(){
    int n, sum;
    printf("Enter the number: \n");
    scanf("%d", &n);
    while(n){
        sum += n%10;
        n /=10;
    }
    printf("The  sum  of  individual  digits  of  a  given  Number: %d",sum);
    return 0;
}