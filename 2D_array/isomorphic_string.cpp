// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         vector<int>v(150,1000);// assigning the value 1000 to the vector  // so  that it does not match with the index;
//         if(s.length()!=t.length()) return false;
//         // now let do the indexing and all;
//         for(int i=0;i<s.length();i++){
//             int indx=(int)s[i];
//             if(v[indx]==1000 ) v[indx]=s[i]-t[i];
//             else if( (v[indx]!=s[i]-t[i])) return false;}
            
//          for(int i=0;i<150;i++){
//             v[i]=1000;
//          }
//              for(int i=0;i<t.length();i++){
//             int indx=(int)t[i];
//             if(v[indx]==1000 ) v[indx]=t[i]-s[i];
//             else if( (v[indx]!=t[i]-s[i])) return false;}
            
//             return true;
//     }
// };