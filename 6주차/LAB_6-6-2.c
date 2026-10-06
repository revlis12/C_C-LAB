#include <stdio.h>

int main() {

    for (int i=1; i<=6; i++) { //행

        int star;

        if ( i <= 4)
            star = i;
        
        else
            star = 7 - i;

        for(int j=1; j<=star; j++){ //열
            printf("*");
        }
        printf("\n");
    }

}