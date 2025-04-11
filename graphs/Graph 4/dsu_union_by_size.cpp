/*
void unoin(a,b){
a=find(a);
b=find(b);
if(size(a)<size(b)){
size(b)+=size(a);
par[b]=a
}
else{
size(a)+=size(b);
par[a]=b
}
}

int find(x){ ... by recurrsion
if(par[x]==x)return x;
return find(par[x]); 
}
*/