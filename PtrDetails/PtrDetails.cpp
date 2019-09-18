#include <iostream>

template <class T>
class PtrDetails{
    public:
        PtrDetails(T *pointer, int size);
        int refcount = 0;
        T *memPtr;
        bool isArray;
        int arraySize;


    private:
};

template <class T>
PtrDetails<T>::PtrDetails(T *pointer, int size){
    memPtr = pointer;
    if (size > 0){
        arraySize = size;
        isArray = true;
    }else{
        isArray = false;
    }
};

template <class T>
bool operator==(const PtrDetails<T> &obj_1, const PtrDetails <T> &obj_2){

}

int main(){

}