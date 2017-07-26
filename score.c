//sort, fscanf, array
#include <stdio.h>
#define MAX 100

FILE *infile;

int main()

{
        int num[MAX], kor[MAX], eng[MAX], average[MAX], total[MAX];
        int i,j,k, aMAX,temp;
        char name[MAX][12];
        char tm[12];
        //aMAX=MAX;

        infile=fopen("input.txt", "rt");

        for(i=0;i<MAX;i++){
        printf("[%3d] 1.NUM 2.NAME 3.KOR 4.ENG \n", i+1);
        fscanf(infile, "%d %s %d %d", &num[i], name[i], &kor[i], &eng[i]);

        if(feof(infile)){
                aMAX=i;
                break;
        }
        }

        fclose(infile);
        for(i=0;i<aMAX;i++){
        total[i] = kor[i] + eng[i];
        average[i] =total[i]/2;
        }
        for (i=0;i<aMAX-1;i++){
                for(k=i+1;k<aMAX;k++){
                        if(average[i]<average[k]){
                                temp=num[i];num[i]=num[k];num[k]=temp;
                                for(j=0;j<12;j++){tm[j]=name[i][j];name[i][j]=name[k][j];name[k][j]=tm[j];}
                                temp=kor[i];kor[i]=kor[k];kor[k]=temp;
                                temp=eng[i];eng[i]=eng[k];eng[k]=temp;
                                temp=average[i];average[i]=average[k];average[k]=temp;
                                temp=total[i];total[i]=total[k];total[k]=temp;
                        }
                }
        }



        printf("NUM\t NAME\t KOR\t ENG\t AVE\t TOT\n");
        for(i=0;i<aMAX;i++){
        printf("%3d\t %3s\t %3d\t %3d\t %3d\t %3d\n", num[i], name[i], kor[i], eng[i], average[i], total[i]);
        }

        return 0;
}                                                                                          21,11-18      Top
