--Cria o banco de dados estoque
create database estoque;

--Cria a tabela de usuários
drop table users;
create table users(
	id serial primary key,
	name varchar(25) not null UNIQUE,
	passwd varchar(25) not null,
	isRoot boolean default false
);
--Insere um usuário de testes
insert into users(name, passwd, isRoot)values('teste', 'teste', true);
insert into users(name, passwd, isRoot)values('test', 'teste', true);

select * from users;

--Tabela de endereços
drop table addresses;
create table addresses(
	id serial primary key,
	name varchar(30) not null,
	number int not null,
	country varchar(10) not null default 'BR',
	state varchar(2) not null default 'PR'
);
--Tabelas de telefone
drop table phones;
create table phones(
	id serial primary key,
	number varchar(15) not null,
	status bool default false
);
--Cria A tabela de clientes
drop table customers;
create table customers(
	id serial primary key,
	name varchar(25) not null,
	fullName  varchar(25),
	doc  varchar(25) not null,
	gender char(1),
	address int,
	joiner date default now(),
	phones int,
	email  varchar(25),
	foreign key(address) references addresses(id),
	foreign key(phones) references phones(id)
);
--Tabela de grupo de usuários
drop table usergroup;
create table usergroup(
	id serial primary key,
	name varchar(25) not null,
	permission varchar(25) not null,
	status bool default false
);
--Tabela que relaciona os usuários ao grupo
drop table userusergroup;
create table userusergroup(
	users int,
	usergroup int,
	foreign key(users) references users(id),
	foreign key(usergroup) references usergroup(id)
);
--Tabela de módulos
drop table modules;
create table modules(
	id serial primary key,
	name varchar(30) not null,
	descript varchar(30) not null,
	icon varchar(30) not null,
	position int default 0,
	status boolean default false
);
--Tabela de Grupo de Módulos
drop table modulesgroup;
create table modulesgroup(
	modules int,
	usergroup int,
	foreign key(modules) references modules(id)
	foreign key(usergroup) references usergroup(id)
);

drop table menu;
create table menu(
	id serial primary key,
	name varchar(30) not null,
	
);

-- Cria a tabela de UIs
drop table ui;
create table ui(
	id serial primary key,
	name varchar(30) not null,
	path varchar(30) not null
);
