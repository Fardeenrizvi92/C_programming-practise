//insert the element in the sorted array
// #include<stdio.h>
// int main(){
//     int arr[50]={10,20,30,40,50,60,70,80,90};
//     int n;
//     int size=9;
//     int index;
//     scanf("%d",&n);
//     for(int i=0;i<size;i++){
//         if(n<arr[i]){
//             index=i;
//             break;
//         }
//     }
//     for(int i=size-1;i>=index;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[index]=n;
//     size++;
//     for(int i=0;i<size;i++)
//     printf("%d ",arr[i]);
// }
//check the element is already inserted or not

#include<stdio.h>
int main(){
    int arr[50]={10,20,30,40,50,60,70,80,90};
    int n;
    int size=9;
    int index;
    scanf("%d",&n);
    for(int i=0;i<size;i++){
        if(n==arr[i]){
            printf("Element present");
            return 0;
        }
    }
    // for(int i=size-1;i>=index;i--){
    //     arr[i+1]=arr[i];
    // }
    // arr[index]=n;
    // size++;
    // for(int i=0;i<size;i++)
    // printf("%d ",arr[i]);
}
//delete th names from the character array
//insert  the new name at the specific position

#include<stdio.h>
int main(){
    char arr[][50]={}
}