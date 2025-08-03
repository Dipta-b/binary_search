#include<stdio.h>

int main(){
int i,arr[100],x,n,start = 0,flags=0;
printf("Enter the size of array :");
scanf("%d",&n);
int last=n-1;
printf("Taking array elements :");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Array elements are : ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}

    printf("\nItem You Want To Search? ");
    scanf("%d", &x);

    while(start <= last){
        int middle = (start + last) /2;
        if(arr[middle] == x){
             printf("Item Found At Position : %d", middle + 1);
             flags = 1;
            return 0;
        }
        else if (arr[middle] < x){
            start = middle +1;
            flags = 1;
        }
        else {
            last = middle - 1;
            flags=1;
        }
    }
if(flags == 0){
    printf("The item not found");
}

return 0;
}
