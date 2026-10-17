class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for(string x: operations){
            if(x == "C")
            record.pop_back();

            else if(x == "D")
            record.push_back(record.back() * 2);

            else if(x == "+")
            record.push_back(record[record.size() - 1] + record[record.size() - 2]);
        
            else{
                record.push_back(stoi(x));
            }
        }

        int sum = 0;
        for (int num: record)
            sum += num; 

        return sum;
    }
};