class StockSpanner {

    stack<pair<int,int>> s;
    int i=0;

public:
    StockSpanner() {

    }

    int next(int price) {

        while(!s.empty() && s.top().first<=price)
            s.pop();

        int res = s.empty()? i+1:i-s.top().second;
        s.push({price,i});
        i++;
        return res;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
