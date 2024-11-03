let list = [];

function insertAtFirst() {
    const data = document.getElementById('dataInput').value;
    list.unshift(data);
    displayList();
}

function insertAtMiddle() {
    const data = document.getElementById('dataInput').value;
    const position = parseInt(document.getElementById('positionInput').value, 10);
    if (position >= 1 && position <= list.length + 1) {
        list.splice(position - 1, 0, data);
        displayList();
    } else {
        alert("Invalid position");
    }
}

function deleteAtFirst() {
    list.shift();
    displayList();
}

function deleteAtMiddle() {
    const position = parseInt(document.getElementById('positionInput').value, 10);
    if (position >= 1 && position <= list.length) {
        list.splice(position - 1, 1);
        displayList();
    } else {
        alert("Invalid position");
    }
}

function displayList() {
    const display = document.getElementById('listDisplay');
    display.innerHTML = "List: " + list.join(" -> ") + " -> NULL";
}
