const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.kortinnumero && request.body.Pinkoodi){
      const kortinnumero = request.body.kortinnumero;
      const Pinkoodi = request.body.Pinkoodi;
        login.checkPinkoodi(kortinnumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(Pinkoodi,dbResult[0].Pinkoodi, function(err,compareResult) {
                if(compareResult) {
                  console.log("success");
                  response.send(true);
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

module.exports=router;