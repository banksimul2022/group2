const db = require('../database');

const login={
  checkPinkoodi: function(kortinnumero, callback) {
      return db.query('SELECT * FROM kortti WHERE kortinnumero = ?',[kortinnumero], callback); 
    }
};
          
module.exports = login;