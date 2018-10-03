from Model.DTO.VeiculoDTO import VeiculoDTO
from Model.DAO.VeiculoDAO import VeiculoDAO

class VeiculoCTR:
    def CadastrarVeiculo(modelo, marca, anoModelo, placa, alugado, batido,
                         kmAtual, valorDiaria, descricao, tipoVeiculo):
        veiculoDTO = VeiculoDTO
        veiculoDTO.Modelo = modelo
        veiculoDTO.Marca = marca
        veiculoDTO.AnoModelo = anoModelo
        veiculoDTO.Placa = placa
        veiculoDTO.Alugado = alugado
        veiculoDTO.Batido = batido
        veiculoDTO.KmAtual = kmAtual
        veiculoDTO.ValorDiaria = valorDiaria
        veiculoDTO.Descricao = descricao
        veiculoDTO.TipoVeiculo = tipoVeiculo

        veiculoDAO = VeiculoDAO
        veiculoDAO.CadastrarVeiculo(veiculoDTO)

    def AtualizarVeiculo(codigoVeic, modelo, marca, anoModelo, placa, alugado,
                         batido, kmAtual, valorDiaria, descricao, tipoVeiculo):
        veiculoDTO = VeiculoDTO
        veiculoDTO.Modelo = modelo
        veiculoDTO.Marca = marca
        veiculoDTO.AnoModelo = anoModelo
        veiculoDTO.Placa = placa
        veiculoDTO.Alugado = alugado
        veiculoDTO.Batido = batido
        veiculoDTO.KmAtual = kmAtual
        veiculoDTO.ValorDiaria = valorDiaria
        veiculoDTO.Descricao = descricao
        veiculoDTO.TipoVeiculo = tipoVeiculo

        veiculoDAO = VeiculoDAO
        veiculoDAO.AtualizarVeiculo(codigoVeic, veiculoDTO)

    def PesquisarVeiculosDisponiveis():
        veiculoDAO = VeiculoDAO
        query = veiculoDAO.PesquisarVeiculosDisponiveis()

        return query

    def PesquisarTodosVeiculos():
        veiculoDAO = VeiculoDAO
        query = veiculoDAO.PesquisarTodosVeiculos()

        return query

    def PesquisarVeiculo(valor, tipo):
        veiculoDAO = VeiculoDAO
        query = veiculoDAO.PesquisarVeiculo(valor, tipo)

        return query

    def ExcluirVeiculo(codigoVeic):
        veiculoDAO = VeiculoDAO
        veiculoDAO.ExcluirVeiculo(codigoVeic)


