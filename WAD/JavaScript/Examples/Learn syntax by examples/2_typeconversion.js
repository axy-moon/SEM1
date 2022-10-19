//type conversion 
const birthYear = "2001";
console.log(birthYear * 8);  // Output is number * 8 16008
console.log(birthYear + 8); // Output is concatenation.
console.log((birthYear), Number(birthYear));

console.log(birthYear + 8); // Output is concatenation.

const personName = "Jonas";
console.log(Number(personName));   // output is NaN  :  Not A Number 
console.log(NaN);
console.log(typeof NaN);
//https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/NaN


console.log(String(2022));



//type coercion  (forced conversion by javascript itself)
// happens whenver an operator is dealing with two operands of different data types
console.log('I am in ' + 1 + 'st Year of MCA at PSGTech');
// + operator has triggered a type coercion to convert the number 1 to string '1'
// this is similar to console.log('I am in ' + String(1)  + 'st Year of MCA at PSGTech');
let years = 2022;
let age = years - Number(birthYear);
console.log(' I am ' + age + " Years old");

//But -, * and / operators behave differently . Converts strings to numbers and perform expression evaluation.

// Guess the output
let n = '100';
n = n - 1;
console.log(n);


// Understand the conversion/coercion taking place in the following expressions 
// print the result of the expression using console.log() the output

// 2 - 3 - '5'   
// '2' - 3 - '4'   //-5
//  2 + 3 + '4'   //54
// '9' - '4' -'2' + '3'  //33
// even if the numbers are  having blank spaces '-, *, / ' operators treat them as actual number.
//5 + 6 + '4' + 9 - 4 - 2   //1143
//'123' < 57  //false
// Detailed look in document.





