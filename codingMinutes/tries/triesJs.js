let words = ['apple','ape','orange','harsha','ravi','news','new']

const Node = (data) => {
    return {
        data,
        map: {},
        terminator: false
    }
}

const insertWord = (root,word) => {
    const wordArray = word.split('');
    let trav = root
    wordArray.forEach(c => {
        if(!trav.map[c]) trav.map[c] = Node(c)
        trav = trav.map[c]
    })
    trav.terminator = true
    return;
} 

const search = (root,word) => {
    const wordArray = word.split('')
    let trav = root
    for(let i=0;i<wordArray.length;i++) {
        let c = wordArray[i]
        if(trav.map[c]) {
            trav = trav.map[c]
        } else {
            return false
        }
    }
    return trav.terminator
}

const root = Node('&')
words.forEach(word => {
    insertWord(root,word)
})
const queries =  ['apple','ape','orange','harsha','subha','new']
queries.forEach(query => {
    console.log(search(root,query))
})