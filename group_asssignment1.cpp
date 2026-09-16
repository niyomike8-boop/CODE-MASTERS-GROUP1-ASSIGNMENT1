#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
vector<double> data;

//sum
double get_sum(const vector<double>&arr){
    double sum=0;
    for (double num:arr){
        sum+=num;
    }return sum;
}
//mean
double get_mean(const vector<double>&arr){
    if (arr.empty())return 0;
    return get_sum(arr)/arr.size();
}
//median
double get_median(vector<double> arr){
    if(arr.empty())return 0;
    sort(arr.begin(), arr.end());
    int n=arr.size();
    if(n%2==0){
        return(arr[n/2-1]+arr[n/2])/2.0;
    }else{
        return arr[n/2];
    }
}
//min
double get_min(const vector<double>&arr){
    double min_val=arr[0];
    for(double num:arr){
        if(num<min_val){
            min_val=num;
        }
    }return min_val;
}
//max
double get_max(const vector<double>&arr){
    double max_val=arr[0];
    for(double num:arr){
        if (num>max_val){
            max_val=num;
        }
    }return max_val;
}
int main(){
    vector <double> data={12.5,4.2,9.8,15.1,7.3,2.0};
    cout<<"Sum: "<<get_sum(data)<<endl;
    cout<<"Mean: "<<get_mean(data)<<endl;
    cout<<"Median: "<<get_median(data)<<endl;
    cout<<"Min: "<<get_min(data)<<endl;
    cout<<"Max: "<<get_max(data)<<endl;

    return 0;
}