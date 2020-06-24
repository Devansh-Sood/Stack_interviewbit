int Solution::largestRectangleArea(vector<int> &A) {
    //  stack<int> s; 
  
    // int max_area = 0; 
    // int tp;   
    // int area_with_top; 
    // int n=A.size(); 
    // int i = 0; 
    // while (i < n) 
    // { 
        
    //     if (s.empty() || A[s.top()] <= A[i]) 
    //         s.push(i++);
    //     else
    //     { 
    //         tp = s.top();  // store the top index 
    //         s.pop();  // pop the top 
  
    //         // Calculate the area with hist[tp] stack  
    //         // as smallest bar 
    //         area_with_top = A[tp] * (s.empty() ? i : i - s.top() - 1); 
  
    //         if (max_area < area_with_top) 
    //             max_area = area_with_top; 
    //     } 
    // } 
  
    // while (s.empty() == false) 
    // { 
    //     tp = s.top(); 
    //     s.pop(); 
    //     area_with_top = A[tp] * (s.empty() ? i :  
    //                             i - s.top() - 1); 
  
    //     if (max_area < area_with_top) 
    //         max_area = area_with_top; 
    // } 
  
    // return max_area;
    
    stack<int>st;
    int i=0,e=0,area=0,max=0;
    int l=A.size();
    while(i<l)
    {
        if(st.empty() || A[i]>=A[st.top()])
        {
            st.push(i++);
        }
        else{
            e=st.top();
            st.pop();
            if(st.empty())
            {
                area=A[e]*i;
            }
            else
            {
                area=A[e]*(i-st.top()-1);
            }
            if(max<area)
            {
                max=area;
            }
        }
    }
    while(!st.empty())
    {
         e=st.top();
            st.pop();
            if(st.empty())
            {
                area=A[e]*i;
            }
            else
            {
                area=A[e]*(i-st.top()-1);
            }
            if(max<area)
            {
                max=area;
            }
    }
    return max;
}