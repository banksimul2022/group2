const db = require('../database');

const asiakas = {
  /*getById: function(id, callback) {
    return db.query('select * from asiakas where idAsiakas=?', [id], callback);
  },*/

  getById: function(id, callback) {
    return db.query('select Etunimi, Sukunimi, Henkilötunnus, Osoite, Puhelinnumero, PVM, Tapahtuma, Summa, Saldo from asiakas JOIN kortti ON asiakas.idAsiakas=kortti.idKortti JOIN tilitapahtumat ON kortti.idKortti=tilitapahtumat.idKortti JOIN tili ON tili.idTili=tilitapahtumat.idTili WHERE asiakas.idAsiakas=1 ORDER BY PVM limit 10', [id], callback);
  },

  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (Etunimi, Sukunimi, Henkilötunnus, Osoite, Puhelinnumero) values(?,?,?,?,?)',
      [asiakas.Etunimi, asiakas.Sukunimi, asiakas.Henkilötunnus, asiakas.Osoite, asiakas.Puhelinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where idAsiakas=?', [id], callback);
  },
  update: function(id, asiakas, callback) {
    return db.query(
      'update asiakas set Etunimi=?,Sukunimi=?, Henkilötunnus=?, Osoite=?, Puhelinnumero=? where idAsiakas=?',
      [asiakas.Etunimi, asiakas.Sukunimi, asiakas.Henkilötunnus, asiakas.Osoite,asiakas.Puhelinnumero, id],
      callback
    );
  }
};
module.exports = asiakas;