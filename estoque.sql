-- phpMyAdmin SQL Dump
-- version 4.7.3
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Tempo de geração: 07/08/2017 às 15:55
-- Versão do servidor: 10.1.25-MariaDB
-- Versão do PHP: 7.1.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `estoque`
--

-- --------------------------------------------------------

--
-- Estrutura para tabela `categ`
--

CREATE TABLE `categ` (
  `id` int(11) NOT NULL,
  `nome` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL,
  `descricao` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `categ`
--

INSERT INTO `categ` (`id`, `nome`, `descricao`) VALUES
(9, 'celular', 'teste');

-- --------------------------------------------------------

--
-- Estrutura para tabela `celulares`
--

CREATE TABLE `celulares` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL,
  `marca` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `modelo` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `num_serie` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `clientes`
--

CREATE TABLE `clientes` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL,
  `sobrenome` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `rg` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `cpf` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `sexo` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `endereco` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `data_nasc` date DEFAULT NULL,
  `telefone` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `clientes`
--

INSERT INTO `clientes` (`codigo`, `nome`, `sobrenome`, `rg`, `cpf`, `sexo`, `endereco`, `data_nasc`, `telefone`) VALUES
(41911, 'fernando', 'faria', '12.312.312-3', '123.123.123-12', 'masculino', 'rua do poste', '2017-04-27', '(56)34634-5634'),
(41960, 'nina', 'dfsadfasd', '23.413.412-3', '234.123.412-34', 'feminino', 'fgsfgsdfgsdfg', '2000-01-01', '(44)44444-4444'),
(41961, 'fábio', 'sdfasdfasdfa', '41.234.123-4', '123.412.341-23', 'masculino', '23412314', '2000-01-01', '(21)34123-4124');

-- --------------------------------------------------------

--
-- Estrutura para tabela `os`
--

CREATE TABLE `os` (
  `codigo` int(11) NOT NULL,
  `data` date DEFAULT NULL,
  `marca` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `modelo` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `imei` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `codClie` int(11) DEFAULT NULL,
  `aparencia` varchar(250) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `defeito` varchar(50) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `laudo` varchar(50) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `valorReparo` decimal(10,2) DEFAULT NULL,
  `tipoPg` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `codTec` int(11) DEFAULT NULL,
  `dataReparo` date DEFAULT NULL,
  `status` varchar(20) COLLATE utf8mb4_unicode_ci DEFAULT 'Aberta'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `os`
--

INSERT INTO `os` (`codigo`, `data`, `marca`, `modelo`, `imei`, `codClie`, `aparencia`, `defeito`, `laudo`, `valorReparo`, `tipoPg`, `codTec`, `dataReparo`, `status`) VALUES
(1, '2017-08-02', 'dfasdfasdf', 'asdfasdf', 'sdfasdf', 41960, 'dfasedrwerqwe', 'rqwerqwer', 'qwerqwerq', '123.00', 'CARTAO', 1, '2017-08-02', 'aberta');

-- --------------------------------------------------------

--
-- Estrutura para tabela `produtos`
--

CREATE TABLE `produtos` (
  `codigo` int(11) NOT NULL,
  `descricao` varchar(50) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `unidade` int(11) DEFAULT NULL,
  `valorCompra` decimal(10,2) DEFAULT NULL,
  `valorVenda` decimal(10,2) DEFAULT NULL,
  `categoria` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `produtos`
--

INSERT INTO `produtos` (`codigo`, `descricao`, `unidade`, `valorCompra`, `valorVenda`, `categoria`) VALUES
(1231231231, 'Produto de Teste do mal', 12, '150.00', '350.00', 9),
(432123412, 'dfsadfasd', 123, '123.00', '123.00', 9);

-- --------------------------------------------------------

--
-- Estrutura para tabela `prod_os`
--

CREATE TABLE `prod_os` (
  `cod_os` int(11) NOT NULL,
  `cod_prod` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `prod_os`
--

INSERT INTO `prod_os` (`cod_os`, `cod_prod`) VALUES
(110, 1231231231),
(111, 1231231231),
(113, 1231231231),
(114, 1231231231),
(115, 1231231231),
(116, 1231231231),
(117, 1231231231),
(118, 1231231231),
(119, 1231231231),
(1, 1231231231),
(1, 432123412);

-- --------------------------------------------------------

--
-- Estrutura para tabela `system`
--

CREATE TABLE `system` (
  `id` int(11) NOT NULL,
  `nome` varchar(20) COLLATE utf8mb4_unicode_ci NOT NULL,
  `versao` varchar(20) COLLATE utf8mb4_unicode_ci NOT NULL,
  `chave` varchar(50) COLLATE utf8mb4_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `tecnico`
--

CREATE TABLE `tecnico` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL,
  `telefone` varchar(25) COLLATE utf8mb4_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `tecnico`
--

INSERT INTO `tecnico` (`codigo`, `nome`, `telefone`) VALUES
(1, 'faria', '44988296684');

-- --------------------------------------------------------

--
-- Estrutura para tabela `userAtual`
--

CREATE TABLE `userAtual` (
  `codigo` int(11) DEFAULT NULL,
  `lembrar` tinyint(1) DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `userAtual`
--

INSERT INTO `userAtual` (`codigo`, `lembrar`) VALUES
(1, 1);

-- --------------------------------------------------------

--
-- Estrutura para tabela `users`
--

CREATE TABLE `users` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL,
  `senha` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL,
  `tipo` varchar(25) COLLATE utf8mb4_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Fazendo dump de dados para tabela `users`
--

INSERT INTO `users` (`codigo`, `nome`, `senha`, `tipo`) VALUES
(1, 'faria', 'faria', 'admin'),
(4, 'teste', '123', 'user');

--
-- Índices de tabelas apagadas
--

--
-- Índices de tabela `categ`
--
ALTER TABLE `categ`
  ADD PRIMARY KEY (`id`);

--
-- Índices de tabela `celulares`
--
ALTER TABLE `celulares`
  ADD PRIMARY KEY (`codigo`);

--
-- Índices de tabela `clientes`
--
ALTER TABLE `clientes`
  ADD PRIMARY KEY (`codigo`);

--
-- Índices de tabela `os`
--
ALTER TABLE `os`
  ADD PRIMARY KEY (`codigo`);

--
-- Índices de tabela `produtos`
--
ALTER TABLE `produtos`
  ADD KEY `fk_produtos_1_idx` (`categoria`);

--
-- Índices de tabela `system`
--
ALTER TABLE `system`
  ADD PRIMARY KEY (`id`);

--
-- Índices de tabela `tecnico`
--
ALTER TABLE `tecnico`
  ADD PRIMARY KEY (`codigo`);

--
-- Índices de tabela `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`codigo`);

--
-- AUTO_INCREMENT de tabelas apagadas
--

--
-- AUTO_INCREMENT de tabela `categ`
--
ALTER TABLE `categ`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
--
-- AUTO_INCREMENT de tabela `celulares`
--
ALTER TABLE `celulares`
  MODIFY `codigo` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT de tabela `clientes`
--
ALTER TABLE `clientes`
  MODIFY `codigo` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=41962;
--
-- AUTO_INCREMENT de tabela `os`
--
ALTER TABLE `os`
  MODIFY `codigo` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT de tabela `system`
--
ALTER TABLE `system`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT de tabela `tecnico`
--
ALTER TABLE `tecnico`
  MODIFY `codigo` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT de tabela `users`
--
ALTER TABLE `users`
  MODIFY `codigo` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- Restrições para dumps de tabelas
--

--
-- Restrições para tabelas `produtos`
--
ALTER TABLE `produtos`
  ADD CONSTRAINT `fk_produtos_1` FOREIGN KEY (`categoria`) REFERENCES `categ` (`id`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
