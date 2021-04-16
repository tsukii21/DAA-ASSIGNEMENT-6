#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<map>
#include<queue>
#include<utility>
#include<set>
#define lli long long int
#define maplli map<lli,lli>
#define iterm maplli::iterator
#define fi first
#define si second
#define For(i,a,b) for(lli i=a;i<b;i++)
#define vec vector<lli>
#define pb push_back
#define mp make_pair
#define iterv vector<lli>::iterator
#define pi pair<lli,lli>
#define vecpi vector<pi>
#define iterpi vector<pi>::iterator
#define Q queue
#define PQ priority_queue
#define mapc map<char,lli>
#define itermc map<char,lli>::iterator 
#define vecset vector<set<lli>>
#define itervs vecset::iteratorlli 
#define Forb(i,a,b) for(lli i=a;i>=b;i--)
#include<tuple>
#define tal tuple<lli,lli,lli>
void BellmanFord(int graph[][3], int V, int E,
				int src)
{
	// Initialize distance of all vertices as infinite.
	int dis[V];
	for (int i = 0; i < V; i++)
		dis[i] = INT_MAX;
	dis[src] = 0;

	for (int i = 0; i < V - 1; i++) {

		for (int j = 0; j < E; j++) {
			if (dis[graph[j][0]] != INT_MAX && dis[graph[j][0]] + graph[j][2] <
							dis[graph[j][1]])
				dis[graph[j][1]] =
				dis[graph[j][0]] + graph[j][2];
		}
	}

	for (int i = 0; i < E; i++) {
		int x = graph[i][0];
		int y = graph[i][1];
		int weight = graph[i][2];
		if (dis[x] != INT_MAX &&
				dis[x] + weight < dis[y])
			cout << "Graph contains negative"
					" weight cycle"
				<< endl;
	}

	cout << "Vertex Distance from Source" << endl;
	for (int i = 0; i < V; i++)
		cout << i << "\t\t" << dis[i] << endl;
}
int main()
{
	int V,E;
  cin>>V>>E;
	int graph[E][3];
  for(int i=0;i<E;i++)
    cin>>graph[i][0]>>graph[i][1]>>graph[i][2];

	BellmanFord(graph, V, E, 0);
	return 0;
}
