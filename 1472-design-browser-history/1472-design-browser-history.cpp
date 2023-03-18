class BrowserHistory {
public:
    stack<string>curr;
    stack<string>frwd;
    BrowserHistory(string homepage) {
        curr.push(homepage);
    }
    
    void visit(string url) {
        while(!frwd.empty()){
            frwd.pop();
        }
        curr.push(url);
    }
    
    string back(int steps) {
        
        while(steps-- && curr.size()>1 ){
            frwd.push(curr.top());
            curr.pop();
        }
        return curr.top();
    }
    
    string forward(int steps) {
        
        while(steps-- && !frwd.empty()){
            curr.push(frwd.top());
            frwd.pop();
        }
        return curr.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */