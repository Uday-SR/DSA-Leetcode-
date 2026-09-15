class Solution {
public:
    int largestInteger(int num) {

        priority_queue<int>q1;
        priority_queue<int>q2;

        int n = num;

        while(n > 0) {
            int d = n%10;

            if(d%2 == 0) q1.push(d);
            else q2.push(d);

            n /= 10;
        }

        string str = to_string(num);
        string res;

        for(int i = 0; i < str.size(); i++) {
            if((str[i] - '0')%2 == 0) {
                res.push_back(q1.top() + '0');
                q1.pop();
            } else {
                res.push_back(q2.top() + '0');
                q2.pop();
            }
        }

        return stoi(res);
        
    }
};