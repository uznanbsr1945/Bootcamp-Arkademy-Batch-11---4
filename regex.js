function validate() {
    var usernameNo = document.getElementById('username').value;
    var usernameREGEX = /^[a-zA-Z]*(?=.*[A-Z])(?=.*[a-z])(?=.*[\d])(?!.*[\W\s_]+).{4,8}$/;
    var usernameResult = usernameREGEX.test(usernameNo);

    var passwordNo = document.getElementById('password').value;
    var passwordREGEX = /^(?=.*[A-Za-z])(?=.*[\d])(?=.*[=])(?=.*[#|?|@|!|$|%|^|&|*|-|_]).{8,}$/;
    var passwordResult = passwordREGEX.test(passwordNo);

    alert("Username: " + usernameResult + "Password: " + passwordResult);

    return false;
}