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

bool BFS(vector<int> adj[], int src, int dest, int v,
		int pred[], int dist[])
{

	list<int> queue;

	bool visited[v];

	for (int i = 0; i < v; i++) {
		visited[i] = false;
		dist[i] = INT_MAX;
		pred[i] = -1;
	}
	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);


	while (!queue.empty()) {
		int u = queue.front();
		queue.pop_front();
		for (int i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);
				if (adj[u][i] == dest)
					return true;
			}
		}
	}

	return false;
}


void printShortestDistance(vector<int> adj[], int s,
						int dest, int v)
{

	int pred[v], dist[v];

	if (BFS(adj, s, dest, v, pred, dist) == false) {
		cout << "Given source and destination"
			<< " are not connected";
		return;
	}

	vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}

	cout << "Shortest path length is : "
		<< dist[dest];
	cout << "\nPath is::\n";
	for (int i = path.size() - 1; i >= 0; i--)
		cout << path[i] << " ";
}
int main()
{
	int v,e;
  cin>>v>>e;
	vector<int> adj[v];
  int x,y;
  for(int i=0;i<e;i++){
    cin>>x>>y;
    adj[x].push_back(y);
  }
	int v1,v2;
  cin>>v1>>v2;
	printShortestDistance(adj, v1, v2, v);
	return 0;
}