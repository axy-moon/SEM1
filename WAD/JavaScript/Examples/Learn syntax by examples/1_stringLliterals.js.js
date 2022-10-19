let markWeight = 72.5;
let markHeight = 1.61;
let johnWeight = 62.5;
let johnHeight = 1.61;
markBMI = markWeight / markHeight ** 2;
johnBMI = johnWeight / johnHeight ** 2;
let markHigherBMI = markBMI > johnBMI;
console.log(markHigherBMI);
if (markBMI > johnBMI)
    console.log(` Mark BMI ( ${markBMI}) is higher than John BMI (${johnBMI})`);
else
    console.log(` Mark BMI ( ${markBMI}) is lesser than John BMI (${johnBMI})`);