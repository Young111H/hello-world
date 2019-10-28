#include <stdio.h>
 
int main()
{
    int i[5] = {0};
    int j, k;
     
    for(j=0; j<5; j++)
    {
        printf("please input number%d ", j+1);
        scanf("%d", i+j);
    }
     
    for(j=0; j<4; j++)
    {
        for(k=0; k<4; k++)
        {
            if(i[k] < i[k+1])
            {
                int l = i[k];
                i[k] = i[k+1];
                i[k+1] = l;
            }
        }
    }
     
    printf("%d%d%d%d%d\n", i[0], i[1], i[2], i[3], i[4]);
 
    return 0;
}
