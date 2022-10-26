const num = 20
let curr_term = 0, next_term = 1;
let i = 2
while(i<num) {

    new_term = curr_term + next_term;
    console.log(new_term);

    curr_term = next_term;
    next_term = new_term;
    
    i++;

}
