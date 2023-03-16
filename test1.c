#include <stdio.h>
#include <stdlib.h>
#define N 7
int main(){
    int i, tmp, b;
    char dir;
    int y = 0;
    int x = 0;
    int arr[N][N] = {0};
    arr[y][x] = 1;
    printf("Where u want to shift.. \n");
    while(x != 7 || y != 7 || x > 0 || y > 0 ){
        printf("\nleft a, right d, upstairs w, downstairs s:  ");
        scanf("%c", &dir);
        if (dir == 'a'){
            tmp = arr[y][x];
            arr[y][x] = arr[y][x+1];
            arr[y][x+1] = tmp;
            x++;
        }
        if(dir == 'd'){
            tmp = arr[y][x];
            arr[y][x] = arr[y][x-1];
            arr[y][x-1] = tmp;
            x--;
        }

        if(dir == 's'){tmp = arr[y][x];
            arr[y][x] = arr[y+1][x];
            arr[y+1][x] = tmp;
            y++;
            
        }
        
        if (dir == 'w'){

            tmp = arr[y][x];
            arr[y][x] = arr[y-1][x];
            arr[y-1][x] = tmp;
           y--;
        } 

        for(i = 0; i < N; i ++){
            printf("\n");
            for(int b = 0; b < N; b ++){
                printf(" %d ", arr[i][b]);
            }
        }
    }
  
    return 0;
}