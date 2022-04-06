const db = require('../database');

const tili = {
  getSaldo: function(Kortinnumero, callback) {
    return db.query('select Saldo from tili join kortti on tili.idTili=kortti.idTili where Kortinnumero=?', [Kortinnumero], callback);
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
      'update tili set Saldo=? where idTili=?',
      [tili.Saldo, id],
      callback
    );
  }
};
module.exports = tili;