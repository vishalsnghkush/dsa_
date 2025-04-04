// // all element of left <= all element of right

// // size of left and right should be same or the diff should be 1

// class MedianFinder {
//     public:
//         priority_queue<int>left; // max heap
//         priority_queue<int,vector<int>,greater<int>>right; // min heap
//         MedianFinder() { // default constructor
            
//         }
        
//         void addNum(int num) {
//             if(left.size()==0 || num<left.top()) left.push(num);  // push tb krna hai jab ki left wala max heap wala agar khali hai then left me push kr do or num left top se bada ho then left me puush kr dooo
            
//             else right.push(num);
    
//             // if 
//             if(left.size()>right.size()+1) {
//                 right.push(left.top());
//                 left.pop();
//             }
    
//             if(right.size()>left.size()+1) {
//                 left.push(right.top());
//                 right.pop();
//             }
    
//         }
        
//         double findMedian() {
//             if(left.size()==right.size()) return (left.top() + right.top())/2.0;
    
//             else {
//                 if(left.size()>right.size()) return left.top();
//                 else return right.top();
//             }
//         }
//     };
    
//     /**
//      * Your MedianFinder object will be instantiated and called as such:
//      * MedianFinder* obj = new MedianFinder();
//      * obj->addNum(num);
//      * double param_2 = obj->findMedian();
//      */