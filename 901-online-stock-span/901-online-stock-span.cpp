class StockSpanner {
public:
    stack<pair<int, int>> st;
    int i=0;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        while(st.size() && price>=st.top().first){
            st.pop();
        }
        int x=-1;
        if(st.size()){
            x=st.top().second;
        }
        st.push({price, i});
        i++;
        return i-x-1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */