//Node.js 10.14.0
//Plain Javascript and Node.js is supported
// html/css is not supported here 


var readline = require('readline');
var resp = "";

var num = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
console.log("\nProgram hobbies in Jsnode")
num.question("Escolha,1.musicas 2.desenhos\n", function(answer) {
    var resp = answer
 console.log("\nSua resposta '" + resp + "");
 if (resp < 18) {
  greeting = "musicas";
} else {
  greeting = "desenhos";
}
});