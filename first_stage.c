#include <stdio.h>
 struct STUDENT
 {
    int USERID;
    char USERNAME;
    char PASSWORD;
    char ROLE;

 };


 struct STUDENT a;

 void input() {
    printf("Enter Your USERID\n ");
    scanf("%d",&a.USERID);
    printf("Enter You USERNAME\n ");
    scanf("%s",&a.USERNAME);
    printf("Enter You PASSWORD\n ");
    scanf("%s",&a.PASSWORD);
    printf("Enter Your ROLE\n ");
    scanf("%s",&a.ROLE);

 };

 void output(){
    printf("username is %d",a.USERID);
    printf("username is %d",a.USERNAME);
    printf("username is %d",a.PASSWORD);
    printf("username is %d",a.ROLE);

 }
 ;
 int main()
 {
    input();
    output();
    
   

    return 0;
 }
 