// class Solution {
// public:
//     int firstUniqChar(string s) {
//         char a;
//       unordered_map<char,vector<int>> mp;
//       for(int i = 0 ; i< s.size();i++){
//         mp[s[i]].push_back(i); 
//       }
//       for(auto x : mp){
//         if(x.second.size()==1){
//            a = x.first;
//         }
//       }
//       for(int i = 0; i < s.size(); i++){

//     if(s[i] == a){

//         return i;

//     }

// }
//   return -1;  }
// };
class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, vector<int>> mp;

        // Character ke indexes store karo
        for(int i = 0; i < s.size(); i++){
            mp[s[i]].push_back(i);
        }

        // String ko original order me traverse karo
        for(int i = 0; i < s.size(); i++){

            if(mp[s[i]].size() == 1){
                return i;
            }

        }

        return -1;
    }
};