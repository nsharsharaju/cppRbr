const statements = [
    "The quick brown fox jumps over the lazy dog", //true
    "Mr. Gabe shines his shoes with a black polish.", //false
    "Mr. Jock, TV quiz PhD., bags few lynx.", //true
    "Glib jocks quiz nymph to dwarf.", //false
    "Jackdaws love my big sphinx of quartz.", //true
    "Sphinx of black quartz, judge my vow.", //true
    "Pack my box with five dozen liquor jugs. - Mark Dunn", //true
    "Mr. Jock, TV PhD., bags few lynx.", //false
    "Ross likes to go hiking sometimes, and is an introvert.", //false
    "abcdefghijklumnopqrstvwxyz" //true
];

const alpha = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
let alphaMap = {}
alpha.forEach(ele => {
    alphaMap[ele] = true;
})

console.log(alpha.length)

const output = []

const stringFilter = (statements) => {
    statements.forEach(ele => {
        const statement = ele.toLowerCase().trim()
        statementArray = statement.split('')
        const map = {}
        statementArray.forEach(c => {
            if(!map[c] && alphaMap[c]) {
                map[c] = true;
            }
        })
        let flag = true
        for(let i=0;i<alpha.length;i++){
            if(!map[alpha[i]]) {
                flag = false
                break
            }
        }
        if(flag) output.push(ele)
    })
}

stringFilter(statements)
console.log(output)