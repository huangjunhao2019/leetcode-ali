#include<iostream>
// #include<algorithm>
#include<vector>
using namespace std;
//static int num=0;
void quick_sort(vector<int> &a,int left,int right){
    // num++;
    cout<<left<<" "<<right<<endl;
    if(left>=right)
        return;
    int l=left;
    int r=right;
    cout<<"a left "<<a[left]<<endl;
    int mid=a[left];
    cout<<"mid "<<mid<<endl;
    while(l<r){
        while(r>=left && a[r]>=mid){
            r--;
        }
        a[l]=a[r];
        l++;
        while(l<=right && a[l]<=mid){
            l++;
        }
        a[r]=a[l];
        r--;
    }
    a[l]=mid;
    quick_sort(a,left,l-1);
    quick_sort(a,l+1,right);
}
int main(){
    cout<<"hello wordl"<<endl;
    vector<int> a(10);
    for(int i=0;i<10;i++){
        a[i]=10-i;
    }
    quick_sort(a,0,9);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl;
    return 0;
}