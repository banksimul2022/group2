var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');

const tilitapahtumatRouter = require('./routes/tilitapahtumat');
const tiliRouter = require('./routes/tili');
const korttiRouter = require('./routes/kortti');
const asiakasRouter = require('./routes/asiakas');
const asiakas_has_tiliRouter = require('./routes/login');

const loginRouter = require('./routes/login');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
app.use(helmet());
app.use(cors());

app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili', tiliRouter);
app.use('/asiakas_has_tili', asiakas_has_tiliRouter);
app.use('/login', loginRouter);

module.exports = app;
