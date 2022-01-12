const Node = (data) => {
    return {
        data,
        left: null,
        right: null
    }
}

const input = () => {
    const data = [1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1];
    let currentIndex = 0
    const giveInput = () => {
        return data[currentIndex++];
    }
    return giveInput
}

const giveInput = input()

const buildTree = () => {
    const data = giveInput();
    if(data == -1) return null
    const n = Node(data)
    n.left = buildTree()
    n.right = buildTree()
    return n;
}

const preOrderTraversal = (root) => {
    if(root == null) return;
    process.stdout.write(`${root.data} `)
    preOrderTraversal(root.left)
    preOrderTraversal(root.right)
    return;
}

const levelOrderTraversal = (root) => {
    if(!root) return;
    const q = [];
    q.push(root);
    while(q.length) {
        const temp = q.shift()
        process.stdout.write(`${temp.data} `)
        if(temp.left) q.push(temp.left)
        if(temp.right) q.push(temp.right);
    }
    console.log()
}

const root = buildTree()
preOrderTraversal(root)
console.log()
levelOrderTraversal(root)