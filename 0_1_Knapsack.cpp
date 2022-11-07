
#include <iostream>
#include<vector>

using namespace std;
int max(int a, int b){
    return (a>b)?a:b; 
}
int knapsack(int weight[],int value[],int n, int W){
    if(n==0||W==0){
        return 0; 
    }
    //if weight is maximum then skip the element 
    if(weight[n-1]>W){
        return knapsack(weight,value,n-1,W);
    }
    /*
    else value[n-1]+recursion for next step  and decrease the W by weight[n-1]; 
    
    */
    else{
        return max(value[n-1]+knapsack(weight,value,n-1,W-weight[n-1]),knapsack(weight,value,n-1,W));
    }
}

int main()
{
    int weight[]={1,2,4,5}; 
    int value[]={5,4,8,6}; 
    int n=sizeof(weight)/sizeof(weight[0]);
    int W; 
    cout<<"Enter the Knapsack weight"<<endl; 
    cin>>W; 
    cout<<knapsack(weight,value,n,W);
    return 0;
    
    //answer of this will be 13; 
}
