vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>result;
    sort(a.begin(),a.end());//array got sortes in ascending order
    result.push_back(a[n-2]);
    result.push_back(a[1]);
    return result;
}
