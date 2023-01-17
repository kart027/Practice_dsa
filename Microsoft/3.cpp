class Solution {
public:
    string getHint(string s, string g) {
       unordered_map<char,int>s2;
        unordered_map<char,int>g2;
        int c = 0,b=0;

        for(int i = 0;i<s.size();i++){
                s2[s[i]]++;
            
               
        }

  
         for(int i = 0;i<s.size();i++){
                g2[g[i]]++;
               
        }
            for(int i = 0;i<s.size();i++){
                if(s[i]==g[i]){
                        b++;
                        s2[s[i]]--;
                        g2[g[i]]--;
                }
            }

               
               
               for(auto i:s2){
                  
                   if(g2.find(i.first)!=g2.end()){
                   
                       c = c + min(g2[i.first],i.second);
                   }
               }
        

       
        


       

        string ans = to_string(b) + "A" + to_string(c) + "B";

    return ans;
    }

    
    
};

// You are playing the Bulls and Cows game with your friend.

// You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess, you provide a hint with the following info:

// The number of "bulls", which are digits in the guess that are in the correct position.
// The number of "cows", which are digits in the guess that are in your secret number but are located in the wrong position. Specifically, the non-bull digits in the guess that could be rearranged such that they become bulls.
// Given the secret number secret and your friend's guess guess, return the hint for your friend's guess.

// The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. Note that both secret and guess may contain duplicate digits.

 

// Example 1:

// Input: secret = "1807", guess = "7810"
// Output: "1A3B"
// Explanation: Bulls are connected with a '|' and cows are underlined:
// "1807"
//   |
// "7810"