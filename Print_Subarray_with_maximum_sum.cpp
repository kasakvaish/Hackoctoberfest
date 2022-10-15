
//QUESTION LINK -> https://practice.geeksforgeeks.org/problems/save-your-life4601/1

class Solution{
public:

      string maxSum(string w,char x[], int b[],int n){
          
          // TAKE A MAP TO STORE THE NEW ASCII VALUES
          unordered_map<char,int> mp;
          
          // overwrite the values that are present in the redefined array
          for(int i=0;i<n;i++)
          {
              mp[x[i]] = b[i];
          }
          
          
          int arrsize = w.size();
          int maxSum = INT_MIN;
          int sum = 0;
          
          int curStart = 0;
          int bestStart = 0;
          int end = 0;
          
          for(int i=0;i<arrsize;i++)
          {
              // if new ascii value is present use that !
              if(mp.count(w[i]))  // mp .find(w[i]) can also be used 
              {
                sum+=mp[w[i]];
              }  //else use old values
              else sum += w[i];
              
              if(sum<0) 
              {
                  sum = 0;
                  curStart = i+1;
              }
              
              else if(sum>maxSum)
              {
                  maxSum = sum ;
                  bestStart = curStart;
                  end = i;
              }
          }
          
           return w.substr(bestStart,end-bestStart+1);

          
      }
};
