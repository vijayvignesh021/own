#include <stdio.h>

int main()
{
    int nm,fact[300],k,f =0; 
  
        scanf("%d",&nm); 
        if(nm <0){
            f = 1;
            nm = nm * -1;
        }
        
        for(int i = 1; i <= nm; i++){
            int m=1; 
            fact[0]=1; 
            
            for(int j=2;j<=i;j++){ 
                int temp=0; 
                for(k=0;k<m;++k) 
                { 

                    temp+=fact[k]*j; 
                    fact[k]=temp%10; 
                    temp=temp/10; 
                
                } 
                while(temp>0) 
                { 
                    fact[m]=temp%10; 
                    m=m+1; 
                    temp=temp/10; 
  
                } 
  
            } 
  
            if(f)
            printf("-");
            for(k=m-1;k>=0;--k) 
                printf("%d",fact[k]);
            printf("\n"); 
        }
     

    return 0;
}
