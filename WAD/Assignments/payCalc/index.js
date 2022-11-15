function calc() {


   
        //Name and ID Validation
        empName = document.getElementById('empName').value;
        empId = document.getElementById('empId').value;
        isAlphanum(empId);
        isAlpha(empName);

        //Basic Pay Validation
        hra = document.getElementById('hra');
        ddc = document.getElementById('ddc');
        bpay = document.getElementById('basicPay').value;
        if(10000<bpay || bpay>200000) {
            show()

            hraVal = (bpay*5)/100;
            ded = (bpay*2)/100;

            hra.textContent = "HRA : " + hraVal;
            ddc.textContent = "Deductions: " + ded;
            
            netpay = Number(bpay) + Number(hraVal);
            gpay = netpay - ded; 

        document.getElementById('netpay').innerText = "Net Pay: " + netpay;
        document.getElementById('gPay').innerText = "Gross Pay: " + gpay;
        }
        else {
            alert('Invalid Basic Pay Value');
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


function show() {
    document.getElementById('result').style.display = "block";
    document.getElementById('container').style.display = "none";
}


}
