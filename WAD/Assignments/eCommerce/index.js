function signup() {
    username = document.getElementById('userbox').value;
    password = document.getElementById('passbox').value;

    sessionStorage.setItem("username",username);
    sessionStorage.setItem("password",password);

    window.location.href = "login.html";
}

/* function welcome() {
    uname = document.getElementById('userbox').value
    if(sessionStorage.getItem('username'==username))

} */


function login() {
    u = document.getElementById('ubox').value;
    p = document.getElementById('pbox').value;
    if (u == sessionStorage.getItem('username')) {
        if(p == sessionStorage.getItem('password')) {
            window.location.href = "welcome.html"
        }
        else {
            document.getElementById('alert').innerText = "Invalid Password";
        }
    }
    else {
        document.getElementById('alert').innerText = "Invalid Username";
    }
}

function welcome() {
    document.getElementById('username').innerText = sessionStorage.getItem('username');
}