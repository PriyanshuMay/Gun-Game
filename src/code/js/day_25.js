function ifPrime(number){
    if (number == 1) return false;
    for (let i=2; i*i <= number; i++) if (number % i == 0) return false; 
    return true;
}

function processData(input) {
    let n = input.split("\n")
    for(let t = 1; t<n.length ; t++ ){
        if (ifPrime(n[t])) console.log("Prime"); 
        else console.log("Not prime");
    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});