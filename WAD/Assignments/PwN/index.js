
function fname() {
    document.getElementById('fname').style.display = "block";
}

function lname() {
    document.getElementById('lname').style.display = "block";
}

function yourName() {
    
    fname = document.getElementById('fname').value;
    lname = document.getElementById('lname').value;

    document.getElementById('yourName').innerText = fname + " " + lname;
}

function greet() {
    var today = new Date()
    var curTime = today.getHours()
    grtMessage = ""

    fname = document.getElementById('fname').value;
    lname = document.getElementById('lname').value;

    
    if (curTime<12)
        grtMessage = "Good Morning"
    else if(curTime<18)
        grtMessage = "Good Afternoon"
    else
        grtMessage = "Good Evening"

    document.getElementById('greet').innerText = grtMessage + " " + fname + " " + lname;
}

function length() {
    fname = document.getElementById('fname').value;
    lname = document.getElementById('lname').value;
    fullName = fname+lname;

    document.getElementById('len').innerText = fullName.length;
} 

function reverse() {
    fname = document.getElementById('fname').value;
    lname = document.getElementById('lname').value;

    fullName = fname+lname;
    revName = "";

    for(var i=fullName.length-1;i>=0;i--) {
        revName = revName +  fullName[i];
    }

    document.getElementById('rev').innerText = revName;
}

function capitalize() {
    fname = document.getElementById('fname').value;
    lname = document.getElementById('lname').value;

    fullName = fname+lname;

    document.getElementById('cap').innerText = fullName.charAt(0).toUpperCase() + fullName.slice(1);
}