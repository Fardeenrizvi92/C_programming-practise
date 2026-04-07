//bubble sort
#include<stdio.h>
int main(){
    int a[]={2,10,1,67,34,8,23,77,100,56};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}