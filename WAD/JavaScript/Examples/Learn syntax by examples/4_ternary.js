var emoji = String.fromCodePoint(0x1F424);
const age = 3;
age > 3 ? console.log(" I like to eat chicken " + emoji) : console.log(" I should not eat chicken " + emoji);


const eatChicken = age > 3 ? "can " : "should not";
console.log(`I ${eatChicken} eat chicken+${emoji}`);

//ternary operator is an expression . So can be used as templated strings.
console.log(`I ${age > 3 ? "can " : "should not"} eat chicken`);

//emoji unicodes in http://unicode.org/emoji/charts/full-emoji-list.html#1f414

var populationIndiaMillion =130;

console.log(` India's population is ${Number(populationIndiaMillion) > 100 ? " above " : " below "}average`);

