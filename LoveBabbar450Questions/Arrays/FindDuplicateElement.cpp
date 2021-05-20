int findDuplicate(vector<int>& nums) {        
      sort(nums.begin(),nums.end());
      int i=0;
      for(i=0;i<nums.size();i++)
          if((nums[i] ^ i) ==0)break;          
      return i;   
    }

//Time Complexity : nlogn

int findDuplicate(vector<int>& nums) {
        set<int> s;
        
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return -1;
    }

//Time Complexity : n