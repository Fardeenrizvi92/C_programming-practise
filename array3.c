//sum of elements of every row
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];        
        }

    printf("sum of row %d is %d",(i+1),sum);
    printf("\n");
        }
}
//sum of both diagonals
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr[0])/sizeof(arr[0][0]);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            if(i==j)
            sum1+=arr[i][j]; 
            if(i+j==n-1)
            sum2+=arr[i][j];       
        }
    }
    printf("sum of right diagonal is %d",sum1);
    printf("\n");
    printf("sum of left diagonal is %d",sum2);
        
}
