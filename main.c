#include <stdio.h>
int main() {

    int number;
    int max=0;

    printf("Enter a number(to stop enter 0): ");
    scanf("%d",&number);

    while ( number>0 ){
        if ( number > max )
            max = number;
        else
            max = max;
        printf("Enter a number: ");
        scanf("%d",&number);}

    printf("The largest entered is %d",max);

    return 0;
}
