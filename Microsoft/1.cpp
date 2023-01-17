class Solution {
public:
    int evalRPN(vector<string>& t) {

        stack<long>s;

        for(int i=0;i<t.size();i++){
            if(t[i]!="+" && t[i]!="-" && t[i]!="/" && t[i]!="*"){
                    s.push(stoi(t[i]));
            }else{
                long a = s.top();
                s.pop();

                if(t[i]=="+"){
                    s.top() = s.top() +a;
                } else if(t[i]=="-"){
                    s.top() = s.top() -a;
                } else if(t[i]=="*"){
                    s.top() = s.top() * a;
                } else if(t[i]=="/"){
                    s.top() = s.top()/a;
                }
            }

        }
        return s.top();
        
    }
};