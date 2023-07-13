#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
	int num, index, input;
	stack<int> st;
	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		cin >> input;
		
		switch (input)
        {
            case 1:
                cin >> index;
			    st.push(index);
                break;
            case 2:
                if (st.size() == 0)
			    {
				    cout << "-1" << '\n';
				    continue;
			    }
			    cout << st.top() << '\n';
			    st.pop();
                break;
            case 3:
                cout << st.size() << '\n';
                break;
            case 4:
                cout << st.empty() << '\n';
                break;
            case 5:
                if (st.size() == 0)
			    {
				    cout << "-1" << '\n';
				    continue;
			    }
			    cout << st.top() << '\n';
                break;
        }
	}
}
