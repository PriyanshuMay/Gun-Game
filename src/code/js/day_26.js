function processData(input) {
    let data = input.split("\n");
    let ret = data[0].split(" ");
    let due = data[1].split(" ");
    let ans = 0;
    if (ret[2] > due[2]) ans = 10000;
    else if (ret[2] == due[2]) {
    if (ret[1] > due[1]) ans = 500 * (ret[1] - due[1]);
    else if (ret[1] == due[1] && ret[0] > due[0]) ans = 15 * (ret[0] - due[0]);      
    }
    console.log(ans);
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
