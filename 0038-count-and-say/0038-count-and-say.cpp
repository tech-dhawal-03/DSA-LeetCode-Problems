class Solution {
public:
    string trace="";
    int count = 1;
    string countAndSay(int n) {
        //solving using recursion
        //base condition
        if(n==1)
        {
            trace.append("1");
            return "1";
        }

     


        countAndSay(n-1);
        for(int i=0;i<trace.size();i++)
        {
            if(trace[i]==trace[i+1])
            {
                int j = i+1;

                while(trace[j]==trace[i])
                {
                    count++;
                    j++;
                }
                
                trace.erase(i,count-1);
                trace.insert(i,to_string(count));
                count = 1;
                i++;
                


            }

            else
            {
                char present = trace[i];
                trace.insert(i,to_string(count));
                count = 1;
                i++;
            }



          


        }








      return trace;


        
    }
};