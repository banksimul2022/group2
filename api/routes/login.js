const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');

router.post('/', 
  function(request, response) {
    if(request.body.Kortinnumero && request.body.Pinkoodi){
      const Kortinnumero = request.body.Kortinnumero;
      const Pinkoodi = request.body.Pinkoodi;
        login.checkPinkoodi(Kortinnumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(Pinkoodi,dbResult[0].Pinkoodi, function(err,compareResult) {
                if(compareResult) {
                  console.log("success");
                  const token = generateAccessToken({ Kortinnumero: Kortinnumero });
                  response.send(token);
                }
                else {
                    console.log("wrong pincode");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("card does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("cardnumber or pincode missing");
      response.send(false);
    }
  }
);

function generateAccessToken(Kortinnumero) {
  dotenv.config();
  return jwt.sign(Kortinnumero, process.env.MY_TOKEN, { expiresIn: '1800s' });
}


module.exports=router;