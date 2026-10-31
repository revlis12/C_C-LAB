#include <stdio.h>

int main() {
    int num[10]; 
    int count1 = 0; 
    int count2 = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (num[i] % 3 == 0) {
            count1++;
        }
        
        if (num[i] % 5 == 0){
            count2++;
        }
    }
    
    printf("Multiples of 3 : %d\n", count1);
    printf("Multiples of 5 : %d\n", count2);
    
    return 0;
}