#ifndef URL_H
#define URL_H

#include <qstring.h>


class Url
{
public:
    Url();
    QString getBase_url() const;

private:
     QString base_url;
};

#endif // URL_H
