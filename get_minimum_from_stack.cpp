// my gfg code

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle = INT_MAX;
    stack<int> s;
    stack<int> mini;
    
    public:
       int getMin(){
           if(mini.empty()) {
               return -1;
           }
           return mini.top();
           
       }
       
       int pop(){
           if(s.empty()) {
               return -1;
           }
           int ret = s.top();
           s.pop();
           mini.pop();
           if(!mini.empty()) {
	           	minEle = mini.top();
            }
    	  	 else minEle = INT_MAX;
           return ret;
       }
       
       void push(int x){
           s.push(x);
           minEle = min(minEle, x);
           mini.push(minEle);
       }
};

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
