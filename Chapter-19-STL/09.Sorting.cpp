// so lets say we have a array 
// {1,4,5,3,2}
// we want to sort it from least to greatest

sort(a, a+n); 
// for our example we will write sort(a, a+5)
// a represents the starting point and a+n represents the not include index which is right after the last element 

// because of this now there is no need to use bubble sort, insert sort or any other sort 

// if i only want to sort the last 5, 3, 2 sorted 
sort(a+3, a+6); // this will do the job

sort(a, a+n, greater<int>); // this will make the sorting in decending order

// lets say 
pair<int, int> = {{1, 2}, {2, 1}, {4, 1}};
// sort it according to second element 
// and if second is same, then sort it according
// to first element but is desecnding order
sort(a, a+n, comp);
// {4, 1}, {2, 1}, {1, 2}

bool comp(pair<int, int>p1, pair<int ,int>p2) {
    if(p1.second < p2.second){
        return true;
    }else if{p1.second == p2.second}{
        if(p1.first>p2.first){
            return true;
        }
    }
    return false;
}