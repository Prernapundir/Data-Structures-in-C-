#include<iostream>
#include<queue>
using namespace std;
int main()
{
	//Empty Queue
	queue<int>myQueue;
	
	// Inserting Elements
	myQueue.push(2);
	myQueue.push(4);
	myQueue.push(6);
	myQueue.push(8);
	myQueue.push(10);
	
	// Deleting Elements
	myQueue.pop();
	
	// Printing Elements
	while(!myQueue.empty())
	{
		cout<<" "<<myQueue.back();
		myQueue.pop();
	}
	return 0;
}
