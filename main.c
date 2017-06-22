//
//  main.c
//  QQ
//
//  Created by qiuyu143 on 2017/6/16.
//  Copyright © 2017年 qiuyu143. All rights reserved.
//

#include <stdio.h>
int main()
{
    FILE *fp;
    char str[80];
    int n;
    float weight;
    fp=fopen("format.txt", "r");
    if(fp ==NULL)
    {
        printf("打开文件错误，要打开的文件可能不存在");
    }
    else
    {//SGPRMC,013238,A,4047.533,N,11141.856,E,012.2,253.6,100517,,*1A
        fscanf(fp2,"SGPRMC,%6s,%c,,%1f,%c,%l,%lf,%lf,%6s,%s",time,&latitude,&latitude,&longitude,&longitude1,&v,&course,year,s};
               
    {
        while(fscanf(fp,"%s %d,%f",str,&n,&weight)!=EOF)
        {
            printf("%s %d %.2f\n",str,n,weight);
        }
        fclose(fp);
    }
    return 0;
}
