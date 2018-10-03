from PyQt4.QtSql import QSqlDatabase

class ConexaoSQL:
    def getConexao():
        db = QSqlDatabase.addDatabase('QSQLITE')
        db.setDatabaseName("DataBase/LocadoraDB.db3")

        return db
