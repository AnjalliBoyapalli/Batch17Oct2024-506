#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) 
    {
    if (n<2) 
        return false; 
    for (int i=2; i*i<=n; i++) 
    {
        if (n%i == 0) 
            return false; 
    }
    return true; 
}

void findPrimePairs(int numb) 
{
    int count=0; 
    for (int i=2; i<=numb/2; i++) 
    {
        int j=numb-i; 
        if (isPrime(i) && isPrime(j)) 
        {
            printf("%d=%d+%d\n",numb,i,j);
            count++;
        }
    }
    if (count>0) 
    {
        printf("NoofWays=%d\n",count);
    } 
    else 
    {
        printf("NoofWays=-1\n");
    }
}

int main() {
    int numb;
    printf("Enter positive integer: ");
    scanf("%d", &numb);
    
    if (numb<= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    findPrimePairs(numb);

    return 0;
}