
/*
Linear-> stack queue array linked list
Non Linear-> Trees ,Hashmaps

clustering/grouping -> you will be having some elemneet and you need to add them/
segrate them in different groups or cluster

and sometimes we might need to identify the group any elemnet belong to 

let's says you have->
a,b,c,d,e..........f,g,h

let says that a,b,c,d,e are in group 1 and f,g,h are in group 2 so
they are treated as two different connected component



TERMINOLOGIES-?

1-> Leader/Parent of the group-> To uniquly identify a group 
we will pick any element from the group and make it the representative / leader
/ parent of the group

HOW TO USE? DSU(or) uniou find data set


What function does need to support-?
a.) Union(a,b);-> add the group where elemenrnt b belong to the group where element a belong or vice versa
b.) Find(x)/get(x) -> this will be used to find where group x belong to we will return the paremt of the gropu that x belong to


Approch 1-> Represent every group as a set
Approch 2-> Can we use array (parent) name?
index reperented actual elemnet
parent[i] denotes which group it belong to

*/


/*
int find(x){
return par[x];
}

void union(a,b){
a=find(a)
b=find(b);
for(int i=0;i<n;i++){
if(par[i]==b){
par[i]=a
}
}
}
*/