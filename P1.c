 #include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n>0){
     int d=n%10;
     rev=rev*10+d;
     n/=10;
    }
    int n1=rev;
    int temp=0;
    for(int i=2;i<n1;i++){
        if(n1%i==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("reverse %d\n",rev);
    printf("prime");
    }
    else
    printf("not prime");
    return 0;
}
