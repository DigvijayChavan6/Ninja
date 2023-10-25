vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> vec;
    int i=0,j=0,n=a.size(),m=b.size();
    while(i<n&&j<m){
        if(a[i]<b[j]){
            if(vec.empty()||vec.back()!=a[i])vec.push_back(a[i]);
            i++;
        }
        else if(b[j]<a[i]){
            if(vec.empty()||vec.back()!=b[j])vec.push_back(b[j]);
            j++;
        }
        else{
            if(vec.empty()||vec.back()!=b[j])vec.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        if(vec.empty()||vec.back()!=a[i])vec.push_back(a[i]);
        i++;
    }
    while(j<m){
        if(vec.empty()||vec.back()!=b[j])vec.push_back(b[j]);
        j++;
    }
    return vec;
}