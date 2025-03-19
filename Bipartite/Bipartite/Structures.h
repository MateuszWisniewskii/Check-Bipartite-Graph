#include <string>
#include <vector>

//Algorithm is checking neigbour nodes color of actual node to  verify, wich color the neighbours should have
enum Color {
	NEUTRAL = 0,
	FIRST = 1,
	SECOND = 2
};

//Structure that implements the Node in a graph
struct Node
{
	std::string identifier;

	Color color;
};

//Concatenation that represents a graph.
//Eeach node have a table of pointers to all its neighour nodes
typedef std::vector<std::pair<Node,std::vector<Node*>>> Graph;