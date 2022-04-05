const db = require('../database');

const tilitapahtumat = {
  /*getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where idTilitapahtumat=?', [id], callback);
  },*/

  getSaldo: function(Kortinnumero, callback) {
    return db.query('select etunimi, sukunimi, henkilötunnus, osoite, puhelinnumero, PVM, tapahtuma, summa, saldo FROM asiakas JOIN kortti ON asiakas.idAsiakas=kortti.idAsiakas JOIN tili ON kortti.idtili=tili.idTili JOIN tilitapahtumat ON tili.idTili=tilitapahtumat.idTili WHERE Kortinnumero=? ORDER BY PVM DESC LIMIT 10', [Kortinnumero], callback);
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