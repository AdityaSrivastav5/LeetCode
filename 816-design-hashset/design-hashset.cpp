class MyHashSet {
public:
vector<bool> v;
    MyHashSet() {
        v.resize(1000001,false);
    }
    
    void add(int key) {
        v[key]=true;
    }
    
    void remove(int key) {
        if(v[key]==true)
        v[key]=false;
    }
    
    bool contains(int key) {
        return v[key];
    }
};
