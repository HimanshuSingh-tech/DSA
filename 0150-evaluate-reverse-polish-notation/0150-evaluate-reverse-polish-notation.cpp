class Solution {
public:
    int evalRPN(vector<string>& arr) {
        stack<int> st;
        int n = arr.size();
        string a;
        for(int i = 0 ; i< n ;i++){
            if(arr[i] != "*" && arr[i] != "+" && arr[i] != "-" && arr[i] != "/" ){
                st.push(stoi(arr[i]));
            }
            else{
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int final =0;
                if(arr[i] == "*"){
                    final = a * b;
                }
                else if(arr[i] == "+"){
                    final = a + b;
                }
                else if(arr[i] == "-"){
                    final = a - b;
                }
                else if(arr[i] == "/"){
                    final = a / b;
                }
                st.push(final);
            }

        }
        return st.top();

    }
};