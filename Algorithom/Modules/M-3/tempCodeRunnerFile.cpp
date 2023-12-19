for(int i = 0; i<n; i++){
        cout<<i<<"-->";
        for(int j = 0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }