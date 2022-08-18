


// BINARY SEARCH METDOD USING JAVASCRIPT.

function binary(a,t){
    let c = a.length;
    let start=0;
    let end=c-1;
    

    while(end >= start){
        let mid=start +(end-start)/2;
        mid=Number.parseInt(mid);
        if(t>a[mid]){
            start=mid+1;
        }
        else if(t<a[mid]){
            end=mid-1;
        }
        else{
            console.log("the index of "+ t + " is "+ mid);
            return;
        }
    }
    console.log("The element not found");
    return;
}



let a=[2,6,9,16,18,22,23,27,35,46,57,76,90];
let b=90;
binary(a,b);
// console.log(a[12])

// */
