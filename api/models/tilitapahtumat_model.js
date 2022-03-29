const db = require('../database');

const tilitapahtumat = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where idTilitapahtumat=?', [id], callback);
  },

  getAll: function(callback) {
    return db.query('select * from tilitapahtumat ORDER BY PVM limit 10', callback);
  },

  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (PVM,Tapahtuma,Summa,idTili, idKortti) values(?,?,?,?,?)',
      [tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.idTili, tilitapahtumat.idKortti],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtumat where idTilitapahtumat=?', [id], callback);
  },
  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set PVM=?,Tapahtuma=?, Summa=?, idTili=?, idKortti=? where idTilitapahtumat=?',
      [tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.idTili, tilitapahtumat.idKortti, id],
      callback
    );
  }
};
module.exports = tilitapahtumat;