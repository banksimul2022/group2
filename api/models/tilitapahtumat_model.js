const db = require('../database');

const tilitapahtumat = {
  getTilitapahtumat: function(Kortinnumero, callback) {
    return db.query('select MAX(idTilitapahtumat) from tilitapahtumat', [Kortinnumero], callback);
  },

  ten: function(Kortinnumero, tapahtumat, callback) {
    return db.query('select * from tilitapahtumat JOIN kortti ON tilitapahtumat.idKortti=kortti.idKortti where Kortinnumero=? and idTilitapahtumat<=? order by PVM DESC limit 10',
    [Kortinnumero, tapahtumat], callback);
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