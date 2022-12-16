create table product(
                      product_no varchar(15) primary key,
                      product_name varchar(20),
                      profit_per int,
                      unit_of_measure int,
                      qty_on_hnd int,
                      reorder_lvl int,
                      sell_price int,
                      cost_price int
);

create table salesman_master (
                            salesman_no varchar(7) primary key,
                            salesman_name varchar(30),
                            city varchar(15),
                            sales_amt int,
                            target_to_achieve int
                            
);


insert into salesman_master (salesman)


alter table sale_order add delivery_type varchar(1) default 'F';
alter table sale_order add bill_info varchar(25);

select * from sale_order;



insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status,delivery_type,bill_info) values ('O19001','12-Jan-13','C0001','S00001','20-Jan-13','In process','P','Y');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status,delivery_type,bill_info) values ('O19002','25-Jan-13','C0002','S00002','27-Jan-13','Cancelled','F','N');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status,delivery_type,bill_info) values ('O46865','18-Feb-13','C0003','S00003','20-Feb-13','Fulfilled','P','Y');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status,delivery_type,bill_info) values ('O19003','03-Apr-13','C0001','S00001','07-Apr-13','Fulfilled','F','Y');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status,delivery_type,bill_info) values ('O46866','20-May-13','C0004','S00002','07-Apr-13','Cancelled','P','Y');                       
insert into sale_order (order_no,order_date,client_number,salesman,dely_date,order_status,delivery_type,bill_info) values ('O19008','24-may-13','C0005','S00004','26-May-13','In process','F','N');


