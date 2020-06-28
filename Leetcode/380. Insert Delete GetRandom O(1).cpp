/*
380. Insert Delete GetRandom O(1)

Design a data structure that supports all following operations in average O(1) time.

1. insert(val): Inserts an item val to the set if not already present.
2. remove(val): Removes an item val from the set if present.
3. getRandom: Returns a random element from current set of elements (it's guaranteed that at least one element exists when this method is called).
    Each element must have the same probability of being returned.
 

Example:

// Init an empty set.
RandomizedSet randomSet = new RandomizedSet();

// Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomSet.insert(1);

// Returns false as 2 does not exist in the set.
randomSet.remove(2);

// Inserts 2 to the set, returns true. Set now contains [1,2].
randomSet.insert(2);

// getRandom should return either 1 or 2 randomly.
randomSet.getRandom();

// Removes 1 from the set, returns true. Set now contains [2].
randomSet.remove(1);

// 2 was already in the set, so return false.
randomSet.insert(2);

// Since 2 is the only number in the set, getRandom always return 2.
randomSet.getRandom()
--------------------SOLUTION-----------------*/

class RandomizedSet {
    vector<int> nums;
    unordered_map<int, int> positions;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(positions.find(val) != positions.end())
            return false;
        nums.push_back(val);
        positions.insert({val, nums.size()-1});
        return true;
    }
    
   bool remove(int val) {
        if(positions.find(val) == positions.end())
            return false;
        int pos = positions[val];
        nums[pos] = nums[nums.size()-1];
        positions[nums[pos]] = pos;
        nums.pop_back();
        positions.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
