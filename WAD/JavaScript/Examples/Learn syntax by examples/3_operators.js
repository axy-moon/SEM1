let country = "INDIA";
let continent = "ASIA";
let populationInMillion = 140.25
let language = "HINDI"
console.log(country);
console.log(continent);
console.log(populationInMillion);


let populationInFirstHalf = populationInMillion / 2;
let populationInSecondHalf = populationInMillion / 2;
console.log(populationInFirstHalf, populationInSecondHalf);
populationInMillion++;
populationInFirstHalf = populationInMillion / 2;
populationInSecondHalf = populationInMillion / 2;
console.log(populationInFirstHalf, populationInSecondHalf);
let finlandPopulation = 6;
console.log(populationInMillion > finlandPopulation);
const avgPopulation = 33;
console.log(populationInMillion < avgPopulation);

console.log(country + ' is in ' + continent + ' and its ' + populationInMillion + ' people speak  ' + language + '  language');

let markWeight = 72.5;
let markHeight = 1.61;
let johnWeight = 62.5;
let johnHeight = 1.61;
markBMI = markWeight / markHeight ** 2;
johnBMI = johnWeight / johnHeight ** 2;
let markHigherBMI = markBMI > johnBMI;
console.log(markHigherBMI);

