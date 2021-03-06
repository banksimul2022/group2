const express = require('express');
const router = express.Router();
const kortti = require('../models/kortti_model');

router.get('/:Kortinnumero?',
 function(request, response) {
  if (request.params.Kortinnumero) {
    kortti.getPin(request.params.Kortinnumero, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    kortti.getAll(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});


router.post('/', 
function(request, response) {
  kortti.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:Kortinnumero', 
function(request, response) {
  kortti.delete(request.params.Kortinnumero, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:Kortinnumero', 
function(request, response) {
  kortti.update(request.params.Kortinnumero, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;