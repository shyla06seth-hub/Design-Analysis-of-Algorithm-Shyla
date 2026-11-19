#include <stdio.h>

#define INF 9999
#define N 5

int main() {
    int graph[N][N] = {
        {0,10,3,0,0},
        {10,0,1,2,0},
        {3,1,0,8,2},
        {0,2,8,0,7},
        {0,0,2,7,0}
    };

    int dist[N], visited[N] = {0};
    int i, j, min, u;

    for(i=0;i<N;i++)
        dist[i] = INF;

    dist[0] = 0;

    for(i=0;i<N-1;i++) {
        min = INF;

        for(j=0;j<N;j++)
            if(!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }

        visited[u] = 1;

        for(j=0;j<N;j++)
            if(graph[u][j] && !visited[j] &&
               dist[u] + graph[u][j] < dist[j])
                dist[j] = dist[u] + graph[u][j];
    }

    for(i=0;i<N;i++)
        printf("0 -> %d = %d\n", i, dist[i]);

    return 0;
}