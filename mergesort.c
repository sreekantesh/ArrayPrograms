#include <stdio.h>

void merge(int arr[],int beg,int mid,int end)
{
    int n1=mid-beg+1;
    int n2=end-mid;
    int i,j,k;
    int leftarr[n1],righarr[n2];
    i=0,j=0,k=beg;
    for(int i=0;i<n1;i++)
    {
        leftarr[i]=arr[beg+i];
    }
     for(int j=0;j<n2;j++)
    {
        righarr[j]=arr[mid+1+j];
    }
    
    while(i<n1 && j<n2)
    {
        if(leftarr[i]<=righarr[j])
        {
            arr[k]=leftarr[i];
            i++;
        }
        else
        {
            arr[k]=righarr[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
         arr[k]=leftarr[i];
            i++;
            k++;
    }
    while(j<n2)
    {
         arr[k]=leftarr[j];
            j++;
            k++;
    }
    
}

void mergesort(int arr[],int beg,int end)
{
    if(beg<end)
    {
        int mid=(beg+end)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
    
}

int main()
{
    int arr[]={5,4,3,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,s-1);
    for(int i=0;i<s;i++)
    {
        printf("%d",arr[i]);
    }
    
    
    return 0;
}
