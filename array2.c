
//linear search
// #include<stdio.h>
// int main(){
// int arr[]={34,67,43,22,11,78,54,9};
// int a=43;
// int index=0,flag=0;
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
//     if(arr[i]==a){
//         flag=1;
//         index=i;
//         break;
//     }
// }
// if(flag==0)
// printf("%d",-1);
// else
// printf("%d",index);
// }

//replace the existing elements using linear search
// #include<stdio.h>
// int main(){
    
//     int n1;
//     printf("enter no of elements");
//     scanf("%d",&n1);
//     int arr[n1];
//     for(int i=0;i<n1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int s;
//     scanf("%d",&s);
//     for(int i=0;i<n1;i++){
//         if(arr[i]==s){
//             int new;
//             scanf("%d",&new);
//             arr[i]=new;
//         }
//         else("not found");
//     }
//         for(int i=0;i<n1;i++){
//         printf("%d ",arr[i]);
//     }
//     // int n=sizeof(arr)/sizeof(arr[0]);

// }











// print the list of elements within the specific element

// #include<stdio.h>
// int main(){
    
//     int n1;
//     printf("enter no of elements");
//     scanf("%d",&n1);
//     int arr[n1];
//     for(int i=0;i<n1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int s,e;
//     scanf("%d",&s);
//     scanf("%d",&e);
//     for(int i=0;i<n1;i++){
//         if(arr[i]>=s && arr[i]<=e)
//         printf("%d ",arr[i]);
//     }
// }











// // print the list of element which is not in specific range

// #include<stdio.h>
// int main(){
    
//     int n1;
//     printf("enter no of elements");
//     scanf("%d",&n1);
//     int arr[n1];
//     for(int i=0;i<n1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int s,e;
//     scanf("%d",&s);
//     scanf("%d",&e);
//     for(int i=0;i<n1;i++){
//         if (! (arr[i]>=s && arr[i]<=e))
//         printf("%d ",arr[i]);
//     }
// }
// swap the first and last element of the array
// #include<stdio.h>
// int main(){
    
//     int n1;
//     printf("enter no of elements");
//     scanf("%d",&n1);
//     int arr[n1];
//     for(int i=0;i<n1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int temp=arr[0];
//     arr[0]=arr[n1-1];
//     arr[n1-1]=temp;
//     for(int i=0;i<n1;i++){
//         printf("%d ",arr[i]);
//     }
// }




// find out the sum of first largest and second largest of the array
// #include<stdio.h>
// int main(){
    
//     int n1;
//     printf("enter no of elements");
//     scanf("%d",&n1);
//     int arr[n1];
//     for(int i=0;i<n1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int lar=0;
//     for(int i=0;i<n1;i++){
//         if(arr[i]>lar)
//         lar=arr[i];
//     }
//     printf("%d",lar);
// }   

//binary search
#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0,right=n-1,target=80,ind=0,temp=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            temp=1;
            ind=mid;
            break;
        }
        else if(target>arr[mid]) left=mid+1;
        else right=mid-1;
    }
    if(temp==0)
    printf("%d",-1);
    else
    printf("%d",ind);
}




