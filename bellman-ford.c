#include <stdio.h>

#define INF 9999

int main() {
    int V = 5, E = 8;

    int edges[8][3] = {
        {0,1,-1},
        {0,2,4},
        {1,2,3},
        {1,3,2},
        {1,4,2},
        {3,2,5},
        {3,1,1},
        {4,3,-3}
    };

    int dist[5];
    int i, j, u, v, w;

    for(i=0;i<V;i++)
        dist[i] = INF;

    dist[0] = 0;

    for(i=1;i<V;i++) {
        for(j=0;j<E;j++) {
            u = edges[j][0];
            v = edges[j][1];
            w = edges[j][2];

            if(dist[u] != INF &&
               dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    for(i=0;i<V;i++)
        printf("0 -> %d = %d\n", i, dist[i]);

    return 0;
}