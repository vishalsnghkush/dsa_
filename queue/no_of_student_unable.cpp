// class Solution {
//     public:
//         int countStudents(vector<int>& students, vector<int>& sandwiches) {
//             queue<int>q;
//             int n=students.size();
//             for(int i=0;i<n;i++){
//                 q.push(students[i]);
//             }
//             // now i have queue of students now my task is to do the constition acc question
//             int i=0; // for trivarsing the student array
//             int count=0;
//             while(q.size()>0 && q.size()!=count){
//                 if(q.front()==sandwiches[i]){
//                     count=0;
//                     i++;
//                     q.pop();
//                 }
//                 else{
//                     count++;
//                     q.push(q.front());
//                     q.pop();
//                 }
//             }
//             return q.size();
//         }
//     };