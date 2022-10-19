// 5 falsy values in JS - 0, '', undefined,null, NaN
//these will be converted to false when it is converted to boolean
//all others will be true.

console.log(Boolean(0));
console.log(Boolean(''));
console.log(Boolean(NaN));
console.log(Boolean({}));  //{ } denotes empty object
console.log(Boolean("PSG"));
// This Boolean explicit conversion is not needed anytime bz js does implicit conversion on Boolean in the context of logical comparison/operations

const x = 0;
let y;  //y is undefined
if (!(((x) & (y)))) { console.log("Both are falsy values") };



