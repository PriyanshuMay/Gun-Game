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
  var S = readLine();
  try {
    isNaN(S) ? null.throw : console.log(parseInt(S));
  } catch(err) {
    console.log("Bad String");
  }
}

