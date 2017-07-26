#include <stdio.h>

int max;

int  main()

  int dal[50][50];
  int i;
  int x=0;
  int y=-1;
  int t=1;
  int p;
  int cnt=0;
  int jmax;

  printf("배열 숫자를 입력하세요 nXn: ");
  scanf("%d",&p);
  max=p;

  jmax=max;
  while(0<=jmax)
  {
    for(i=0;i<jmax;i++) //행 표현
    {
      y=y+t;
      dal[x][y]=cnt;
      cnt++;
    }
    jmax--;
    for(i=0;i<jmax;i++)// 열 표현
    {
      x=x+t;
      dal[x][y]=cnt;
      cnt++;
    }

    t=t*-1;
  }
  for(x=0;x<max;x++)// 출력 부분
  {
    for(y=0;y<max;y++)
    {
      printf("%4d",dal[x][y]);
    }
    printf("\n");
  }

  return 0;
}
