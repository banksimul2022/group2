const db = require('../database');

const tili = {
  getById: function(id, callback) {
    return db.query('select * from tili where idTili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tili', callback);
  },
  add: function(tili, callback) {
    return db.query(
      'insert into tili (Saldo,Säästötili,Tilinumero) values(?,?,?,?)',
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