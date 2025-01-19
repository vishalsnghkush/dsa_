//class Solution {
    // // to check if it is square root no or not
    // bool isperfectsqrt(int n){
    //     int c=sqrt(n);
    //     if(c*c==n) return true;
    //     else return false;
    // }
//public:
//     bool judgeSquareSum(int c) {
//         int x=0;
//         int y=c;
//         while(x<=y){
//             if(isperfectsqrt(x) && isperfectsqrt(y)){
//                 return true;
//             }
//             else if(!isperfectsqrt(y)){
//                 y=int(sqrt(y))*int(sqrt(y));// if y is not perfect sqr no then make it to the it's lowest perfecr sqrt no;;
//                 x=c-y;
//             }
//             else{
//                 // if x is no then it increases by 1 next sqrt no.
//                 x=int(sqrt(x)+1) * int(sqrt(x)+1);
//                 y=c-x;
//             }
//         }
//         return false;
//     }
// };