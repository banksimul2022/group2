var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

const helmet = require('helmet');
const cors = require('cors');
const basicAuth = require('express-basic-auth');

const tilitapahtumatRouter = require('./routes/tilitapahtumat');
const tiliRouter = require('./routes/tili');
const userRouter = require('./routes/user');
const korttiRouter = require('./routes/kortti');
const asiakasRouter = require('./routes/asiakas');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use(helmet());
app.use(cors());
app.use(basicAuth({users: { 'admin': '1234' }}))
app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili', tiliRouter);
app.use('/user', userRouter);
module.exports = app;
