class LRUCache {
  private:
  int capacity;
  list<pair<int,int>> cache;
  unordered_map<int,list<pair<int,int>>:: iterator>map;
  public:
    LRUCache(int cap):capacity(cap) {}
   
        int get(int key){
            if(!map.count(key)) return -1;
            cache.splice(cache.begin(),cache,map[key]);
            return map[key]->second;
        }
    void put(int key, int value) {
    
        if(map.count(key)){
            map[key]->second=value;
            cache.splice(cache.begin(),cache,map[key]);
        }else{
            if(cache.size()==capacity){
                int oldkey=cache.back().first;
                map.erase(oldkey);
                cache.pop_back();
            }
            cache.emplace_front(key,value);
            map[key]=cache.begin();
        }
    }
};