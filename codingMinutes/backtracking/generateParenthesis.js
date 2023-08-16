//This code is not complete and it has some bugs. It's in MidWay.
const memory = {
    1: {
        '()': true
    }
}

const generateParenthesis = (n) => {
    let counter = 1
    if(n == counter) return Object.keys(memory[n])
    while(counter<n) {
        memory[counter+1] = {}
        
        for(const ele of Object.keys(memory[counter])) {
            memory[counter+1][`(${ele})`] = true
        }
        for(const ele of Object.keys(memory[counter])) {
                const e1 = `()${ele}`
                if(!memory[counter+1][e1])
                    memory[counter+1][e1] = true
                const e2 = `${ele}()`
                if(!memory[counter+1][e2])
                    memory[counter+1][e2] = true
        }
        counter++;
    }
    return Object.keys(memory[counter])
}

console.log(generateParenthesis(4))