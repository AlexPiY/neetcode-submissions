class Solution {
public:
    bool isValid(string s) {
        vector<char> ordine;

        for(char paranthese : s){
            if(paranthese == '{' or paranthese == '[' or paranthese == '(')
                ordine.push_back(paranthese);
            
            else{
                if(ordine.empty())
                    return false;
                if(paranthese == ')' and ordine.back() != '(')
                    return false;
                else if(paranthese == ']' and ordine.back() != '[')
                    return false;
                else if(paranthese == '}' and ordine.back() != '{')
                    return false;
                else ordine.pop_back();
            }
        }
        if(!ordine.empty())
            return false;
        
        else
            return true;
    }
};