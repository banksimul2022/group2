var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');
var tiliRouter = require('./routes/tili');
var userRouter = require('./routes/user');
var korttiRouter = require('./kortti');
var asiakasRouter = require('./routes/asiakas');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili', tiliRouter);
app.use('/user', userRouter);
module.exports = app;
