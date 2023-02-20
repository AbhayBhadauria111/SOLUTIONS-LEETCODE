class SubrectangleQueries {
public:
    vector<vector<int>>rect;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        for(auto x:rectangle)rect.push_back(x);
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        int i=row1;
        int j=col1;
        while(!(i==row2 and j==col2))
        {
            if(j>col2){i++;j=col1;continue;}
            rect[i][j]=newValue;
            j++;
        }
        rect[i][j]=newValue;
    }
    
    int getValue(int row, int col) {
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */