class MyStack {
private:
	queue<int> q;
public:
	MyStack() {

	}

	void push(int x) {
		q.push(x);
	}

	int pop() {
		queue<int> p;

		while (q.size() > 1)
		{
			p.push(q.front());
			q.pop();
		}

		const int res = q.front();
		q.pop();

		while (!p.empty())
		{
			q.push(p.front());
			p.pop();
		}

		return res;
	}

	int top() {
		if(!empty())
		{ 
			return q.back();
		}
	}

	bool empty() {
		return q.empty();
	}
};
