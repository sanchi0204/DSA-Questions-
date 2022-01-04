stack<int> as;
void push(stack<int>& s, int a){
	// Your code goes

		s.push(a);

	if(as.empty()==true || as.top()>=a)
	{
	    as.push(a);
	}


}

bool isFull(stack<int>& s,int n){
	// Your code goes here

return (s.size()==n);
}

bool isEmpty(stack<int>& s){
	// Your code goes here

	return (s.size()==0);
}

int pop(stack<int>& s){
	// Your code goes here

	int res = s.top();

	if(as.top()==s.top())
	    as.pop();

	   s.pop();

        return res;
}

int getMin(stack<int>& s){
	// Your code goes here

	return as.top();
}
