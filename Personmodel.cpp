#include "Personmodel.h"

PersonModel::PersonModel(QList<Person*>& realModel) :
    _realModel(realModel)
{
}

QHash<int, QByteArray> PersonModel::roleNames() const {
    QHash<int,QByteArray> roleNames;
    roleNames.insert(Name,"name");
    roleNames.insert(Title,"Title");
    return roleNames;
}

int PersonModel::rowCount(const QModelIndex &idx) const {
    if(idx.isValid()) return 0;
    else {
        return _realModel.size();
    }

}

QVariant PersonModel::data(const QModelIndex &index, int role) const {
    if(!index.isValid() && index.row() < _realModel.size())
        return QVariant();
    switch (role) {
    case Name :
        return _realModel[index.row()]->name();
    case Title:
        return _realModel[index.row()]->title();
    default:
        return QVariant();
    }

}
