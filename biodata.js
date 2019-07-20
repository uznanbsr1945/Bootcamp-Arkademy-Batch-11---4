function myBiodata() {
    let orang = {
        name: "Annas Rizky Bramoko",
        age: 23,
        address: "Citayam - Kabupaten Bogor",
        hobbies: ["Reading", "Learning"],
        is_married: false,
        list_school: [{
            year_in: 2002,
            year_out: 2008,
            major: null
        }, {
            year_in: 2008,
            year_out: 2011,
            major: null
        }, {
            year_in: 2011,
            year_out: 2014,
            major: "Rekayasa Perangkat Lunak"
        }],
        skills: [{
            skill_name: "layout",
            level: "advanced"
        }, {
            skill_name: "inkscape",
            level: "beginner"
        }, {
            skill_name: "html & css",
            level: "beginner"
        }],
        interest_in_coding: true
    };
    return orang;
}
console.log(JSON.stringify(myBiodata()));