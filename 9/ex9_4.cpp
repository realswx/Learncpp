bool find(vector<int>::iterator beg, vector<int>::iterator end, value) {
    for (auto iter = beg; iter != end; iter++)
        if (*iter == value)
            return true;
    return false;
}
