--Cria a tabela de usuários
drop table users;
create table users(
	id int auto_increment primery key,
	nome varchar(25) not null UNIQUE,
	senha nome varchar(25) not null,
	tipo char(1)
);
--Insere um usuário de testes
insert into users(nome, senha, tipo)values('teste', 'teste', 'admin');

--Cria A tabela de clientes
drop table cleintes;
create table clientes(
	id int auto_increment primery key,
	nome varchar(25) not null,
	sobrenome  varchar(25),
	cpd  varchar(25) not null,
	sexo char(1),
	endereco  varchar(25) not null,
	data_nasc date,
	telefone varchar(25) not null,
	email  varchar(25)
);