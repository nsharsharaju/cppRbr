const inputArray = ['a','b','c','d','e']
const finalOutput = []

const combinations = (inputArray,output,length,startIndex) => {
    if(length == 1) {
        finalOutput.push([...output.map(item => item)])
        return
    }
    if(startIndex == inputArray.length) return
    output.push(inputArray[startIndex])
    combinations(inputArray,output,length+1,startIndex+1)
    output.pop()
    combinations(inputArray,output,length,startIndex+1)
}

combinations(inputArray,[],0,0)

console.log(finalOutput)