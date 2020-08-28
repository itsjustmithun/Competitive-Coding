'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the appendAndDelete function below.
function appendAndDelete(s, t, k) {
    var end = 0;

    for (var i = 0; i < Math.min(t.length, s.length); i++) {
        if (s[i] == t[i]) {
            end++;
        } else {
            break;
        }
    }

    var maxIter = s.length + t.length;
    var minIter = maxIter - (2 * end);


    if ((k >= minIter) & ((k - minIter) % 2 == 0)) {
        return "Yes";
    } else if (k >= maxIter) {
        return "Yes";
    } else {
        return "No";
    }

}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    const t = readLine();

    const k = parseInt(readLine(), 10);

    let result = appendAndDelete(s, t, k);

    ws.write(result + "\n");

    ws.end();
}
