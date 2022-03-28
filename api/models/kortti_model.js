const db = require('../database');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where idKortti=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (CVC,Kortinnumero,Tyyppi,Vanhentumispäivä, Pinkoodi, idAsiakas, idTili) values(?,?,?,?,?,?,?)',
      [kortti.CVC, kortti.Kortinnumero, kortti.Tyyppi, kortti.Vanhentumispäivä, kortti.Pinkoodi, kortti.idAsiakas, kortti.idTili],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where idKortti=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    return db.query(
      'update kortti set CVC=?,Kortinnumero=?, Tyyppi=?, Vanhentumispäivä=?, Pinkoodi=?, idAsiakas=?, idTili=? where idKortti=?',
      [kortti.CVC, kortti.Kortinnumero, kortti.Tyyppi, kortti.Vanhentumispäivä, kortti.Pinkoodi, kortti.idAsiakas, kortti.idTili, id],
      callback
    );
  }
};
module.exports = kortti;
