//Factorial//
#include<stdio.h>
#include<conio.h>
int factorial (int n){
if(n==1 || n==0){
    return 1;
}
return (n*factorial(n-1));
}
void main(){
int x,res;
printf("Enter A Number");
scanf("%d",&x);
res=factorial(x);
printf("The factorial of %d is %d",x,res);
}

//Fibonacci//
#include<stdio.h>
int fib(int n){
if (n==1){
    return 0;
}
if (n==2){
    return 1;
}
return (fib(n-1)+fib(n-2));
}
void main(){
 int x,res;
 printf("Enter number of terms");
 scanf("%d",&x);
 res=fib(x);
 printf("The %dth term is %d",x,res);
}

//Tower OF Hanoi//
#include<stdio.h>
void toh(int n, char s, char t, char d);
void main(){
    int num;
    char st='S', de='D', temp='T';
    printf("Enter the number of discs \t");
    scanf("%d", &num);
    toh(num, st, temp, de);
}
void toh(int n, char s, char t, char d){
    if (n==1){
        printf("Move %d disc from %c to %c \n", n, s, d);
    }
    else{
        toh(n-1, s, d, t);
        printf("Move %d disc from %c to %c \n", n,s, d);
        toh(n-1, t, s, d);
    }
}
