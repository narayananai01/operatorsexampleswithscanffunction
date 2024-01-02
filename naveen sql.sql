show databases;
use naveen_new_key;
show tables;
select * from naveen_new_key;
create table mine_line (s_no int not null,list1_name varchar (100),area varchar (100),murder_count int not null);
select * from mine_line;
delimiter ##
drop procedure if exists mine_sentence;
create procedure mine_sentence
(in s_noparam int,
in list1_nameparam varchar (100),
in areaparam varchar (100),
in murder_countparam int)
begin
insert into mine_line (s_no,list1_name,area,murder_count)
values (s_noparam,list1_nameparam,areaparam,murder_countparam);
end ##
delimiter ;
call mine_sentence(1,'list1_king','vada_chennai',11);

