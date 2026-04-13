// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p=&a;
//     printf("%d  ",a);
//     printf("%d  ",*p);
//     printf("%d  ",&a);
//     printf("%d  ",p);
//     printf("%d  ",++(*p));
// }
//solve all questions using pointer concept


//check the no is prime no. or not
// #include<stdio.h>
// int isprime(int a){
//     int *p=&a;
//     for(int i=2;i<*p;i++){
//         if((*p)%i==0)
//         return 0;
//     }
//     return 1;
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(isprime(a))
//     printf("%d is prime",a);
//     else 
//     printf("%d is not prime",a);
// }


//find out the sum of 1-10 no
// #include<stdio.h>
// int main(){
//     int a=1;
//     int *p=&a;
//     int s=0;
//     for(int i=*p;i<=10;i++){
//         s+=i;
//     }
//     printf("%d ",s);
// }


//find out the sum of digits using pointers
// #include<stdio.h>
// int main(){
//     int a=345;
//     int *p=&a;
//     int s=0;
//     while((*p)>0){
//         int d=(*p)%10;
//         s+=d;
//         *p=(*p)/10;
//     }
//     printf("sum of digit: %d",s);
// }


//print the list of even digits of a no.
// #include<stdio.h>
// int main(){
//     int a=326413;
//     int *p=&a;
//     while((*p)>0){
//         int d=(*p)%10;
//         if(d%2==0)
//         printf("%d ",d);
//         *p=(*p)/10;
//     }
// }


//swap 2 no. using pointers in the function
// #include<stdio.h>
// void swap(int x,int y){
//     int *a=&x;
//     int *b=&y;
//     int t=*a;
//     *a=*b;
//     *b=t;
//     printf("after swap %d %d",x,y);

// }
// int main(){
//     int a=45;
//     int b=98;
//     printf("before swap %d %d\n",a,b);
//     swap(a,b);
// }
