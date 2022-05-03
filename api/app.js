var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
const jwt = require('jsonwebtoken');

const tilitapahtumatRouter = require('./routes/tilitapahtumat');
const tiliRouter = require('./routes/tili');
const korttiRouter = require('./routes/kortti');
const asiakasRouter = require('./routes/asiakas');

const loginRouter = require('./routes/login');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
app.use(helmet());
app.use(cors());
app.use('/kortti', korttiRouter);
app.use('/login', loginRouter);
app.use(authenticateToken);


app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/asiakas', asiakasRouter);
app.use('/tili', tiliRouter);

function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]
  
    console.log("token = "+token);
    if (token == null) return res.sendStatus(401)
  
    jwt.verify(token, process.env.MY_TOKEN, (err, user) => {
      console.log(err)
  
      if (err) return res.sendStatus(403)
  
      req.user = user
  
      next()
    })
  }

module.exports = app;
