class LRUCache {
public:
    int cap;
    list<pair<int,int>>l;
    vector<list<pair<int,int>>::iterator>mp;
    LRUCache(int capacity) {
        cap= capacity;
        mp.assign(1e4+1, end(l));
        
    }
    
    int get(int key) {
        if(mp[key]== end(l))
        {
            return -1;
        }
        int ans= mp[key]-> second;
        l.erase(mp[key]);
        l.push_back({key,ans});
        mp[key]= --end(l);
        return ans;
        
    }
    
    void put(int key, int value) {
        if(mp[key]== end(l)){
            l.push_back({key,value});
            mp[key]= --end(l);
            if(l.size()> cap){
                int keyToDel=l.front().first;
                l.pop_front();
                mp[keyToDel]=end(l);
                
            }
            
        }
        else{
            l.erase(mp[key]);
            l.push_back({key,value});
            mp[key]= --end(l);
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */