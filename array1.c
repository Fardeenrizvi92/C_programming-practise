// find out the sum of all element of the array
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n],sum=0;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("%d",sum);
// }


// find out the product of even element from the array
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n],p=1;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]%2==0){
//         p*=arr[i];
//         }
//     }
//     printf("%d",p);
// }

// print the list of sum of digits of the element from the array
// #include<stdio.h>
// int sumofdigit(int a){
//     int sum=0;
//     while(a!=0){
//         int d=a%10;
//         sum+=d;
//         a/=10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         int a=sumofdigit(arr[i]);
//       printf("%d = %d\n",arr[i],a);  
//     }
    
// }



// find out the sum of prime elements from the array
// #include<stdio.h>
// int isprime(int a){
//     int temp=1;
//     for(int i=2;i<a;i++){
//         if(a%i==0){
//          temp= 0;
//         break;
//         }
//          }
//          if(temp==1) return 1;
//          else return 0;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int sum=0;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if (isprime(arr[i]) == 1)
//         sum+=arr[i];
      
//     }
//     printf("%d\n",sum); 
// }


// print out the list of names which start with vowels
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Type the number of elements : ");
//     scanf("%d",&n);
//     char arr[n][20];
//     int sum = 0;
//     for(int i = 0;i<n;i++){
//              scanf("%s",&arr[i]);
//         }
//     for(int i = 0;i<n;i++){

//         if(arr[i][0]==('a')||arr[i][0]==('e')||arr[i][0]==('i')||arr[i][0]==('o')||arr[i][0]==('u'))
//             printf("%s\n",arr[i]);
//         }
//     }
    


// print the list of names which is having the even count.
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n;
//     printf("Type the number of elements : ");
//     scanf("%d",&n);
//     char arr[n][20];
//     int sum = 0;
//     for(int i = 0;i<n;i++){
//              scanf("%s",&arr[i]);
//       }
//     for(int i = 0;i<n;i++){
//         if(strlen(arr[i])%2==0){
//             printf("%s\n",arr[i]);
//         }
//     }
// }


// find the product of digits of the prime element of the array

#include<stdio.h>
int isprime(int a){
    int temp=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
         temp= 0;
        break;
        }
         }
         if(temp==1) return 1;
         else return 0;
}
int product(int n){
    int p=1;
    while(n!=0){
        int d=n%10;
        p*=d;
        n/=10;
    }
    return p;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int pro;
        if (isprime(arr[i]) == 1){
           pro=product(arr[i]);
        
        printf("%d = %d\n",arr[i],pro);
        }
    }
}




















