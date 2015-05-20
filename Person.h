#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDebug>
class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name CONSTANT)
    Q_PROPERTY(QString title READ title CONSTANT)
public:
    Person(QString name, QString title) :
        _name(name),
        _title(title)
    {
    }

    QString name() const { return _name; } ;
    QString title() const { return _title;} ;

signals:

public slots:
    void sendMsg() { qDebug() << "Sending msg to " << _name;};
private:
    QString _name;
    QString _title;

};

#endif // PERSON_H
