# include <stdio.h>

int main() {
    int x, y;

    printf("x좌표입력 : ");
    scanf("%d, &x");
    printf("y좌표 입력 : ");
    scanf("%d, &y");

    if (x > 0 && y > 0) {
        printf("(%d, %d)좌표는 제 1사분면에 있습니다.\n",x,y);
    }

    else if (x < 0 && y > 0) {
        printf("(%d, %d)좌표는 제 2사분면에 있습니다.\n",x,y);
    }

    else if (x < 0 && y < 0) {
        printf("(%d, %d)좌표는 제32사분면에 있습니다.\n",x,y);
    }

    else if (x > 0 && y < 0) {
        printf("(%d, %d)좌표는 제 4사분면에 있습니다.\n",x,y);
    }

    else if (x == 0 && y == 0) {
        printf("(%d, %d)좌표는 원점입니다.\n",x,y);
    }

    else if (x == 0) {
        printf("(%d, %d)좌표는 y축 위에 있습니다.\n",x,y);
    }

    else{
        printf("(%d, %d)좌표는 x축 위에 있습니다.\n",x,y);
    }

    return 0;
}