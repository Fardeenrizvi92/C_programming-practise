// //selection sort
// #include<stdio.h>
// int main(){
//     int arr[]={89,67,17,90,87,15,35,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }



//check the array elements are already sorted or not

// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int temp=1;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 temp=0;
//                 break;
//             }

//             }
//         }
//         if(temp==0)
//         printf("not sorted");
//         else
//         printf("sorted");
//     }



//find out the sum of array element except smallest and largest
//  #include<stdio.h>
// int main(){
//     int arr[]={89,67,17,90,87,15,35,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     int sum=0;
//     int h=arr[0];
//     int s=arr[n-1];
    
//     for(int i=0;i<n;i++){
//             sum+=arr[i];
        
//     }
//     sum=sum-h-s;
//     printf("%d ",sum);
// }

//check the element are arranged in ascending or descending order
// #include<stdio.h>
// int main(){
//     int arr[]={9,8,7,6,5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     if(arr[0]>arr[n-1])
//     printf("sorted in descending order");
//     else
//     printf("sorted in ascending oreer");
// }

//sort the array elements in odd index

// #include<stdio.h>
// int main(){
//     int arr[]={89,67,17,90,87,15,35,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(i%2!=0){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         else
//         continue;
//     }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// input={23,1,67,22,42,66,61,4,7,9,3}
//output={4,22,42,66,1,3,7,9,23,61,67}
#include<stdio.h>
void sort(int arr,int n){

     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]>arr[j]){
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }
    }
int main(){

}

