CREATE TABLE CLIENT_MASTER(client_number varchar(25) primary key,
                           full_name varchar(25),
                           city varchar(25),
                           pincode int,
                           Bal_Due int);

insert into CLIENT_MASTER(client_number, full_name,city,pincode, bal_due) values ('C0001','SMITHA JAIN','MUMBAI',400054,15000);
insert into CLIENT_MASTER (client_number, full_name,city,pincode, bal_due) values ('C0002','VANDHANA RAO','CHENNAI',780001,0);
insert into CLIENT_MASTER (client_number, full_name,city,pincode, bal_due) values ('C0003','PREM PUJARI','MUMBAI',400057,5000);
insert into CLIENT_MASTER (client_number, full_name,city,pincode, bal_due) values ('C0004','BASU NATH','MUMBAI',400056,0);
insert into CLIENT_MASTER (client_number, full_name,city,pincode, bal_due) values ('C0005','RAVI SHANKAR','DELHI',100001,2000);
insert into CLIENT_MASTER (client_number, full_name,city,pincode, bal_due) values ('C0006','ROOPA','MUMBAI',400050,0);



create table sale_order(order_no varchar(10) primary key check(order_no like 'O%'),
                        order_date date,
                        client_number varchar(25) ,
                        salesman varchar(10),
                        dely_date DATE,
                        order_status varchar(25),
                        foreign KEY(client_number) REFERENCES client_master(client_number),
                        foreign key(salesman) references salesman_master(salesman_no)
                        );
                        
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19001','12-Jan-13','C0001','S00001','20-Jan-13','In process');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19002','25-Jan-13','C0002','S00002','27-Jan-13','Cancelled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O46865','18-Feb-13','C0003','S00003','20-Feb-13','Fulfilled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19003','03-Apr-13','C0001','S00001','07-Apr-13','Fulfilled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O46866','20-May-13','C0004','S00002','07-Apr-13','Cancelled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19008','24-may-13','C0005','S00004','26-May-13','In process');                       

select * from client_master where Bal_Due=0;
select * from client_master where Bal_Due>5000;
select * from client_master where Bal_Due between 5000 and 20000;
select full_name from client_master where city  like 'C%' or city  like 'D%';
select full_name from client_master where pincode like '_____1';
update client_master set city = 'JAIPUR' where client_number = 'C0004';
select * from client_master where client_master.client_number in (select client_number from sale_order where sale_order.order_status='Cancelled');
select * from client_master where city = 'MUMBAI';

select full_name,city,pincode from client_master where client_number in (select client_number from sale_order where order_no='O19003' or order_no='O19002');
select full_name || ' lives in ' || city as address from client_master;
select client_number,full_name,city,pincode from client_master where client_master.client_number in (select client_number from sale_order where sale_order.order_status='In process');

select a.*,b.* from emply a,payslip b where a.client_no=b.client_no and order="Cancelled"











