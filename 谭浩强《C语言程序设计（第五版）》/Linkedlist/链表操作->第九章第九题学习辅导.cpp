#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct student)
struct Student
{
	long num;
	float score;
	struct Student * next; 
};
int n;
//主函数
it main()
{
	struct Student * creat();
	struct Student * del(struct Student * ,long);
	struct Student * insert(struct Student * ,struct Student * );
	void print(struct Student *);
	struct Student *head,stu;
	long del_num;
	printf("input records:\n");
	head=craet();
	print(head);
	printf("input the deleted number:");
	scanf("%ld",&del_num);
	head=del(head,del_num);
	print(head);
	printf("input the inserted record:");
	scanf("%ld,%f",&stu.num,&stu.score);
	head=insert(head,&stu);
	print(head);
	return 0;
 } 
 
 //定义创建链表的creat函数 
 struct Student * creat()
 {
 	struct Student * head;
 	struct Student * p1, * p2;
 	n=0;
 	p1=p2=(struct Student * )malloc(LEN);
 	scanf("%ld,%f",&p1->num,&p1->score);
 	head=NULL;
 	while(p1->num!=0)
 	{
 		n=n+1;
 		if(n==1) head=p1;
 		else p2->next=p1;
 		p2=p1;
 		p1=(struct Student * )malloc(LEN);
 		scanf("%ld,&f",&p1->num,&p1->score);
	 }
	 p2->next=NULL;
 	return(head);	
 }

 //定义删除结点的的del函数
 struct Student * del(struct Student * head,long num);
 {
     struct Student * p1, * p2;
     if(head=NULL) 
     {
        printf("\nlist null! \n");
        return(head);
     } 
     p1=head;
     while(num!=p1->num && p1->next!=NULL)
     {p2=p1;p1=p1->next;}
     if(num==p1->num)
     {
         if(p1==head) head=p1->next;
         else p2->next=p1->next;
         printf("delete:%ld\n",num);
         n=n-1;
     }
     else printf("%ld not been found! \n",num);
     return(head);
 }

 //定义插入结点的insert函数
 struct Student * insert(struct Student * head,struct)
 {
     struct Student * p0,* p1,* p2;
     p1=head;
     p0=stud;
     if(head==NULL)
     {head=p0;p0->next=NULl;}
     else 
     {
         while((p0->num>p1->num))
     }
 }
