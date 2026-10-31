#include <stdio.h>

int main() {
    int score[5];
    int sum = 0;
    double avg; 
    
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &score[i]); 
    }
    
   
    for(int j = 0; j < 5; j++) {
        sum = sum + score[j]; 
    }
    
  
    avg = (double)sum / 5;
    
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg); 
    
    return 0;
}