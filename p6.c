#include <stdio.h>
int main(){
    int i, num;
    
    // Asking for input
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    printf("All even numbers from 1 to %d: ", num);
    i = 1;
    while (i <= num){
        if (i % 2 == 0){
            printf("%d\t", i);
        }
        i++;
    }
    return 0;
}
