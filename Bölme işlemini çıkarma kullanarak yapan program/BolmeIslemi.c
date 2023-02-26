#include <stdio.h>
#include <stdlib.h>

int bolunen,bolen;
    int i;

int main(void){

    printf("Bolunen:");
    scanf("%d",&bolunen);

    printf("Bolen:");
    scanf("%d",&bolen);

    for (i=1;bolunen>bolen ;i++ ) {
        bolunen=bolunen-bolen;
}
printf("sonuc: %d",i);
}