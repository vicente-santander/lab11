#include <iostream>
#include <vector>
using namespace std;

class grafo {
	
	public:
		
		void addEdge(vector<vector<int>>& graph, int u, int v) {
			graph[u][v] = 1;
			graph[v][u] = 1;
		}

		void printGraph(const vector<vector<int>>& graph) {
			cout << "Adjacency Matrix:\n";
			for (const auto& row : graph) {
				for (int val : row) {
					cout << val << " ";
				}
			cout << '\n';
			}
		}
};

int main(){
	vector<vector<int>> graph(8, vector<int>(8, 0));
	
	grafo graf;
		
	graf.addEdge(graph,0,1);
	graf.addEdge(graph,0,2);
	graf.addEdge(graph,1,3);
	graf.addEdge(graph,1,4);
	graf.addEdge(graph,1,5);
	graf.addEdge(graph,2,3);
	graf.addEdge(graph,2,5);
	graf.addEdge(graph,2,6);
	graf.addEdge(graph,3,4);
	graf.addEdge(graph,4,5);
	graf.addEdge(graph,4,7);
	graf.addEdge(graph,5,6);
	graf.addEdge(graph,5,7);
	graf.addEdge(graph,6,7);
	
	graf.printGraph(graph);
	
	return 0;
}
