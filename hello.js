var express = require("express");
var app = express();
const port = process.env.PORT || 5000;

app.listen(port, function(req, res){
    console.log("hello world!");
    console.log("server is running on port:", port);
    res.write("hello world");
    res.end();
});