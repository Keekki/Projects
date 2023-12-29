const axios = require("axios");

async function getRefreshToken(code) {
  try {
    const { data } = await axios.post("https://oauth2.googleapis.com/token", {
      client_id:
        "************-n717gm***pgi1rstp2******nl0c****.apps.googleusercontent.com",
      client_secret: "GOCSPX-tKZk*****_******************",
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
  "4/0AfJohXlZOcT_******************************_iN78h8IZFK3YCtqfQeHJc4iuWLQ&scope=https://mail.google.com/"
);
