/*
 * algumacoisa.c
 * 
 * Copyright 2018 Laura  <laura@localhost>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

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
