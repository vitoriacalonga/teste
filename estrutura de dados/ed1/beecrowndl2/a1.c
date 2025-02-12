#include <stdio.h>
#include <stdlib.h>

void generate_spiral_path(int N, int F, int C) {
    int grid[N][N];

    // Fill the grid with numbers from 1 to N*N
    int value = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            grid[i][j] = value++;
        }
    }

    // Directions: right, down, left, up
    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    int x = F - 1; // Start row (1-indexed to 0-indexed)
    int y = C - 1; // Start column (1-indexed to 0-indexed)
    int direction_idx = 0;

    int path[N * N];
    int visited[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            visited[i][j] = 0;
        }
    }

    int path_length = 0;

    // Start traversal
    while (path_length < N * N) {
        if (x >= 0 && x < N && y >= 0 && y < N && !visited[x][y]) {
            path[path_length++] = grid[x][y];
            visited[x][y] = 1;
        }

        // Move in the current direction
        int next_x = x + directions[direction_idx][0];
        int next_y = y + directions[direction_idx][1];

        // Check boundaries and visited cells
        if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= N || visited[next_x][next_y]) {
            direction_idx = (direction_idx + 1) % 4; // Change direction
        }

        x += directions[direction_idx][0];
        y += directions[direction_idx][1];
    }

    // Print the path
    for (int i = 0; i < path_length; i++) {
        printf("%d", path[i]);
        if (i < path_length - 1) {
            printf(" ");
        }
    }
    printf("\n");

    // Print the total number of cells visited
    printf("%d\n", path_length);
}

int main() {
    int N, F, C;

    // Input
    scanf("%d", &N);
    scanf("%d", &F);
    scanf("%d", &C);

    // Generate spiral path
    generate_spiral_path(N, F, C);

    return 0;
}
