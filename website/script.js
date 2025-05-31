document.getElementById("generate").addEventListener("click", function() {
  const length = parseInt(document.getElementById("length").value);
  const chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}<>?/|";
  let password = "";

  if (isNaN(length) || length <= 0) {
    document.getElementById("result").innerText = "Enter a valid length.";
    return;
  }

  for (let i = 0; i < length; i++) {
    const randomIndex = Math.floor(Math.random() * chars.length);
    password += chars[randomIndex];
  }

  document.getElementById("result").innerText = password;
});
