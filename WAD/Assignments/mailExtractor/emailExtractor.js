var mails = "augxy666@gamil.com";
var gmail = /^[a-zA-Z0-9+_.-]+@[gmail.com]+$/;

if(mails.match(gmail)) {
    console.log("Valid Email")
}
else {
    console.log("Invalid Email")
}