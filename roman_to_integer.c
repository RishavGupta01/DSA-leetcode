#include<stdio.h>
#include<string.h>

int dec(char roman)
{
    switch(roman){
        case'I':
        return 1;
        break;
        case'V':
        return 5;
        break; 
        case'X':
        return 10;
        break; 
        case'L':
        return 50;
        break; 
        case'C':
        return 100;
        break; 
        case'D':
        return 500;
        break; 
        case'M':
        return 1000;
        break;
    }
    return 0;
}
int romanToInt(char* s) {
    int sum = 0;
    for (int i = 0;i<strlen(s);i++){
        if(dec(s[i])<dec(s[i+1])){
            sum = sum-dec(s[i]);
        }
        else{
            sum = sum+dec(s[i]);
        }
    }
    return sum;
}
int main(){
    char s[100];
    printf("Enter the roman number: ");
    scanf("%s",s);
    printf("The integer value of the roman number is: %d",romanToInt(s));
    return 0;
}