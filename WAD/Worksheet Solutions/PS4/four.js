let odd = "#"
let even = "*"

for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++) {
    if(i%2===0)
        process.stdout.write(odd) //javascript method
    else
    process.stdout.write(even)
}

    console.log()
}