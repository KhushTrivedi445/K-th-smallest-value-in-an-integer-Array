#include<stdio.h>
int main () {
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    

    
    int a[n];
    printf("Enter the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }

    printf("The array is ");
       for(int i=0;i<n;i++){
           printf("%d ",a[i]);
        }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
              int c=a[i];
              a[i]=a[j];
              a[j]=c;
            }

        }
    }

    
    
    int k;
    printf("\nEnter the smallest number you want in array :");
    scanf("%d",&k);
    if(k==1){
    printf(" smallest number is %d",a[k-1]);
    }else if(k==2){
        printf("%dnd smallest number is %d",k,a[k-1]);
    }else if(k==3){
        printf("%drd smallest number is %d",k,a[k-1]);
    }else{
        printf(" %dth smallest number is %d",k,a[k-1]);
    }


  return 0;
}