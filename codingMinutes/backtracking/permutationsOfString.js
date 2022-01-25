const arr = ['a', 'b', 'c', 'd', 'e', 'f']

const swap = (arr, i, j) => {
    const temp = arr[i]
    arr[i] = arr[j];
    arr[j] = temp;
}

const permute = (arr, i) => {
    if (i == arr.length) {
        console.log(arr)
        return
    }
    for (let j = i; j < arr.length; j++) {
        swap(arr, i, j);
        permute(arr, i + 1);
        swap(arr, i, j)
    }
}

permute(arr, 0);