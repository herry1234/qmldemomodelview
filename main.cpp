#include <QtQuick>
#include "qtquick2applicationviewer.h"
#include "Person.h"
#include "Personmodel.h"
int main(int argc, char *argv[])
{

        QGuiApplication app(argc, argv);
        QList<Person*> realModel;
        realModel << new Person("Joe", "T1");
        realModel << new Person("Bob", "T2");
        QtQuick2ApplicationViewer viewer;
        PersonModel peopleModel(realModel);
        viewer.engine()->rootContext()->setContextProperty("peopleModel",&peopleModel);
        viewer.setMainQmlFile(QStringLiteral("qml/ModelView/main.qml"));
        viewer.showExpanded();

        return app.exec();
//    QGuiApplication app(argc, argv);
//    QList<QObject*> peopleModel;
//    peopleModel << new Person("Joe", "T1");
//    peopleModel << new Person("Bob", "T2");
//    QtQuick2ApplicationViewer viewer;

//    viewer.engine()->rootContext()->setContextProperty("peopleModel",QVariant::fromValue(peopleModel));
//    viewer.setMainQmlFile(QStringLiteral("qml/ModelView/main.qml"));
//    viewer.showExpanded();

//    return app.exec();
}
