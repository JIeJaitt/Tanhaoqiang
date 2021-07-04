#include<stdio.h>

struct student
{
	char number[100];
	char name[100];
	int score;
};

int main() {
	struct student a[100]; 
	int i, t, n, max=0, k;   //声明相关变量
	int s1, s2, s3;
	scanf("%d", &n); 	//输入学生数 n
    for (i = 1; i <= n; i++) {        
    		scanf("%s %s %d %d %d", &a[i].number, &a[i].name, &s1, &s2, &s3);        
    		//依次输入每个学生的 学号，姓名，三门课程成绩
   		a[i].score = s1 + s2 + s3;    //计算总成绩
   	}
	for (i = 1; i <= n; i++) {         
		if (max < a[i].score) {            
		max = a[i].score;             //运用一重循环选出最高分
		k = i;        		      //并将其下标赋给 k
		}    
	}    
	printf("%s %s %d", a[k].name, a[k].number, a[k].score);
	//输出总分最高学生的 姓名、学号和总分
}
