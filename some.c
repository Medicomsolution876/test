#include <stdio.h>

int main() {
    struct test
    {
        int N,K,A[100],flag;
    };
    struct test o[100];
    int T,i,j;
    
    scanf("%d\n",&T);
    if(T>100)
    
    {printf("Enter the value of Test cases below 101");
        
    }
    
    for(j=1;i<T;i++)
    {
        scanf("%d\t\t",*&o[j].N);
        if(o[j].N>100)
        {
            printf("Enter the LeNgth of array below 101");
            
        }
        if(o[j].N%2==0)
        {
        o[j].flag=1;
        }
        
        scanf("%d\n",&o[j].K);
        if(o[i].K<0||o[i].K>o[i].N||o[i].K>100)
        {printf("enter the value of K under 101");
        
        }
        for(i=1;i<=o[j].N;i++)
        {
            scanf("%d",o[j].A[i]);
        }
        for(i=1;i<=o[i].N;i++)
        {
            printf("%d",o[j].A[i]);
        }
        
    }
	return 0;
}

