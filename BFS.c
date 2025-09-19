#include <stdio.h>
#include <stdlib.h>

int visited[13];
int queue[13];
int front = 0, rear = 0;

void enqueue(int vertex) {
    queue[rear++] = vertex;
}

int dequeue() {
    return queue[front++];
}

int isEmpty() {
    return front == rear;
}

void BFS(int start, int adj[13][13]) {
    visited[start] = 1;
    enqueue(start);
    
    while (!isEmpty()) {
        int vertex = dequeue();
        printf("%d ", vertex);
        
        for (int i = 1; i <= 12; i++) {
            if (adj[vertex][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

int main() {
    int adj[13][13] = {0};
    
    // Same graph edges
    adj[1][2] = adj[2][1] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][5] = adj[5][2] = 1;
    adj[3][4] = adj[4][3] = 1;
    adj[3][6] = adj[6][3] = 1;
    adj[4][7] = adj[7][4] = 1;
    adj[5][7] = adj[7][5] = 1;
    adj[5][9] = adj[9][5] = 1;
    adj[6][8] = adj[8][6] = 1;
    adj[7][8] = adj[8][7] = 1;
    adj[8][10] = adj[10][8] = 1;
    adj[9][11] = adj[11][9] = 1;
    adj[10][12] = adj[12][10] = 1;
    adj[11][12] = adj[12][11] = 1;
    
    printf("BFS traversal: ");
    BFS(1, adj);
    printf("\n");
    
    // Time complexity
    printf("Time complexity: O(V + E) where V=12, E=14\n");
    
    return 0;
}
