#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int size = 2*n - 1;
    int sayi;
    int flag = 1;
    for(int i = 1; i<=size; i++) {
        sayi=n+1;
        for(int j = 0; j<size; j++) {
            if(j<i && flag) { 
              sayi--;  
            }
            else if((j+i)>size && flag) {
                sayi++;
            }
            else if((j+i)<=size && flag==0 && sayi!=1) {
                sayi--;
            }
            else if(j>=i && flag==0) {
                sayi++;
            }

            if(sayi == 1) {
                flag=0;
            }
            printf("%d",sayi);
        }
        printf("\n");
    }
    return 0;
}