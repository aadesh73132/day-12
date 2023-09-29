#include <stdio.h>
int main()
{
    int attendance;
    
    printf("enter your attendance\n");
    scanf("%d",&attendance);
    printf("you have enter your attendaance as %d\n",attendance);

    if(attendance>95){
        printf("you get 5 marks");
    }

    else if(attendance>85 && attendance<94){
        printf("you get 4 marks");
    }

    else if(attendance>75 && attendance<84){
        printf("you get 2 marks");
    }

    else{
        printf("you get 0 marks;");
    }
    return 0;
}
