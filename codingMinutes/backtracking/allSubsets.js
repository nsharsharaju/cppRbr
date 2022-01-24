const input = ['a','b','c']
const finalOutput = []

const findSubsets = (input,output,startIndex) => {
    if(startIndex == input.length) {
        finalOutput.push([...output.map(ele => ele)])
        return
    }
    output.push(input[startIndex])
    findSubsets(input,output,startIndex+1)
    output.pop()
    findSubsets(input,output,startIndex+1)
}

findSubsets(input,[],0)

console.log(finalOutput)