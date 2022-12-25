long long int MissingNo(vector<vector<int>>& matrix) {
        size_t n = matrix.size();
        size_t x_0 = 0, y_0 = 0;
        
        vector<int64_t> row_red(n);
        vector<int64_t> col_red(n);
        
        int64_t left_diag_red = 0;
        int64_t right_diag_red = 0;
        
        for(size_t i = 0; i < n; ++i) {
            left_diag_red += matrix[i][i];
            right_diag_red += matrix[i][n - i - 1];
            
            for(size_t j = 0; j < n; ++j) {
                if(!matrix[i][j]) {
                    x_0 = i;
                    y_0 = j;
                }
                
                row_red[i] += matrix[i][j];
                col_red[j] += matrix[i][j];
            }
        }
        
        int64_t col_req_sum = (y_0 ? col_red[y_0 - 1] : col_red[y_0 + 1]);
        int64_t row_req_sum = (x_0 ? row_red[x_0 - 1] : row_red[x_0 + 1]);
        int64_t diff = col_req_sum - col_red[y_0];
        
        if (diff <= 0 || diff != row_req_sum - row_red[x_0]) {
            return -1;
        } 
        
        if(x_0 == y_0) {
            left_diag_red += diff;
        }
        
        if(x_0 == (n - y_0 - 1)) {
            right_diag_red += diff;
        }
    
        if (left_diag_red != right_diag_red) {
            return -1;
        }
        
        row_red[x_0] += diff;
        col_red[y_0] += diff;
        
        for(int64_t num : row_red) {
            if(num != left_diag_red) {
                return -1;
            }
        }
        
        for(int64_t num : col_red) {
            if(num != left_diag_red) {
                return -1;
            }
        }
        
        return diff;
