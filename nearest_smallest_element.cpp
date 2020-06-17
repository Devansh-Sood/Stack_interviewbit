vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>s;
    vector<int>res(A.size());
    res.clear();
    for(int i=0;i<A.size();i++)
    {
        while(!s.empty() && A[i]<=s.top())
        {
            s.pop();
        }
        if(s.empty())
        {
            res.push_back(-1);
        }
        else{
            res.push_back(s.top());
        }
        s.push(A[i]);
    }
    return res;
}