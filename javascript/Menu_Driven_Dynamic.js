function outputArray(a) {
    console.log("Array elements: " + a.join(' '));
}

function linearSearch(a) {
    let n = parseInt(prompt("Enter n: "));
    let flag = false;
    for (let i = 0; i < a.length; i++) {
        if (a[i] === n) {
            console.log("Entered element " + a[i] + " found at index " + i);
            flag = true;
        }
    }
    if (!flag) {
        console.log("Entered element " + n + " not found in the array");
    }
}

function reverseArray(a) {
    a.reverse();
    console.log("Reversed array: " + a.join(' '));
}

function updateArray(a) {
    for (let i = 0; i < a.length; i++) {
        if (i % 2 === 0) {
            a[i] *= 2;
        } else {
            a[i] += 5;
        }
    }
    console.log("Updated array: " + a.join(' '));
}

function insertElement(a) {
    let index = parseInt(prompt("Enter index you want to insert element in: "));
    let element = parseInt(prompt("Enter element you want to insert: "));
    a.splice(index, 0, element);
    console.log("Array after insertion:");
    outputArray(a);
}

function deleteElement(a) {
    let index = parseInt(prompt("Enter index to be deleted: "));
    if (index < 0 || index >= a.length) {
        console.log("Invalid index");
        return;
    }
    a.splice(index, 1);
    console.log("Array after deletion:");
    outputArray(a);
}

function main() {
    let size = parseInt(prompt("Enter size of array: "));
    let a = [];
    console.log("Enter elements in the array:");
    for (let i = 0; i < size; i++) {
        let element = parseInt(prompt("Enter element: "));
        a.push(element);
    }
    outputArray(a);

    let choice;
    do {
        console.log("\nMenu:");
        console.log("1. Linear Search");
        console.log("2. Reverse Array");
        console.log("3. Update Array");
        console.log("4. Insert Element");
        console.log("5. Delete Element");
        console.log("6. Exit");

        choice = parseInt(prompt("Enter your choice: "));
        switch (choice) {
            case 1:
                linearSearch(a);
                break;
            case 2:
                reverseArray(a);
                break;
            case 3:
                updateArray(a);
                break;
            case 4:
                insertElement(a);
                break;
            case 5:
                deleteElement(a);
                break;
            case 6:
                console.log("Exiting program.");
                break;
            default:
                console.log("Invalid choice. Please enter a valid option.");
                break;
        }
    } while (choice !== 6);
}

main();
