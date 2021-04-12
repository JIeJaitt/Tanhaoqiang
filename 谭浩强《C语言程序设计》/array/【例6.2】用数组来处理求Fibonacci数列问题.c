#include<stdio.h>

int main()

{

    //对最前面的两个元素f[0]和f[1]赋初值为1

    int f[20]={1,1};

    //先后求出f[2]~f[19]的值

    for(int i=2;i<20;f[i]=f[i-2]+f[i-1],i++);

    for(int i=0;i<20;i++)

    {

        //控制每输出5个数后换行,且i=0时也换行

        if(i%5==0) printf("\n");

        //输出每一个数

        printf("%12d",f[i]);

    }

    //最后一行也换行,与第一行对称美观

    printf("\n");

    return 0;

}
