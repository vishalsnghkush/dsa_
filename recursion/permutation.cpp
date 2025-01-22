// class Solution {
//     string helper(string str,int k,string ans){
//         int n = str.length();
//         if (n==0) return ans;
//         int fact=1;
        
//         // now  i have factorial of n-1
//         for(int i=2;i<=n-1;i++){
//             fact*=i;
//         }
//         // calculating the index;
//         int indx=k/fact;
//         if(k%fact==0) indx--;
//         // now calculate the 
//         char ch=str[indx];//store the that char into a ch
//         string left=str.substr(0,indx);
//         string right=str.substr(indx+1);
//         int q=1;
//         if(k%fact==0) q=fact;
//         else q=k%fact;
//         return helper(left+right,q,ans+ch); 
//     }
// public:
//     string getPermutation(int n, int k) {
//         string str="";
//         for(int i=1;i<=n;i++){
//             str+=to_string(i);
//         }
//         // now i have string of all the required degit;;
//         return helper(str,k,"");
//     }
// };