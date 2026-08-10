#include <stdio.h>
int main() {
    int rakaa = 239;
    int rukaa;
    char ans ='Y';
    while (ans=='Y'||ans=='y')
    { 
        printf("Enter the number: ");
        scanf("%d", &rukaa);
        if (rukaa > 3 && rukaa < 5) {
            printf("%d\n", rakaa * 3 + (rakaa * 7 / 100));

        }   else {
            printf("%d\n", rakaa * rukaa + (rakaa * 7 / 100));
        }
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &ans);
    }
    return 0;
}