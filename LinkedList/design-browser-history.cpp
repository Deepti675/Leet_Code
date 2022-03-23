//https://leetcode.com/problems/design-browser-history/
class BrowserHistory {
public:
    //doubly linked list storing the string
    list<string>pre_history;
    list<string>:: iterator x;
    
    BrowserHistory(string homepage ) {
        pre_history.push_back(homepage);
        x=pre_history.begin();
    }
    
    void visit(string url) {
        auto remove=x;
        remove++;
        pre_history.erase(remove,pre_history.end());
        pre_history.push_back(url);
        x++;
    }
    
    string back(int steps) {
        while((x!=pre_history.begin())&&steps--)
        {
            x--;
        }
        return *x;
    }
    
    string forward(int steps) {
        while((x!=(--pre_history.end()))&&steps--)
        {
            x++;
        }
        return *x;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
