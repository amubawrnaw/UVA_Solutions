#include <stdio.h>
#include <time.h>
#include <algorithm>
extern int solve(int N, int D[100000]);

int N;
int D[100000];

int solve(int N, int D[100000]) {
    std::sort(D, D+N);
    return D[N/2];
}
void get_input() {
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        scanf("%d",&D[i]);
}
int main() {
    clock_t start = clock();
    freopen("sample_input.txt", "r", stdin);
    int T;
    scanf("%d",&T);

    for(int case_num=1; case_num<=T; case_num++) {
        get_input();
        
        int ret = solve(N,D);

        printf("%d\n",ret);
    }
    printf("execution_time: %.4f\n", (double) (clock() - start) / CLOCKS_PER_SEC * 1000);

    return 0;
}