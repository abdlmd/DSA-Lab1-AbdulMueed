#include<iostream> // IMPORTS
#include<vector>
using namespace std;
vector<int> findAllIndices(vector<int> arr,int key){ // FUNCTION DEFINED
      vector<int> indices;
  
  
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key) { //CHECKS IF THE GIVEN ELEMENT IS PRESENT IN THIS INDEX OF THE ARRAY
            indices.push_back(i);

        }
    }
    return indices;
}
int main(){ // MAIN FUNCTION
    vector<int> multipleOccurences={};
    int key=2;
    vector<int> result=findAllIndices(multipleOccurences,key); // FUNCTION CALLS
    if(result.empty() && !multipleOccurences.empty()){ // IF NO KEY IS FOUND, IT TELLS US
        cout<<"The element "<<key<<" never appears in the array";
    }
    else if(!result.empty()){ // IF KEY IS FOUND, IT OUTPUTS ALL THE INDEXES IT WAS FOUND ON
        cout<<"The key is present on the following indices: "<<endl;
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";

        }
    }else{ // TELLS US IF ARRAY PASSED EMPTY
        cout<<"The array passed was empty!";
    }
}