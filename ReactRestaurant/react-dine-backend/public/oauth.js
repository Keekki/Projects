const { google } = require("googleapis");
const OAuth2 = google.auth.OAuth2;

const oauth2Client = new OAuth2(
  "*****************-********************2veuctrnl0cmfte.apps.googleusercontent.com",
  "******-tKZkFJmPH_********************",
  "http://127.0.0.1:****/callback"
);

// generate a url that asks permissions for Google's scopes
const scopes = ["https://mail.google.com/"];

const url = oauth2Client.generateAuthUrl({
  // 'online' (default) or 'offline' (gets refresh_token)
  access_type: "offline",

  // If you only need one scope you can pass it as a string
  scope: scopes,
});

console.log(url);
