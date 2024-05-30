#include <iostream>
#include <vector>

#define VERTICES_NUM 7
#define EDGES_NUM 6

using namespace std;

vector<int> graph[VERTICES_NUM + 1];
bool visited[VERTICES_NUM + 1];

void DFS(int vertex) {
    for (int i = 0; i < graph[vertex].size(); i++) {
        int curr_v = graph[vertex][i];
        if (!visited[curr_v]) {
            cout << curr_v << endl;
            visited[curr_v] = true;
            DFS(curr_v);
        }
    }
}

int main() {
    int start_points[EDGES_NUM] = {1, 1, 1, 2, 4, 6};
    int end_points[EDGES_NUM] = {2, 3, 4, 5, 6, 7};

    for (int i = 0; i < EDGES_NUM; i++) {
        int start = start_points[i];
        int end = end_points[i];

        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    int root_vertex = 1;
    cout << root_vertex << endl;
    visited[root_vertex] = true;
    DFS(root_vertex);
}