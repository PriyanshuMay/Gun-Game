'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let N = parseInt(readLine());
    let patt = new RegExp("@gmail.com");
    let list = [];
    for(let i = 0;i < N; i++){
        let input = readLine().split(' ');
        let name  = input[0];
        let email = input[1];
        if(patt.test(email)) list.push(name)
    }
    
    list.sort().forEach(function(name){console.log(name)});
}
