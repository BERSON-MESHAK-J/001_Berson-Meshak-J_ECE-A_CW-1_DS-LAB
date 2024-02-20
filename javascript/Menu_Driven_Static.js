const readline = require('readline');

function search(arr, n) {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the number you want to search: ", (a) => {
        if (arr.includes(parseInt(a))) {
            console.log("The element is present.");
        } else {
            console.log("The element is not present.");
        }
        rl.close();
    });
}

function reverse(arr, n) {
    console.log(arr.reverse().join(' '));
}

function update(arr, n) {
    arr.forEach((val, idx) => {
        if (idx % 2 === 0) {
            arr[idx] *= 2;
        } else {
            arr[idx] += 5;
        }
    });
    console.log(arr.join(' '));
}

function insertion(arr, n) {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the position at which you want to enter a number: ", (k) => {
        rl.question("Enter the element you want to enter: ", (element) => {
            arr.splice(parseInt(k) - 1, 0, parseInt(element));
            console.log(arr.join(' '));
            rl.close();
        });
    });
}

function deleteElement(arr, n) {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the position at which you want to delete the element: ", (l) => {
        arr.splice(parseInt(l) - 1, 1);
        console.log(arr.join(' '));
        rl.close();
    });
}

function main() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the size of the array: ", (n) => {
        let arr = [];
        let brr = [];
        let count = 0;

        rl.on('line', (input) => {
            arr.push(parseInt(input));
            brr.push(parseInt(input));
            count++;

            if (count === parseInt(n)) {
                rl.removeAllListeners('line');
                menu(arr, brr, n);
            }
        });
    });
}

function menu(arr, brr, n) {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("\nMenu\n1. Search\n2. String Reversal\n3. Update\n4. Insertion\n5. Deletion\n0. Exit\nEnter your option: ", (m) => {
        switch (parseInt(m)) {
            case 1:
                search(arr, n);
                break;
            case 2:
                reverse(arr, n);
                break;
            case 3:
                update(arr, n);
                break;
            case 4:
                insertion(arr, n);
                break;
            case 5:
                deleteElement(arr, n);
                break;
            case 0:
                rl.close();
                break;
            default:
                console.log("Wrong number, run the program again.");
                menu(arr, brr, n);
                break;
        }
    });
}

main();
