const db = require('../database');

const tili = {
  getNosta: function(Kortinnumero, callback) {
    return db.query('select etunimi, sukunimi, henkilötunnus, osoite, puhelinnumero, saldo from asiakas JOIN asiakas_has_tili ON asiakas.idAsiakas=asiakas_has_tili.idAsiakas JOIN tili ON asiakas_has_tili.idTili=tili.idTIli JOIN kortti ON tili.idTili=kortti.idTili WHERE Kortinnumero=?', [Kortinnumero], callback);
  },

  getAll: function(callback) {
   return db.query('select * from tili', callback);
  },

  add: function(tili, callback) {
    return db.query(
      'insert into tili (Saldo,Säästötili,Tilinumero) values(?,?,?)',
      [tili.Saldo, tili.Säästötili, tili.Tilinumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tili where idTili=?', [id], callback);
  },
  update: function(id, tili, callback) {
    return db.query(
      'update tili set Saldo=?,Säästötili=?, Tilinumero=? where idTili=?',
      [tili.Saldo, tili.Säästötili, tili.Tilinumero, id],
      callback
    );
  }
};
module.exports = tili;