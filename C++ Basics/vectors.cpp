// vector<vector<int>> adj is just a structure — a 2D vector.

// It's the way it's populated that determines if it's:

// an adjacency matrix: values like 0/1 to represent edges

// an adjacency list: each row is a list of neighbors


// This can represent both:

// vector<vector<int>> adj


// an adjacency list, if each adj[i] contains neighbors of node i
// an adjacency matrix, if adj[i][j] is 1 when there's an edge from/ i to j

