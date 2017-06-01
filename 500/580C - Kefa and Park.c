#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int cats;
    int max;
    int e_count;
    int is_visited;
    int *edges;
} node_t;

int main() {
    int m, n, i, j, *e, l, r, ans = 0, q[100000], qs, d;
    node_t *v, *curr, *child;
    scanf("%d %d\n", &n, &m);
    v = (node_t *)malloc(sizeof(node_t) * (n + 1));
    for (i = 1; i <= n; ++i) {
        scanf("%d", &v[i].cats);
        v[i].e_count = 0;
        v[i].is_visited = 0;
        v[i].edges = malloc(sizeof(int));
    }
    for (i = 0; i < n - 1; ++i) {
        scanf("%d %d\n", &l, &r);
        v[l].edges = realloc(v[l].edges, sizeof(int) * (v[l].e_count + 1));
        v[l].edges[v[l].e_count] = r;
        v[l].e_count++;
        v[r].edges = realloc(v[r].edges, sizeof(int) * (v[r].e_count + 1));
        v[r].edges[v[r].e_count] = l;
        v[r].e_count++;
    }
    v[1].max = v[1].cats;
    q[0] = 1;
    for (qs = 1, i = 0; i != qs; ++i) {
        curr = v + q[i];
        curr->is_visited = 1;
        if (curr->e_count > 1|| !i) {
            for (j = 0; j < curr->e_count; j++) {
                d = curr->edges[j];
                child = v + d;
                if (! child->is_visited) {
                    if (child->cats)
                        child->cats += curr->cats;
                    child->max = child->cats > curr->max ? child->cats : curr->max;
                    if (child->max <= m) {
                        q[qs] = d;
                        ++qs;
                    }
                }
            }
        } else
            ++ans;
    }
    free(v);
    printf("%d\n", ans);
}
