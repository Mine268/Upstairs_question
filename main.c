#include <stdio.h>
int e[100], sum;

int main() {
    dfs(0, 0);
    getchar();
    return 0;
}

void dfs(int sum, int step) {
    if(sum == 8) {
        print(); return;
    }
       
    if(sum > 8) {
        return;
    }
   
    int i;
    for(i = 1; i <= 2; i++) {
        if(sum + i <= 8) {
            e[step] = i;
            step++;
            dfs(sum + i, step);
            step--;
            e[step] = 0;
        } else {
            e[step] = 0;
            --step;
            return;
        }
    }
    return;
}

void print() {
    int i;
    sum++;
    printf("%2d: ", sum);
    for(i = 0; i <= 7; i++) {
        printf("%d ", e[i]);
    }
    printf("\n");
    return;
}
