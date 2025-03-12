#include <stdio.h>

#define MAX_USER 100


struct User{
    int userID;
    char Name[50];
    char password [50];
    char role [20];
};

struct User a;



void input(){

    printf("enter your userID\n");
    scanf("%d",&a.userID);
    printf("enter your Name\n");
    scanf("%s",&a.Name);
    printf("enter your password\n");
    scanf("%s",&a.password);  
    printf("enter your role\n");
    scanf("%s",&a.role);
    
}



void output (){
    printf("userID is %d",a.userID);
    printf("Name is %s",a.Name);
    printf("password is %s",a.password);  
    printf("role is %s",a.role);
}

int main(){
   
    input();
    output();
    return 0;
    
}