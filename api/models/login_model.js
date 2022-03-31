const db = require('../database');

const login={
  checkPinkoodi: function(kortinnumero, callback) {
      return db.query('SELECT Pinkoodi FROM kortti WHERE kortinnumero = ?',[kortinnumero], callback); 
    }
};
          
module.exports = login;