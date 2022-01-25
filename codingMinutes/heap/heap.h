#include<vector>
using namespace std;

class Heap{
    vector<int> v;
public:
    Heap(int default_size=10){
        v.reserve(default_size+1);
        v.push_back(-1);
    };

    void push(int data){
        //add data to end of the head
        v.push_back(data);

        int idx = v.size() - 1;
        int parent = idx/2;

        while(idx>1 and v[idx]<v[parent]) {
            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }

    void heapify(int idx) {
        int maxIdx = v.size()-1;
        if(2*idx > maxIdx) return;
        int root = v[idx];
        int left = v[2*idx];
        if((2*idx+1) <= maxIdx) {
            int right = v[2*idx+1];
            if(left > root && right > root) {
                return;
            }
            else {
                if(left > right) {
                    swap(v[idx],v[2*idx+1]);
                    heapify(2*idx+1);
                    return;
                }
                else{
                    swap(v[idx],v[2*idx]);
                    heapify(2*idx);
                    return;
                }
            }
        } else {
            if(root < left) return;
            else {
                swap(v[idx],v[2*idx]);
                heapify(2*idx);
                return;
            }
        }
    }

    int top() {
        int idx = v.size() - 1;
        if(idx > 0) return v[1];
        else return -1;
    }

    void pop() {
        int idx = v.size()-1;
        if(idx == 0) return;
        else if(idx == 1) v.pop_back();
        else {
            swap(v[1],v[idx]);
            v.pop_back();
            heapify(1);
            return;
        }
    }

    bool empty(){
        return v.size() == 1;
    }
};