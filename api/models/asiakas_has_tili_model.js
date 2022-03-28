const db = require('../database');

const asiakas_has_tili = {
  getById: function(id, callback) {
    return db.query('select * from asiakas_has_tili where idAsiakas_has_tili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas_has_tili', callback);
  },
  add: function(asiakas_has_tili, callback) {
    return db.query(
      'insert into asiakas_has_tili (idAsiakas, idTili) values(?,?)',
      [asiakas_has_tili.idAsiakas, asiakas_has_tili.idTili],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas_has_tili where idasiakas_has_tili=?', [id], callback);
  },
  update: function(id, asiakas_has_tili, callback) {
    return db.query(
      'update asiakas_has_tili set idAsiakas=?,idTili=?',
      [asiakas_has_tili.idAsiakas, asiakas_has_tili.idTili, id],
      callback
    );
  }
};
module.exports = asiakas_has_tili;