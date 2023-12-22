class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int , int>>v;
        for(int i=0;i<N;i++){
            v.push_back({F[i] ,i+1});
        }
        sort(v.begin() , v.end());
        vector<int>ans;
        int a=v[0].second;
        int b=v[0].first;
        ans.push_back(a);
        for(int i=0;i<v.size();i++){
            if(S[v[i].second-1 ]>b){
                ans.push_back(v[i].second);
                b=v[i].first;
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
        
        
        
    }
};
