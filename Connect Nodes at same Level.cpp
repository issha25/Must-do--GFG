void connect(Node *p)
{
    queue<Node*> q;
    q.push(p);
    q.push(NULL);
    while(!q.empty()){
        Node* prev=q.front();
        q.pop();
        if(prev != NULL){
            prev->nextRight=q.front();
            if(prev->left)
                q.push(prev->left);
            if(prev->right)
                q.push(prev->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    
   // Your Code Here
}
