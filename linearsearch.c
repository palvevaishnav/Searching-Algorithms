
// here a is the array whose length  is l.
// target is the element to be searched

//Time complexity: O(N)
//Auxiliary Space: O(1)

void Linear (int* a,int l,int t){
    
    if(l==0){
        // means the array is empty.so no element.
        return -1;
    }
    else if(a[l-1]==t){
        // the worst case.
        return (l-1);
    }
    else{        
        for(int i=1;i<l-1;i++){
            if(a[i] == target){
                 // if its true then we found the element we were looking for and will return the index.
                return i;
            }
        }
    // if this function completes whole for loop without returning any thing then it means that thhe element is not the array , so will return -1
     return -1;
}

// in  javascript
function linear (a,l,t){
    let i
    for(i=0;i<l;i++){
        if( a[i] == t){
            return i
        }
    }
    return -1
}



// in python:

def linear(a,l,t):
    for i in (0,l):
        if (a[i] == t):
            return i
    return -1



