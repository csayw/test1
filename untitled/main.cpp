#include <QApplication>
#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

class ClickableBox : public QWidget
{
public:
    ClickableBox(QWidget *parent = nullptr) : QWidget(parent) {}

protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        qDebug() << "musterbate!";
        QWidget::mousePressEvent(event);
    }


};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ClickableBox box;
    box.show();

    return app.exec();
}
