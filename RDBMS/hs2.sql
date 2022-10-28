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



create table sale_order(order_no varchar(10) primary key,
                        order_date date,
                        client_number varchar(25), constraint fk_clientno foreign key (client_number) references CLIENT_MASTER(client_number) ,
                        salesman varchar(10),
                        dely_date DATE,
                        order_status varchar(25));
                        
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19001','12-Jan-13','C0001','S00001','20-Jan-13','In process');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19002','25-Jan-13','C0002','S00002','27-Jan-13','Cancelled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O46865','18-Feb-13','C0003','S00003','20-Feb-13','Fulfilled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19003','03-Apr-13','C0001','S00001','07-Apr-13','Fulfilled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O46866','20-May-13','C0004','S00002','07-Apr-13','Cancelled');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status) values ('O19008','24-may-13','C0005','S00004','26-May-13','In process');                       

select * from client_master where Bal_Due=0;
select * from client_master where Bal_Due>5000;

select * from client_master where Bal_Due between 5000 and 20000;

select full_name from client_master where city  like 'C%'  like 'D%';

select full_name from client_master where pincode like '_____1';

