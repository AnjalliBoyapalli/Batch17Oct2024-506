#include <stdio.h>
#include <math.h>

char digits[] = {'1', '4', '6', '9'};

void find_nth_number(int n) 
{
    char res[20];
    int index = 0;
    
    while(n>0) 
    {
        res[index++]=digits[(n-1)%4];
        n=(n-1)/4;
    }

    printf("Number of digits: %d\n",index);

    printf("Nth number: ");
    for (int i = index - 1; i >= 0; i--) 
    {
        printf("%c", res[i]);
    }
    printf("\n");
}

int main() {
    int T, n;
    printf("Enter number of test cases: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++) 
    {
        printf("Enter N for test case %d: ", i + 1);
        scanf("%d", &n);
        find_nth_number(n);
    }

    return 0;
}
