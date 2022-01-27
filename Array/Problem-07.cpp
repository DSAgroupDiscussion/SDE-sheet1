
// Q. common elements from n sorted array considering same m size of each array

vector<int> solve(){
	int n,m; cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i][0]]++;
		for(int j=1;j<m;j++){
			if(arr[i][j-1]!=arr[i][j]){
				mp[arr[i][j]]++;
			}
		}
	}
	vector<int> v;
	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second==n){
			v.push_back(it->first);
		}
	}
	sort(v.begin(),v.end());
	return v;
}
