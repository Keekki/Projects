const axios = require("axios");

async function getRefreshToken(code) {
  try {
    const { data } = await axios.post("https://oauth2.googleapis.com/token", {
      client_id:
        "**************-*****************2veuctrnl0cmfte.apps.googleusercontent.com",
      client_secret: "******-tKZkFJmPH_******************",
      code,
      grant_type: "authorization_code",
      redirect_uri: "http://127.0.0.1:****/callback",
    });

    console.log(data); // { access_token, expires_in, refresh_token, scope, token_type }
  } catch (error) {
    console.error(error);
  }
}

// Call the function with the authorization code
getRefreshToken(
  "4/***********_jY1MWaVtpeb******************_***********************eHJc4iuWLQ&scope=https://mail.google.com/"
);
