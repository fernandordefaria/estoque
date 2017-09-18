#include "reportos.h"
#include <QDate>

ReportOs::ReportOs(QObject *parent) : QObject(parent){
}

void ReportOs::showReport(QString codigo) {

}

void ReportOs::createPDF(QString codigo){
    QString marca, modelo, imei, cliente, telefone,
            aparencia, defeito, laudo, tipoPg, codTec,
            status;
    QString codProd;

    float valorReparo, valProd, descProd;
    QDate dataReparo, data;
    QSqlQuery query;
    query.prepare("SELECT "
                   "os.codigo, os.data, os.marca, "
                   "os.modelo, os.imei, c.nome, c.telefone, "
                   "os.aparencia, os.defeito, os.laudo, "
                   "os.valorReparo, os.tipoPg, t.nome, "
                   "os.dataReparo, os.status "
               "FROM os "
               "LEFT JOIN clientes c ON(c.codigo = os.codClie) "
               "LEFT JOIN tecnico t ON(t.codigo = os.codTec) "
               "WHERE os.codigo = "+codigo);
    //query->bindValue(0, codigo);
    query.first();
    if(query.exec() && query.next()){
        data = query.value(1).toDate();
        marca = query.value(2).toString();
        modelo = query.value(3).toString();
        imei = query.value(4).toString();
        cliente = query.value(5).toString();
        telefone = query.value(6).toString();
        aparencia = query.value(7).toString();
        defeito = query.value(8).toString();
        laudo = query.value(9).toString();
        valorReparo = query.value(10).toFloat();
        tipoPg = query.value(11).toString();
        codTec = query.value(12).toString();
        dataReparo = query.value(13).toDate();
        status = query.value(14).toString();

        QString fileName = "ordens/" + codigo + ".pdf";
        QString html =
                "<table style='width:1500px; margin: 0px 0px 5px 0px;' border=1 cellspacing=0 cellpadding=2 bordercolor='666633'>"
                "<tr>"
                "<td colspan='4' style='width:1500px; background: #DCDCDC' ROWSPAN=2>Endereço:</td>"
                "<td colspan='2' style='background: #DCDCDC;'>Nº Os: "+codigo+"</td>"
                "</tr>"
                "<tr> "
                "<td colspan='2' style='width:200px;'>Data: "+data.toString("dd/MM/yyyy")+"</td>"
                "</tr>"
                "<tr>"
                "<td colspan='6'></td>"
                "</tr>"
                "<tr>"
                "<td style='background: #DCDCDC'>Marca:</td>"
                "<td>"+marca+"</td>"
                "<td style='background: #DCDCDC'>Modelo</td>"
                "<td>"+modelo+"</td>"
                "<td style='background: #DCDCDC'>IMEI:</td>"
                "<td style='width:200px;'>"+imei+"</td>"
                "</tr>"
                "<tr>"
                "<td style='background: #DCDCDC'>Aparencia Geral:</td>"
                "<td colspan='3'>"+aparencia+"</td>"
                "<td style='background: #DCDCDC'>Senha:</td>"
                "<td>0</td>"
                "</tr>"
                "<tr>"
                "<td style='background: #DCDCDC'>Cliente:</td>"
                "<td colspan='3'>"+cliente+"</td>"
                "<td style='background: #DCDCDC'>Contato:</td>"
                "<td>"+telefone+"</td>"
                "</tr>"
                "<tr>"
                "<td colspan='6'></td>"
                "</tr>"
                "<tr>"
                "<td  style='background: #DCDCDC' colspan='1'>Defeito:</td>"
                "<td colspan='5'>"+defeito+"</td>"
                "</tr>"
                "<tr>"
                "<td  style='background: #DCDCDC' colspan='1'>Laudo:</td>"
                "<td colspan='5'>"+laudo+"</td>"
                "</tr>"
                "<tr>"
                "<td colspan='6'></td>"
                "</tr>"
                "<tr>"
                "<td colspan='2' style='background: #DCDCDC'>Técnico:</td>"
                "<td colspan='4'>"+codTec+"</td>"
                "</tr>"
                "<tr>"
                "<td colspan='2' style='background: #DCDCDC'>Data do Reparo:</td>"
                "<td colspan='4'>"+dataReparo.toString("dd/MM/yyyy")+"</td>"
                "</tr>"
                "<tr>"
                "<td colspan='6' style='background: #DCDCDC; text-align: center;'>Produtos:</td>"
                "</tr>";
                QSqlQuery prod;
                prod.prepare("SELECT "
                             "p.codigo, p.descricao, p.valorVenda "
                             "FROM prod_os po "
                             "LEFT JOIN produtos p ON(p.codigo = po.cod_prod) "
                             "WHERE po.cod_os = "+codigo);

                prod.first();
                if(prod.exec()){
                    float total = 0;
                    while(prod.next()){
                        codProd = prod.value(0).toString();
                        descProd = prod.value(1).toFloat();
                        valProd = prod.value(2).toFloat();
                        total += prod.value(2).toFloat();
                        html +="<tr>"
                            "<td style='background: #DCDCDC'>Código:</td>"
                            "<td>"+codProd+"</td>"
                            "<td style='background: #DCDCDC'>Descrição:</td>"
                            "<td>"+QString::number(descProd)+"</td>"
                            "<td style='background: #DCDCDC'>Preço:</td>"
                            "<td style='width:200px; text-align: right;'>"+QString::number(valProd)+"</td>"
                            "</tr>";
                    }
                    total = total + valorReparo;
                    html +="<tr>"
                        "<td colspan='3' style='background: #DCDCDC; text-align: left;'>Total:</td>"
                        "<td colspan='3' style='text-align: right;'>"+QString::number(total)+"</td>"
                        "</tr>";
                }else{
                    qDebug() << "Deu ruim" << endl;
                }
                html +="</table>";
        html += html;

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);
        printer.setPageMargins(QMarginsF(70, 15, 0, 10));

        QTextDocument doc;
        doc.setDocumentMargin(0);
        doc.setHtml(html);
        doc.setPageSize(printer.pageRect().size());
        doc.print(&printer);
        printer.newPage();

        QString exec = "/opt/master-pdf-editor-4/masterpdfeditor4 ~/Programas/"+fileName + "&";

        std::system(exec.toStdString().c_str());

        /*QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    doc.setHtml("<h1>Hello, World!</h1>\n<p>Lorem ipsum dolor sit amet, consectitur adipisci elit.</p>");
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);*/

    }else{
        qDebug() << "Erro PDF" << endl;
    }
}

ReportOs::~ReportOs() {
    //
}
