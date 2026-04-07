#include<stdio.h>
int main(){
    int arr[50]={10,20,30,40,50,60,70,80};
    int size=8;
    int element=50;
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element)
        index=i;
    }
    for(int i=index+1;i<size;i++)
    arr[i-1]=arr[i];

    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}