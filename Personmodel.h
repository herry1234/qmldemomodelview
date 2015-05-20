#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include <QAbstractListModel>
#include <Person.h>
class PersonModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum Roles {
        Name = Qt::UserRole,
        Title
    };
    QHash<int,QByteArray> roleNames() const;

    int rowCount(const QModelIndex &index = QModelIndex()) const;
    explicit PersonModel(QList<Person*>& realModel);
    QVariant data(const QModelIndex &index, int role) const;
signals:

public slots:
private:
    QList<Person*>& _realModel;


};

#endif // PERSONMODEL_H
