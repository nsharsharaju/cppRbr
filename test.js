const arr = ['a','b','c','d','e'];

const findSubsets = (arr,tempArr,idx) => {
    if(idx == arr.length) {
        console.log(tempArr)
        return
    }
    tempArr.push(arr[idx])
    findSubsets(arr,tempArr,idx+1)
    tempArr.pop()
    findSubsets(arr,tempArr,idx+1)
}

findSubsets(arr,[],0)