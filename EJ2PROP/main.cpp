#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QListWidget>
#include <QLabel>
#include <QMap>

class WidgetInformacionPaises : public QWidget {
    Q_OBJECT

public:
    WidgetInformacionPaises(QWidget *padre = nullptr) : QWidget(padre) {
        QVBoxLayout *layout = new QVBoxLayout(this);
        listaPaises = new QListWidget(this);
        layout->addWidget(listaPaises);
        etiquetaInformacion = new QLabel(this);
        layout->addWidget(etiquetaInformacion);
        datosPaises.insert("Argentina", QPair<QString, QString>("Español", "Buenos Aires"));
        datosPaises.insert("Francia", QPair<QString, QString>("Francés", "París"));
        datosPaises.insert("Alemania", QPair<QString, QString>("Alemán", "Berlín"));
        datosPaises.insert("Italia", QPair<QString, QString>("Italiano", "Roma"));
        datosPaises.insert("Japón", QPair<QString, QString>("Japonés", "Tokio"));
        listaPaises->addItems(datosPaises.keys());
        connect(listaPaises, &QListWidget::itemClicked, this, &WidgetInformacionPaises::mostrarInformacionPais);
    }

private slots:
    void mostrarInformacionPais(QListWidgetItem *item) {
        QString pais = item->text();
        if (datosPaises.contains(pais)) {
            auto info = datosPaises[pais];
            etiquetaInformacion->setText(QString("Idioma: %1\nCapital: %2").arg(info.first, info.second));
        }
    }
private:
    QListWidget *listaPaises;
    QLabel *etiquetaInformacion;
    QMap<QString, QPair<QString, QString>> datosPaises;
};
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    WidgetInformacionPaises widget;
    widget.setWindowTitle("Información de Países");
    widget.resize(400, 300);
    widget.show();

    return app.exec();
}
#include "main.moc"
