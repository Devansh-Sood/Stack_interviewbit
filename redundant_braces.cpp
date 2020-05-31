int Solution::braces(string A) {
    stack<char>st;
    char ch='a';
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==')')
        {
               int c=0;
               while(st.top()!='(')
               {
                   ch=st.top();
                   st.pop();
                   if(ch!='(')
                    c++;
               }
               st.pop();
               if(c==0 || c==1)
               {
                   return 1;
               }
        }
        else
        {
            st.push(A[i]);
        }
    }
    return 0;
}