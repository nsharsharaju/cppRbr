let input =  [2,3,6,7]
let finalOutput = []

const combinationsSum = (input,output,target) => {
    if(target == output.reduce((prev,curr) => prev+curr,0)){
        finalOutput.push([...output.map(ele => ele)])
    }
    if(target < output.reduce((prev,curr) => prev+curr,0)) return;
    for(let i=0;i<input.length;i++) {
        output.push(input[i])
        combinationsSum(input,output,target)
        output.pop()
    }
}

combinationsSum(input,[],7)

console.log(finalOutput)