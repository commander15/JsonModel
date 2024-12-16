#ifndef JSONMODEL_H
#define JSONMODEL_H

#include <QtQuick/QQuickPaintedItem>

class JsonModel : public QQuickPaintedItem
{
    Q_OBJECT
    QML_ELEMENT
    Q_DISABLE_COPY(JsonModel)
public:
    explicit JsonModel(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;
    ~JsonModel() override;
};

#endif // JSONMODEL_H
