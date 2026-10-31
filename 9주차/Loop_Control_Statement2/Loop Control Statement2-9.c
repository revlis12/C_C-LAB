#include <stdio.h>

int main() {
    int num[10]; 
    int count = 0; 
    
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
   
    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            count++;
        }
    }
    
    printf("Even numbers = %d", count);
    
    return 0;
}