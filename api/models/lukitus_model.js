const db = require('../database');

const lukitus = {
  getLukitus: function(Kortinnumero, callback) {
    return db.query('SELECT * FROM lukitus JOIN kortti ON lukitus.idKortti=kortti.idKortti WHERE Kortinnumero=?', [Kortinnumero], callback);
  },

  getNimi: function(callback) {
    return db.query('select * from lukitus', callback);
  },
  add: function(lukitus, callback) {
    return db.query(
      'insert into lukitus (Lukittu, idKortti) values(?,?)',
      [lukitus.Lukittu, lukitus.idKortti],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from lukitus where idLukitus=?', [id], callback);
  },
  update: function(Kortinnumero, lukitus, callback) {
    return db.query(
      'update lukitus JOIN kortti ON lukitus.idKortti=kortti.idKortti set Lukittu=? where Kortinnumero=?',
      [lukitus.Lukittu, Kortinnumero],
      callback
    );
  }
};
module.exports = lukitus;