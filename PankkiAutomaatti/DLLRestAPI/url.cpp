#include "url.h"

Url::Url()
{
    base_url = "http://localhost:3000";
}

QString Url::getBase_url() const
{
    return base_url;
}
