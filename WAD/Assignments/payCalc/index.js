function calc() {
   
        
        
        //Name and ID Validation
        empName = document.getElementById('empName').value;
        empId = document.getElementById('empId').value;
        isAlphanum(empId);
        isAlpha(empName);

        //Basic Pay Validation
        hra = document.getElementById('hra');
        bpay = document.getElementById('basicPay');
        if(10000<bpay<200000) {
            hraVal = (bpay*5)/100;
            hra.innerHTML = "HRA : " + hraVal;
            
        }

        
function isAlpha(inputtxt)
{
 var letters = /^[A-Za-z]+$/;
 if(!inputtxt.match(letters))
     alert("Employee Name should contain only alphabets");  
}

function isAlphanum(inputtxt) {
    var textNums = /^[A-Za-z0-9_-]*$/;
    if(!inputtxt.match(textNums))
        alert("Employee ID should not contain Special Characters");
}



}
