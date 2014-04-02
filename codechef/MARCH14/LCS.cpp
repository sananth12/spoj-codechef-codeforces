#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
#define ALPHABETS 26
#define MAX_STRING_LEN 250000
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i,m,n) for(int i=m;i<(int)n;i++)
typedef struct node node_t;

struct node {
	struct node * child[ALPHABETS];
	char c;
	int count;
	bool isEnd;
};
node_t * CreateNode(char c);
void AddString(node_t * root, string str);
bool SearchAndIncrement(node_t * root, string str);
bool _SearchAndIncrement(node_t * root, string str);
string LongestCommonSubstring(node_t * root,int count);
void _LongestCommonSubstring(node_t * root,int count,
			int cur,char *resultString, string &maxString);



node_t * CreateNode(char c)
{
	node_t * myNode = new node_t;
	myNode->c = c;
	myNode->count = 0;
	myNode->isEnd = false;
	rep(i,ALPHABETS)
		myNode->child[i] = NULL;
	return myNode;
}
void AddString(node_t * root, string str)
{
	node_t * pCrawl = root;
	rep(i,str.size()) {
		if( pCrawl->child[str[i]-'a'] == NULL )
			pCrawl->child[str[i]-'a'] = CreateNode(str[i]-'a');

		pCrawl = pCrawl->child[str[i]-'a'];
	}
	pCrawl->isEnd = true;
}

bool SearchAndIncrement(node_t * root, string str) {
	rep(i,str.size())
		_SearchAndIncrement(root, str.substr(i));
	return true;
}
bool _SearchAndIncrement(node_t * root, string str)
{
	node_t * pCrawl = root;
	rep(i,str.size()) {
		if( pCrawl->child[str[i]-'a'] != NULL )  {
			pCrawl = pCrawl->child[str[i]-'a'];
			pCrawl->count++;
		}
		else
			return false;
	}
	return true;
}

// LongestCommonSubstring from suffix tree
string LongestCommonSubstring(node_t * root,int count) {

	char resultString[MAX_STRING_LEN];
	string maxString;
	_LongestCommonSubstring(root,count,0,resultString,maxString);
	return maxString;
}

void _LongestCommonSubstring(node_t * root,int count,int cur
					,char *resultString, string &maxString) {

	rep(i,ALPHABETS) {
		if( root->child[i] != NULL && root->child[i]->count == count ) {
			resultString[cur] = i+'a';
			_LongestCommonSubstring(root->child[i],count,cur+1,resultString, maxString);
		}
	}
	if(cur > maxString.size()) {
		resultString[cur] = 0;
		maxString = resultString;
	}
}

int main() {
	node_t * root = CreateNode('r'); // Root
	char  *input1 = (char *)malloc (25000*sizeof(char *));
	char *input2 = (char *)malloc (25000*sizeof(char *));
    cin>>input1>>input2;
	int numberOfStrings = 2;

	// Create Suffix tree.
	rep(i,strlen(input1))
		AddString(root,input1++);

	// Increase the count of each node in suffix tree.
	SearchAndIncrement(root,input2);


	// Get the maxLengthString with count == numberOfStrings-1
	cout << "Longest common substring == "<< LongestCommonSubstring(root,numberOfStrings-1)<< endl;


	return 0;
}
