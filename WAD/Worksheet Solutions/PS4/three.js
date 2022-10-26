const num = 20
let currTerm = 0, nextTerm = 1;


for(i=2;i<num;i++) {

    newTerm = currTerm + nextTerm;
    console.log(newTerm);

    currTerm = nextTerm;
    nextTerm = newTerm

}