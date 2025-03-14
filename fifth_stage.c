#include <stdio.h>

int main (){
    int result =798;
    int marks =89;
    int *ptrResult= &result;
   
    printf("value of result %d\n",result);
    printf("value of  %d\n",*ptrResult);
     

    printf("value of ptrResult: %d\n",ptrResult);
    printf("value of result: %d\n",&result);


    char ch = 'c';
    char *ptrCh=&ch;
    printf("value of ch : %c\n",ch);
    printf("value of ch : %c\n",*ptrCh);
    printf("value of ch : %c\n",ptrCh);
    
    //first answer = c
    //scound ansewr = c
    //thired answer will be the address of ptrch ;
     
    printf("****************************\n");
    printf("****************************\n");
  


    void *ptr=NULL;
    ptr=&result;
    printf("the value of *ptr :%c\n",*(int*)ptr);


    ptr=ch;
    printf("the value of *ptr: %c\n",*(int*)ptr);

    int * ptrNewPointer= (int*)ptr;
    printf("\n value of *ptrNewPointer:",*ptrNewPointer);


    int *ptrStoclAvailable= NULL;
    




    
}