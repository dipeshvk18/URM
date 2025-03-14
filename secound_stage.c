#include <stdio.h>
#define MAX_SIZE 100
#define SIZE 5



 struct STUDENT
 {
    int USERID;
    char USERNAME[MAX_SIZE];
    char PASSWORD[20];
    char ROLE[20];

 };



 struct STUDENT a[SIZE] ;

 void input() {
    for (int i = 0; i < SIZE-1; i++)
    {
        printf("Enter  USERID\n ");
    scanf("%d",&a[i].USERID);
    printf("Enter You USERNAME\n ");
    scanf("%s",&a[i].USERNAME);
    printf("Enter You PASSWORD\n ");
    scanf("%s",&a[i].PASSWORD);
    printf("Enter Your ROLE\n ");
    scanf("%s",&a[i].ROLE);
    }
    
    
   

 };

 void output(){
    printf("************---------details--------***********************");
    for ( int i = 0; i < SIZE-1; i++)
    {
    printf("USERID is %d\n",a[i].USERID);
    printf("username is %s\n",a[i].USERNAME);
    printf("PASSWORD is %s\n",a[i].PASSWORD);
    printf("ROLE is %s\n",a[i].ROLE);
    }

 };

 void lettingshowindex (int index){
    printf("Tell me the index SO i can show you proper index\n");
    printf("this is the detail you needed %d\n",a[index].USERID);
    printf("this is the detail you needed %s\n",a[index].USERNAME);
    printf("this is the detail you needed %s\n",a[index].PASSWORD);
    printf("this is the detail you needed %s\n",a[index].ROLE);
 };

 
 int main()
 {
    input();
    output();
    
   

    return 0;
 }
 