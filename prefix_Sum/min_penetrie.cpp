// class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int n=customers.length();
//         int pre[n+1]; // no of No(N) before kth hour
//         int suf[n+1]; // no of  yes(Y) after including kth hour
//         // e.g for the pre is Y N Y Y so 
//         //                    0 0 1 1 1
//         // and for the suffix which is for the yes
//         //                    Y N Y Y
//         //                    3 2 2 1 0   
//         pre[0]=0;    
//         for(int i=0;i<n;i++){
//             int count=0;   // count is required because unlike array in string i can't directly add the current no
//             if(customers[i]=='N') count++;
//             pre[i+1]=pre[i]+count;
//         }
//         // for the suffix
//         suf[n]=0;
//         for(int i=n-1;i>=0;i--){
//             int count=0;
//             if(customers[i]=='Y')count++;
//             suf[i]=suf[i+1]+count;
//         }
//         int minPen=INT_MAX;
//         // now add them
//         for(int i=0;i<=n;i++){
//             pre[i]+=suf[i];
//             int pen=pre[i];
//             minPen=min(minPen,pen);
//         }
//         for(int i=0;i<=n;i++){
//             int pen=pre[i];
//             if(pen==minPen) return i; // i denode the hour
//         }
//         return 0;
//     }
// };