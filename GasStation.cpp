#include <iostream>
#include <vector>
using namespace std;

int gasStation(vector<int> &gas, vector<int> &cost)
{
    int totGas = 0;
    int totCost = 0;

    // unique solution always exists
    int currGas = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        totGas += gas[i];
        totCost += cost[i];
        currGas += (gas[i] - cost[i]);
        if(currGas < 0){
            start = i+1;
            currGas = 0;
        }
    }
    return totGas < totCost ? -1 : start;
}
int main()
{
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
   int result = gasStation(gas,cost);
    cout<<result;
    return 0;
}