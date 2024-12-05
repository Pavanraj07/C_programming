#include <stdio.h>
void readArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void printArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
void bubblesort(int a[],int n)
{
    int i,j,status;
    for(i=0;i<n-1;i++){
        status=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                status=1;
            }
        }
        if(status==0)
            break;
    }
    
}
int main()
{
    int a[100],n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the element:");
    readArray(a, n);
    
    printf("the elements are:");
    printArray(a, n);
    
    bubblesort(a, n);
    printf("\nsorted array is:");
    printArray(a, n);
    
    return 0;
}