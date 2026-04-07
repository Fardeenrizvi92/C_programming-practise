//inserting in the end
// #include<stdio.h>
// int main(){
//     int arr[50]={10,2,6,90,87,15,67};
//     int size=7;
//     int element =100;
//     arr[size]=element;
    
//     for(int i=0;i<size+1;i++)
//     printf("%d ",arr[i]);
// }

//insertion in starting
// #include<stdio.h>
// int main(){
//     int arr[50]={10,2,6,90,87,15,67};
//     int size=7;
//     int element =200;
//     for(int i=size-1;i>=0;i--)
//     arr[i+1]=arr[i];
//     arr[0]=element;
//     size++;
//     for(int i=0;i<size;i++)
//     printf("%d ",arr[i]);
// }


//insertion in specified position
// #include<stdio.h>
// int main(){
//     int arr[50]={10,2,6,90,87,15,67};
//     int size=7;
//     int element =300;
//     int pos=4;
//     for(int i=size-1;i>=pos;i--)
//     arr[i+1]=arr[i];
//     arr[pos]=element;
    
//     for(int i=0;i<size+1;i++)
//     printf("%d ",arr[i]);
// }