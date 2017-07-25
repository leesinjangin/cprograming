#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 6

int lottoNum[MAX];
int main()
{
        int index, cnt, flag, temp;
        char AsciiCode;
        int count=0;

        srand(time(NULL));
    
        //initialization
        for(index=0;index<MAX;index++)
        {
                lottoNum[index]=0;
        }

        for(index=0;index<MAX;index++)
        {
                printf("Input Your Number : ");

                scanf("%d", &lottoNum[index]);
                AsciiCode = getchar();
                if(AsciiCode==27)
                        break;
                count++;
        }   
        printf("\n");

//Generate randomNumber
        //Duplicate inspection
        for(index=count;index<MAX;index++)
        {   
                while(1)
                {   
                        lottoNum[index]=(rand()%45)+1;
                        flag=0;
                        for(cnt=0;cnt<index;cnt++)
                        {   
                                if(lottoNum[cnt]==lottoNum[index])
                                {   
                                        flag=1;
                                        break;
                                }   
                        }   
                        if(!flag) break;
                }   


        }
 //Sort
        for(index=0;index<MAX;index++)
        {
                for(cnt=index+1;cnt<MAX;cnt++)
                {
                        if(lottoNum[index] > lottoNum[cnt])
                        {
                                temp=lottoNum[index];
                                lottoNum[index]=lottoNum[cnt];
                                lottoNum[cnt]=temp;
                        }
                }
        }

        //print
        for(index=0;index<MAX;index++)
        {
                printf("%d\t",lottoNum[index]);
        }
        printf("\n");
        return 0;
}
