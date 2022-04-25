const db = require('../database');

const tili = {
  getSaldo: function(Kortinnumero, callback) {
    return db.query('select * from tili join kortti on tili.idTili=kortti.idTili where Kortinnumero=?', [Kortinnumero], callback);
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
  update: function(Kortinnumero, tili, callback) {
    return db.query(
      'update tili join kortti on tili.idTili=kortti.idTili set Saldo=? where Kortinnumero=?',
      [tili.Saldo, Kortinnumero],
      callback
    );
  }
};
module.exports = tili;