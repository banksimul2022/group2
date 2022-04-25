const db = require('../database');

const asiakas = {
  getAsiakas: function(Kortinnumero, callback) {
    return db.query('SELECT * FROM asiakas JOIN kortti ON asiakas.idAsiakas=kortti.idAsiakas WHERE Kortinnumero=?', [Kortinnumero], callback);
  },

  getNimi: function(callback) {
    return db.query('select Etunimi, Sukunimi from asiakas', callback);
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