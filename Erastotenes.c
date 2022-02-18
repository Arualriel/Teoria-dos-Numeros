/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,resp;
    resp=0;
    n=0;
    while(resp!=1){
        system("clear");
        printf("\ndigite um numero inteiro positivo:");
        scanf("%d",&n);
        int num[n];
        for(i=2;i<=n;i++){
         num[i]=i;
         }
        for(i=2;i<=n;i++){
            for(j=0;j<=n;j++){
                
                if(num[j]!=0){
                    if(num[j]!=i){
                        if(num[j]%i==0){
                            num[j]=0;
                        }
                    }
                }
            }
            
        }
        printf("\n\n primos de 2 a %d",n);
        for(i=0;i<=n;i++){
            if(num[i]!=0){
                printf("\n%d",num[i]);
            }
        }
        printf("\ndeseja efetuar a operacao novamente? (sim=0,nao=1)");
        scanf("%d",&resp);
    }

    return 0;
}
