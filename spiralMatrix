#include <stdio.h>

int spiralM[90][90];
int main(void)
{
        int n, max, i, j, x=0, y=-1, z=1, num =0; 

        printf("Input size : ");
        scanf("%d", &n);

        max=n;
    
        while(max>0)
        {
                for(i=0;i<max;i++)
                {
                        y=y+z;
                        spiralM[x][y]=num;
                        num=num+1;
                }
                max=max-1;

                for(i=0;i<max;i++)
                {
                        x=x+z;
                        spiralM[x][y]=num;
                        num=num+1;
                }
                z*=-1;
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%3d", spiralM[i][j]);
                }
                printf("\n");
        }
        return 0;
}
