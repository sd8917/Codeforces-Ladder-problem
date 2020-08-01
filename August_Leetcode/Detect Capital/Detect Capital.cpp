class Solution {
public:
    /*
    "FlaG"
    n = 4 //size of the string;
    capCount = 0
    //iterate over the string and find the capCount each time we get caps we increase it by 1.;
    //for checking caps we
    caps ascii value lies 65 to 90
    small ascii  value lies 97 to 122.

    */
    bool detectCapitalUse(string word) {
    //lets code it
        int n = word.size();
        int capCount = 0; //initialize
        for(int i=0;i<n;i++){
            if(word[i]>=65 &&  word[i]<=90){
               capCount++; //caps we increase it by 1
            }
        }

        //now we have caps count check caps count a/c to problem
        //All letters in this word are capitals, like "USA". means capCount == n

        // All letters in this word are not capitals, like "leetcode". means capCount == 0

        //Only the first letter in this word is capital, like "Google" means word[0] >=65 and word[0]<=90 && capCount = 1;

        if( (capCount == n) || (capCount == 0) || ( (word[0] >=65 && word[0]<=90) && (capCount == 1) ) ){
            return true;
        }else{
            return false;
        }

    }
};
