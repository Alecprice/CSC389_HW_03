#include <stdio.h>

void main(){
    int num,i,temp,val=2,str;

  
    printf("Enter an Integer : ");
    scanf("%d",&str);
    if(str<2){
        printf("There is no prime between 0 & 1,  ");
        printf("Please enter integer 2 or above  :");
        scanf("%d",&str);
    }
    printf("The prime numbers below  %d are : \n",str);
  
    for(num = val;num<=str;num++)
       {
         temp = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0){
                 temp++;
                 break;
             }
        }
        
         if(temp==0 && num!= 1)
             printf("%d ",num);
    }
printf("\n");  
}