#include<stdio.h>
#include<math.h>
int main(){
    int no,tmp,sum=0,length=0;
    printf("Enter the value to be checked");
    scanf("%d",&no);
    tmp=no;
    while (tmp!=0){
        tmp=tmp/10;
        length=length+1;
    }
    tmp=no;
    while (tmp!=0)
    {
        sum += round(pow(tmp%10,length));
        tmp=tmp/10;
    }
    if(sum==no)
        printf("%d is armstrong no.",no);
    else
        printf("%d is not an armstrong no.",no);
    return 0;
    }
