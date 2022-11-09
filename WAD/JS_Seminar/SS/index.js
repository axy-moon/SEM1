//go with our line
//alert



//alert(4 * 5);


/*
rule 1: no javascript keywords as an variable.
rule 2: no variable can start with number.
rule 3: no variable can include '-' or spaces.
rule 4: variables are case sensitive.
rule 5: use camel case variables -from lower to upper case.
rule 6: use meaningful variables.

*/

//alert("Helllo guys");

// let lastName = "John";
// let native = "CBE";

// console.log("I'm " + firstName + "my son" + lastName + " and I'm from " + native);

// let numer = 5;
// let number = 4;
// let addition = number + numer;
// console.log(addition);

// let lastName;
// console.log(lastName);
// const blood = " ";


// console.log(blood);

// let weight = null; //null
// console.log(weight);
// let age = 25; // numberi

// let isYoung = true // boolean
//document.getElementById("demo").innerHTML = 7 + 6;


// console.log(blood);

// //Logging in
// console.log("I am here " + blood);


//object

// let person = {
//         name: "sree",
//         
//         gender: "Male",
//         address: "Coimbatore, 641019",
//         siblings: {
//             brother: "chinna",
//             sister: "navan"

//         }
//     }
//.dotnotation

// console.log(person.name);
// console.log(person.siblings.brother);


//.bracketnotation 

// console.log(person['gender']);

//array

// let favColors = ["White", "green", "red", "Purple"]
// favColors[4] = 45;

// console.log(favColors[0].length);
// console.log(favColors[2].length);
// console.log(favColors[4].length);


// function
//without parameter
// function aud() {
//     let name2 = "sreeee";
//     console.log(name2);
//     console.log(name2.length);
// }
// //without arguments
// aud()

// //function multiple
// //with parameter
// function mult(number1, number2) {
//     console.log(number1 * number2);

// }
// // with arguments
// mult(20, 30);
// mult(2, 3);

// //function with parameters(name)

// function namely(firstName, lastName) {
//     console.log("Home we are" + firstName + "My lastname is " + lastName);

// }

// namely("John", "Doe");
// namely("sree", "mandy");

// //asignment operators

// let x = 5;
// x += 2;
// console.log(x);


//normal function
function sums(c, d) {
    let sums = c + d;
    console.log(sums);
}
sums(2, 2);





//arrow function without parameter
let print = () => console.log("Hi");

print();






// with parameters 
let sum = (a, b) => a + b;

/* This arrow function is a shorter form of:

let sum = function(a, b) {
return a + b;
};
*/

alert(sum(1, 2)); // 3





//arrow function example 

let age = 25;
let type = age > 18 ?
    () => console.log("Eligible to vote") :
    () => console.log("Unligible to vote");

type();

function loan() {
    let cibil = 750;
    let income = 150000;
    if (cibil >= 750 && income >= 1, 50000) {
        console.log("Eligible to loan");
    } else {
        console.log("Not eligible" + cibil + income);
    }


}

loan();




// console.log(1 | 2);

// let amount = 1000;

// switch (amount) {
//     case (amount > 10000):
//         console.log("buy android mobile device");
//         break;
//     case (amount > 60000):
//         console.log("buy android mobile device");
//         break;
//     case (amount > 6 && amount > 10):
//         console.log("buy android mobile device");
//         break;
//     default:
//         console.log("Not eligible to buy android mobile device");

// }








/*
// program to find the factorial of a number
function factorial(x) {

    // if number is 0
    if (x == 0) {
        return 1;
    }

    // if number is positive
    else {
        return x * factorial(x - 1);
    }
}

// take input from the user
const num = prompt('Enter a positive number: ');

// calling factorial() if num is positive
if (num >= 0) {
    const result = factorial(num);
    console.log(`The factorial of ${num} is ${result}`);
}
else {
    console.log('Enter a positive number.');
}
*/

//local scope with function

function form() {
    let view = "Welcome to my seminar";
    console.log(view);
}

form();

//global scope 
let cap = "Old Cap";

function caps() {
    let cap = "New cap";
    console.log("start:" + cap);
}

caps();