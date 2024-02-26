#include <stdio.h>
void main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
if (x<0){
    printf("The number is not a palindrome");
}
else{
    long a=x;
    long r=0;
    while(x>0){
        r=r*10 +x%10;
        x = x/10;
    }
    if(a==r){
        printf("The number is a palindrome");
        }
    else{
        printf("The number is not a palindrome");
    }

}
}