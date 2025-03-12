#include<stdio.h>

#define MAX_STUDENT 10
#define SIZE 5

struct STUDENT
{
    int userid;
    char name[MAX_STUDENT];
    char password[50];
    char role[20];

};

struct STUDENT a [SIZE];

void input()
{
    for ( int i = 0; i < SIZE-1; i++)
    {
        printf("Enter your userid\n");
    scanf("%d",&a[i].userid); 
    printf("Enter your name\n");
    scanf("%s",&a[i].name);
    printf("Enter your password\n");
    scanf("%s",&a[i].password);
    printf("Enter your role\n");
    scanf("%s",&a[i].role);  
    }
    
  
}


void output()
{
    for ( int i = 0; i < SIZE-1; i++)
    {
    printf("userid is %d\n",a[i].userid);
    printf("name is %s\n",a[i].name);
    printf("password is %s\n",a[i].password);
    printf("role is %s\n",a[i].role);
    }       
}
void show(int index)
{
    printf("userid is %d\n",a[index].userid);
    printf("name is %s\n",a[index].name);
    printf("password is %s\n",a[index].password);
    printf("role is %s\n",a[index].role);
}

void update(int index) 
{
    printf("Enter your userid\n");
    scanf("%d",&a[index].userid); 
    printf("Enter your name\n");
    scanf("%s",&a[index].name);
    printf("Enter your password\n");
    scanf("%s",&a[index].password);
    printf("Enter your role\n");
    scanf("%s",&a[index].role);  
}

int main()
{
    input();
    output();


    
    

    return 0;
}

