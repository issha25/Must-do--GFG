void util(Node* root,int curr,int hd,map<int,pair<int,int>> &m){
    if(root==NULL){
        return;
    }
    if(m.find(hd)==m.end()){
        m[hd]=make_pair(root->data,curr);
    }
    else{
        pair<int,int>p=m[hd];
        if(p.second<=curr){
            m[hd].first=root->data;
            m[hd].second=curr;
        }
    }
    util(root->left,curr+1,hd-1,m);
    util(root->right,curr+1,hd+1,m);
}

vector <int> bottomView(Node *root)                                                          //function to print bottom view begins.
{
    map<int,pair<int,int>> m;
    vector<int>v;
    util(root,0,0,m);
    for(auto it=m.begin();it!=m.end();it++){
        pair<int,int> p = it->second;
        v.push_back(p.first);
    }
    return v;
   // Your Code Here
}

