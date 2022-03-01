//https://leetcode.com/problems/design-hashset/
class MyHashSet {
    int Num_Buk;vector<vector<int>>Buk;
    int Hash(int key)
    {
        return key%Num_Buk;
    }
public:
    
    MyHashSet(){
        Num_Buk=15000;
        Buk=vector<vector<int>>(Num_Buk,vector<int>{});
    }
    void add(int key) {
       int i=Hash(key);
        if(find(Buk[i].begin(),Buk[i].end(),key)==Buk[i].end())
            Buk[i].push_back(key);
    }
    
    void remove(int key) {
       int i=Hash(key);
        auto it=find(Buk[i].begin(),Buk[i].end(),key);
           if(it!=Buk[i].end())
               Buk[i].erase(it);
     
    }
    
    bool contains(int key) {
        int i=Hash(key);
        if(find(Buk[i].begin(),Buk[i].end(),key)==Buk[i].end())
            return false;
        else
            return true;
    
       }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
