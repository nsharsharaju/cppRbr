const arr = [1,5,7,10,-1,0,-3,20,0]

const swap = (i,j) => {
    if(i==j) return           
    arr[i] = arr[i] + arr[j];          
    arr[j] = arr[i] - arr[j];          
    arr[i] = arr[i] - arr[j];
}

let i = -1
arr.forEach((ele,j) => {
    if(ele > 0) {
        i++;
        swap(i,j);
    }
    console.log(arr)
})

console.log(arr)