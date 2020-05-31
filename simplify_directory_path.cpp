string Solution::simplifyPath(string A) {
    stack<string>st;
    string dir;
    string res;
    res.append("/");
    for(int i=0;i<A.length();i++)
    {
        dir.clear();
        while(A[i] == '/')
        {
            i++;
        }
         while (i < A.length() && A[i] != '/') { 
            dir = dir+A[i]; 
            i++; 
        } 
        if(dir.compare("..")==0)
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
        else if(dir.compare(".")==0)
        {
            continue;
        }
        else if(dir.length()!=0)
        {
            st.push(dir);
        }
    }
    stack<string>st1;
    while(!st.empty())
    {
        st1.push(st.top());
        st.pop();
    }
     while (!st1.empty()) { 
        string temp = st1.top(); 
          
        // if it's the last element no need 
        // to append "/" 
        if (st1.size() != 1) 
            res.append(temp + "/"); 
        else
            res.append(temp); 
  
        st1.pop(); 
    } 
  
    return res;
}
