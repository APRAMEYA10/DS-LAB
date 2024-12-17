//DFS
#include<stdio.h>
void dfs(int v,int n);
int a[10][10],vis[10],i,j,m,n,k,flag;
void main(){
printf("enter the number of vertices\t");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("enter elements %d\t%d\n",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=1;i<=n;i++){
    vis[i]=0;
}
printf("Enter the vertex to start dfs from\t");
scanf("%d",&m);
dfs(m,n);
for(i=1;i<=n;i++){
    if(vis[i]==0){
        int flag=1;
    }
}
if(flag==1){
    printf(" the graph is not connected ");
}
else{
    printf(" the graph is connected ");
}
}
void dfs(int v,int n){
vis[v]=1;
printf("%d",v);
for(k=1;k<=n;k++){
    if(a[v][k]==1 && vis[k]==0){
        dfs(k,n);
}
}
}

//BFS
#include <stdio.h>

void bfs(int);
int a[10][10], vis[10], n;

void main() {
    int i, j, src;

    printf("Enter the number of vertices (max 10)\n");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
                printf("Enter element %d %d:", i,j);
            scanf("%d", &a[i][j]);
        }
        vis[i] = 0;
    }

    printf("Enter the source vertex (1 to %d):\n", n);
    scanf("%d", &src);
    printf("Nodes reachable from source vertex %d:\n", src);
    bfs(src);
}

void bfs(int v) {
    int q[10], f = 1, r = 1, u, i;
    q[r] = v;
    vis[v] = 1;

    while(f <= r) {
        u = q[f];
        printf("%d ", u);
        for(i = 1; i <= n; i++) {
            if(a[u][i] == 1 && vis[i] == 0) {
                vis[i] = 1;
                r = r + 1;
                q[r] = i;
            }
        }
        f = f + 1;
    }
}
