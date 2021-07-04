#include<stdio.h>
 
struct information
{
    char name[11];
    char dates[20];
    char sex[2];
    char sta_num[17];
    char mob_num[17];
    
}information;
 
int main(void)
{
    int n = 0;
    struct information person[10];
    int k = 0;
    int num = 0;
    scanf("%d\n", &n);
 
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %c %s %s",person[i].name, person[i].dates, &person[i].sex[0], person[i].sta_num, person[i].mob_num );
    }
    scanf("\n%d", &k);
 
    for(int j = 0; j < k; j++)
    {
        scanf(" %d", &num);
        
        if(num >= 0 && num < n)
        {
            printf("%s %s %s %c %s\n", person[num].name, person[num].sta_num, person[num].mob_num, person[num].sex[0], person[num].dates);
        }
        else
        {
            printf("Not Found\n");
        }
    }
 
 
    // for(int j = 0; j < k; j++)
    // {
    //     printf("%d ", num[j]);
    // }
 
    // for(int i = 0; i < n; i++)
    // {
    //     printf("%s %d/%d/%d %c %s %s\n",person[i].name, person[i].year, person[i].month, person[i].day, person[i].sex[0], person[i].sta_num, person[i].mob_num );
    // }
    return 0;
}
