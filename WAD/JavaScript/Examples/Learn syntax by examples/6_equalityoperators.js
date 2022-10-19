 console.log(18 === '18');  //output is false.. bz of strict comparison.
 console.log(18 == '18'); // output is true bz == operator does type coercion.
 let v = 100;


if (v === 7) { console.log("You are correct"); } else { console.log("Not correct"); }
// This fails bz of strict comparison.

// //convert any input to a desired type
 let vInt = 1001;
if (vInt === 7) { console.log("You are correct"); }


// //if else elseif
// if (vInt === 7) { console.log("You are correct it is 7"); }
// else if (vInt === 8) { console.log("you are correct it is 8"); }
// else console.log("Your guess is wrong. It is not 7 or 8 ");



//strict and loose inequality operator  !==
let birthYear = 2001;
console.log(typeof birthYear);
if (birthYear !== 2000) { console.log("you are not 2K born"); }



if (birthYear != 2000) { console.log("you are not 2K born"); }

//Boolean Logic
const hasValidRollNo = true;
const hasHallTicket = true;
let canWriteExam = (hasValidRollNo && hasHallTicket);
console.log("canWriteExam" + canWriteExam);
canWriteExam = (hasValidRollNo || hasHallTicket);
console.log("canWriteExam" + canWriteExam);
//punctualToHall ;
console.log(!hasHallTicket);



if (((Number(birthYear) < 2000) && (Number(birthYear) >= 1990))) {
    console.log("You were born in the last decade of 19th Century");
} else if ((Number(birthYear) >= 2000)) console.log("You were born in 21st Century");
else console.log("You are older ");