const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;

const kortti = {
  getPin: function(Kortinnumero, callback) {
    return db.query('select * from kortti where Kortinnumero=?', [Kortinnumero], callback);
  },

  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },

  add: function(kortti, callback) {
    bcrypt.hash(kortti.Pinkoodi, saltRounds, function(err, hash){
    return db.query(
      'insert into kortti (CVC,Kortinnumero,Vanhentumispäivä, Pinkoodi, idAsiakas, idTili) values(?,?,?,?,?,?)',
      [kortti.CVC, kortti.Kortinnumero, kortti.Vanhentumispäivä, hash, kortti.idAsiakas, kortti.idTili],
      callback)
    });
  },
  delete: function(Kortinnumero, callback) {
    return db.query('delete from kortti where Kortinnumero=?', [Kortinnumero], callback);
  },
  update: function(Kortinnumero, kortti, callback) {
    return db.query(
      'update kortti set Lukittu=? where Kortinnumero=?',
      [kortti.Lukittu, Kortinnumero],
      callback
    );
  }
};
module.exports = kortti;
