#ifndef LUKITUS_H
#define LUKITUS_H

#include <QObject>

class Lukitus : public QObject
{
    Q_OBJECT
public:
    explicit Lukitus(QObject *parent = nullptr);

signals:

};

#endif // LUKITUS_H
