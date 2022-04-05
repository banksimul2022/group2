## .env

1. Luo VSCodessa api-kansioon tiedosto nimellä .env ja kirjoita sinne: MY_TOKEN=
2. Aja gitBashissa komento: node create_token.js ja kopioi token.
3. Liitä kopioitu token .env tiedostoon (MY_TOKEN=xxxx...)

## Token Postmanissa

1. Hae token ajamalla Postmanissa tallennettu Login.
2. Kopioi tulostuva token.
3. Klikkaa collectionin yläreunassa "BankSimul".
4. Valitse authorization ja tyypiksi bearer token.
5. Liitä token-kohtaan kopioitu token.
