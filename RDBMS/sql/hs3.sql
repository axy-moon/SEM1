create table emply(empcode varchar(5) primary key,
                    empname varchar(30),
                    address varchar(50),
                    age int,
                    dept_code varchar(5)
                    
);

insert into emply values('E101','Anjaly','Anjaly Nivas Thiruvalla',25,'D301');
insert into emply values('E102','Bobby','Alapuzha',28,'D305');
insert into emply values('E103','Aravind','Chennai',31,'D305');
insert into emply values('E104','Lakshmi','Mannar',55,'D707');
insert into emply values('E105','Daisy','Chaithram Angamaly',35,'D707');
insert into emply values('E106','Esha','Mumbai',23,'D707');
insert into emply values('E107','Georgy','Pala',45,'D909');
insert into emply values('E108','Prakash','Vennikulam',36,'D110');
insert into emply values('E109','Madhavan','Mynakum, Kottayam',46,'D202');
insert into emply values('E110','Anugraha','Aparna Angamaly',47,'D301');
insert into emply values('E111','Deva','Trichy',38,'D301');
insert into emply values('E112','Saju','Dhanya, Ernakulam',27,'D202');
insert into emply values('E113','Priyesh','Priya Nivas ',26,'D202');


create table payslip( empcode varchar(5) , constraint fk_emp foreign key (empcode) references emply(empcode),
                      BasicPay int,
                      HRA int,
                      DA int
);

insert into payslip values('E101',4000,1900,1500);
insert into payslip values('E102',4500,2200,2000);
insert into payslip values('E103',5000,2800,2200);
insert into payslip values('E104',7000,3000,2700);
insert into payslip values('E105',3000,1500,1200);
insert into payslip values('E106',5700,3700,2900);
insert into payslip values('E107',6200,3300,3000);
insert into payslip values('E108',5700,3700,3000);
insert into payslip values('E109',7500,4660,545);
insert into payslip values('E110',5000,300,100);
insert into payslip values('E111',6000,200,120);

create table dept( deptcode varchar(5),
                   deptname varchar(10)
);

insert into dept values('D301','Sales');
insert into dept values('D302','Account');
insert into dept values('D707','Research');
insert into dept values('D909','Advertising');
insert into dept values('D202','Stock');
insert into dept values('D110','Computer');
insert into dept values('D305','Marketing');


update emply set age=age+15 where empcode='E107';
create view empdetails as select empcode,empname,address,age from emply where age>35 and age<45;
select * from empdetails;


select emply.empcode, emply.empname, emply.address, payslip.BasicPay + payslip.HRA + payslip.DA as netpay 
    from emply , payslip  where emply.empcode=payslip.empcode order by empcode asc;

select 'Employees with empcode ' || emply.empcode || ' draws a basic salary ' || payslip.BasicPay from emply, payslip where emply.empcode=payslip.empcode;

select empname , address from emply  where empcode in (select empcode from payslip where BasicPay between 5000 and 7000);  

alter table payslip add(total_sal int);
update payslip set total_sal = BasicPay+HRA+DA;
select * from payslip where empcode>'E107';


commit;








