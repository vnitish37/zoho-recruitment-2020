#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Input:");
    scanf("%d",&n);
	
	for (int i=0; i <n; i++)
    {
    for (int j=0; j<n ; j++)
        {
        if (j >= i)
            printf("%1d ", n-i);
        else
            printf("%1d ", n-j);
    }
    printf("\n");
}
	

}
