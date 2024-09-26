#include "Geobot.hpp"

std::vector<Country> countries = {
        Country("Finland", "Helsinki", "Finnish", "Europe", 
                "Norway, Sweden, Russia", 
                "Baltic Sea, Gulf of Bothnia", "Arctic", "Blue, White"),
        
        Country("Poland", "Warsaw", "Polish", "Europe", 
                "Czech Republic, Germany, Slovakia, Ukraine, Belarus, Lithuania, Russia", 
                "Baltic Sea", "None", "White, Red"),
        
        Country("Ireland", "Dublin", "Irish", "Europe", 
                "United Kingdom", "Atlantic Ocean, Irish Sea", 
                "Atlantic Ocean, Irish Sea", "Green, White, Orange"),
        
        Country("Romania", "Bucharest", "Romanian", "Europe", 
                "Bulgaria, Hungary, Serbia, Ukraine, Moldova", 
                "Black Sea", "Black Sea", "Blue, Yellow, Red"),
        
        Country("Bulgaria", "Sofia", "Bulgarian", "Europe", 
                "Greece, Romania, Serbia, North Macedonia, Türkiye", 
                "Black Sea", "Black Sea", "White, Green, Red"),
        
        Country("Sweden", "Stockholm", "Swedish", "Europe", 
                "Denmark, Finland, Norway", "Baltic Sea", 
                "Baltic Sea", "Blue, Yellow"),
        
        Country("Norway", "Oslo", "Norwegian", "Europe", 
                "Finland, Sweden, Russia", 
                "Barents Sea, North Sea, Norwegian Sea", 
                "Atlantic Ocean, Arctic Ocean", "Red, White, Blue"),

        Country("Denmark", "Copenhagen", "Danish", "Europe", 
                "Germany, Sweden", 
                "Baltic Sea, North Sea", "Baltic Sea, North Sea", "Red, White"),
        
        Country("Greece", "Athens", "Greek", "Europe", 
                "Albania, Bulgaria, Türkiye", 
                "Aegean Sea, Ionian Sea, Mediterranean Sea", 
                "Aegean Sea, Ionian Sea, Mediterranean Sea", "Blue, White"),
        
        Country("Slovakia", "Bratislava", "Slovak", "Europe", 
                "Austria, Czech Republic, Hungary, Poland, Ukraine", 
                "None", "None", "White, Blue, Red"),
        
        Country("Slovenia", "Ljubljana", "Slovenian", "Europe", 
                "Austria, Croatia, Hungary, Italy", 
                "Adriatic Sea", "Adriatic Sea", "White, Blue, Red"),
        
        Country("Croatia", "Zagreb", "Croatian", "Europe", 
                "Bosnia and Herzegovina, Hungary, Montenegro, Serbia, Slovenia", 
                "Adriatic Sea", "Adriatic Sea", "Red, White, Blue"),
        
        Country("Bosnia and Herzegovina", "Sarajevo", "Bosnian, Croatian, Serbian", "Europe", 
                "Croatia, Montenegro, Serbia", 
                "Adriatic Sea", "None", "Blue, Yellow"),
        
        Country("Montenegro", "Podgorica", "Montenegrin", "Europe", 
                "Albania, Bosnia and Herzegovina, Croatia, Kosovo, Serbia", 
                "Adriatic Sea", "Adriatic Sea", "Red, White"),
        
        Country("North Macedonia", "Skopje", "Macedonian", "Europe", 
                "Albania, Bulgaria, Greece, Kosovo, Serbia", 
                "None", "None", "Red, Yellow"),
        
        Country("Kosovo", "Pristina", "Albanian, Serbian", "Europe", 
                "Albania, Montenegro, North Macedonia, Serbia", 
                "None", "None", "Blue, Yellow, White"),
        
        Country("Albania", "Tirana", "Albanian", "Europe", 
                "Greece, Kosovo, Montenegro, North Macedonia", 
                "Adriatic Sea, Ionian Sea", "Adriatic Sea, Ionian Sea", "Red, Black"),
        
        Country("Serbia", "Belgrade", "Serbian", "Europe", 
                "Bosnia and Herzegovina, Bulgaria, Croatia, Hungary, Kosovo, Montenegro, North Macedonia, Romania", 
                "None", "None", "Red, Blue, White"),
        
        Country("Cyprus", "Nicosia", "Greek, Turkish", "Europe", 
                "None", "Mediterranean Sea", "Mediterranean Sea", "White"),
        
        Country("Luxembourg", "Luxembourg City", "Luxembourgish, French, German", "Europe", 
                "Belgium, France, Germany", 
                "None", "None", "Red, White, Blue"),
        
        Country("Malta", "Valletta", "Maltese, English", "Europe", 
                "None", "Mediterranean Sea", "Mediterranean Sea", "Red, White"),
        
        Country("Andorra", "Andorra la Vella", "Catalan", "Europe", 
                "France, Spain", "None", "None", "Blue, Yellow, Red"),
        
        Country("Liechtenstein", "Vaduz", "German", "Europe", 
                "Austria, Switzerland", "None", "None", "Blue, Red"),
        
        Country("Monaco", "Monaco", "French", "Europe", 
                "France", "Mediterranean Sea", "Mediterranean Sea", "Red, White"),
        
        Country("San Marino", "San Marino", "Italian", "Europe", 
                "Italy", "None", "None", "Blue, White"),
        
        Country("Vatican", "Vatican City", "Italian", "Europe", 
                "Italy", "None", "None", "Yellow, White"),
        
        Country("Estonia", "Tallinn", "Estonian", "Europe", 
                "Latvia, Russia", 
                "Baltic Sea, Gulf of Finland", "Baltic Sea, Gulf of Finland", "Blue, Black, White"),

        Country("Latvia", "Riga", "Latvian", "Europe", 
                "Estonia, Lithuania, Russia", 
                "Baltic Sea", "Baltic Sea", "Red, White"),
        
        Country("Lithuania", "Vilnius", "Lithuanian", "Europe", 
                "Belarus, Latvia, Poland, Russia", 
                "Baltic Sea", "Baltic Sea", "Yellow, Green, Red"),
        
        Country("Moldova", "Chisinau", "Romanian", "Europe", 
                "Romania, Ukraine", 
                "None", "None", "Blue, Yellow, Red"),
        
        Country("Ukraine", "Kyiv", "Ukrainian", "Europe", 
                "Belarus, Hungary, Poland, Romania, Russia, Slovakia", 
                "Black Sea, Sea of Azov", "Black Sea", "Yellow, Blue"),
        
        Country("France", "Paris", "French", "Europe", 
                "Belgium, Germany, Italy, Luxembourg, Monaco, Spain, Switzerland", 
                "Mediterranean Sea, English Channel, North Sea, Atlantic Ocean", 
                "Atlantic Ocean, Mediterranean Sea", "Blue, White, Red"),
        
        Country("Germany", "Berlin", "German", "Europe", 
                "Austria, Belgium, Czech Republic, Denmark, France, Luxembourg, Netherlands, Poland, Switzerland", 
                "North Sea, Baltic Sea", 
                "Atlantic Ocean, North Sea, Baltic Sea", "Black, Red, Gold"),
        
        Country("Italy", "Rome", "Italian", "Europe", 
                "Austria, France, San Marino, Slovenia, Switzerland, Vatican City", 
                "Adriatic Sea, Ionian Sea, Tyrrhenian Sea, Ligurian Sea", 
                "Mediterranean Sea, Tyrrhenian Sea, Ionian Sea, Adriatic Sea", "Green, White, Red"),
        
        Country("Spain", "Madrid", "Spanish", "Europe", 
                "Andorra, France, Portugal", 
                "Atlantic Ocean, Mediterranean Sea", "Atlantic Ocean, Mediterranean Sea", "Red, Yellow"),
        
        Country("United Kingdom", "London", "English", "Europe", 
                "Ireland", 
                "Atlantic Ocean, North Sea, English Channel, Irish Sea", 
                "Atlantic Ocean, North Sea, English Channel", "Red, White, Blue"),
        
        Country("Netherlands", "Amsterdam", "Dutch", "Europe", 
                "Belgium, Germany", 
                "North Sea", "North Sea", "Red, White, Blue"),
        
        Country("Belgium", "Brussels", "Dutch, French, German", "Europe", 
                "France, Germany, Luxembourg, Netherlands", 
                "North Sea", "North Sea", "Black, Yellow, Red"),
        
        Country("Portugal", "Lisbon", "Portuguese", "Europe", 
                "Spain", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Red"),
        
        Country("Switzerland", "Bern", "German, French, Italian, Romansh", "Europe", 
                "Austria, France, Germany, Italy, Liechtenstein", 
                "Lake Geneva, Lake Constance", "None", "Red, White"),
        
        Country("Austria", "Vienna", "German", "Europe", 
                "Czech Republic, Germany, Hungary, Italy, Liechtenstein, Slovakia, Slovenia, Switzerland", 
                "None", "None", "Red, White"),
        
        Country("Czech Republic", "Prague", "Czech", "Europe", 
                "Austria, Germany, Poland, Slovakia", 
                "None", "None", "White, Red"),
        
        Country("Hungary", "Budapest", "Hungarian", "Europe", 
                "Austria, Croatia, Romania, Serbia, Slovakia, Slovenia, Ukraine", 
                "None", "None", "Red, White, Green"),
        
        Country("Iceland", "Reykjavik", "Icelandic", "Europe", 
                "Island, no border country", 
                "Greenland Sea, Denmark Strait, Atlantic Ocean", "Atlantic Ocean, Arctic Ocean", "Blue, Red, White"),
        
        Country("Russia", "Moscow", "Russian", "Europe and Asia", 
                "Azerbaijan, Belarus, China, Estonia, Finland, Georgia, Kazakhstan, Latvia, Lithuania, Mongolia, Norway, Poland, Ukraine", 
                "Barents Sea, Baltic Sea, Black Sea, Caspian Sea, Sea of Azov", 
                "Arctic Ocean, Atlantic Ocean, Baltic Sea, Black Sea, Caspian Sea, Pacific Ocean", "White, Blue, Red"),
        
        Country("Belarus", "Minsk", "Belarusian, Russian", "Europe", 
                "Latvia, Lithuania, Poland, Russia, Ukraine", 
                "None", "None", "Red, Green"),

        Country("China", "Beijing", "Mandarin", "Asia", 
                "Afghanistan, Bhutan, India, Kazakhstan, Kyrgyzstan, Laos, Mongolia, Myanmar, Nepal, North Korea, Pakistan, Russia, Tajikistan, Vietnam", 
                "East China Sea, South China Sea, Yellow Sea", "Pacific Ocean", "Red"),
        
        Country("Japan", "Tokyo", "Japanese", "Asia", 
                "South Korea, China", 
                "East China Sea, Sea of Japan", "Pacific Ocean", "Red, White"),
        
        Country("South Korea", "Seoul", "Korean", "Asia", 
                "North Korea", 
                "East China Sea, Sea of Japan, Yellow Sea", "East China Sea, Sea of Japan", "Red, Blue, White"),
        
        Country("North Korea", "Pyongyang", "Korean", "Asia", 
                "China, South Korea, Russia", 
                "East China Sea, Sea of Japan, Yellow Sea", "East China Sea, Sea of Japan", "Red, White, Blue"),
        
        Country("Mongolia", "Ulaanbaatar", "Mongolian", "Asia", 
                "China, Russia", 
                "None", "None", "Red, Blue, Yellow"),
        
        Country("Vietnam", "Hanoi", "Vietnamese", "Asia", 
                "Cambodia, China, Laos", 
                "South China Sea", "Pacific Ocean", "Red, Yellow"),
        
        Country("Laos", "Vientiane", "Lao", "Asia", 
                "Cambodia, China, Myanmar, Thailand, Vietnam", 
                "None", "None", "Red, Blue"),
        
        Country("Cambodia", "Phnom Penh", "Khmer", "Asia", 
                "Laos, Thailand, Vietnam", 
                "Gulf of Thailand", "Pacific Ocean", "Red, Blue, White"),
        
        Country("Kazakhstan", "Nur-Sultan", "Kazakh, Russian", "Asia", 
                "China, Kyrgyzstan, Russia, Turkmenistan, Uzbekistan", 
                "Caspian Sea, Aral Sea", "None", "Blue, Yellow"),
        
        Country("Uzbekistan", "Tashkent", "Uzbek", "Asia", 
                "Afghanistan, Kazakhstan, Kyrgyzstan, Tajikistan, Turkmenistan", 
                "None", "None", "Blue, White, Green"),
        
        Country("Turkmenistan", "Ashgabat", "Turkmen", "Asia", 
                "Afghanistan, Iran, Kazakhstan, Uzbekistan", 
                "Caspian Sea", "None", "Green, White"),
        
        Country("Kyrgyzstan", "Bishkek", "Kyrgyz", "Asia", 
                "China, Kazakhstan, Tajikistan, Uzbekistan", 
                "None", "None", "Red, Yellow"),
        
        Country("Tajikistan", "Dushanbe", "Tajik", "Asia", 
                "Afghanistan, China, Kyrgyzstan, Uzbekistan", 
                "None", "None", "Red, White, Green"),
        
        Country("India", "New Delhi", "Hindi, English", "Asia", 
                "Bangladesh, Bhutan, China, Nepal, Pakistan", 
                "Arabian Sea, Bay of Bengal", "Indian Ocean", "Saffron, White, Green"),
        
        Country("Pakistan", "Islamabad", "Urdu, English", "Asia", 
                "Afghanistan, China, India, Iran", 
                "Arabian Sea", "Arabian Sea", "Green, White"),
        
        Country("Bangladesh", "Dhaka", "Bengali", "Asia", 
                "India, Myanmar", 
                "Bay of Bengal", "Bay of Bengal", "Green, Red"),
        
        Country("Nepal", "Kathmandu", "Nepali", "Asia", 
                "China, India", 
                "None", "None", "Red, White"),
        
        Country("Bhutan", "Thimphu", "Dzongkha", "Asia", 
                "China, India", 
                "None", "None", "Orange, Yellow"),
        
        Country("Sri Lanka", "Sri Jayawardenapura Kotte", "Sinhala, Tamil", "Asia", 
                "None", 
                "Indian Ocean", "Indian Ocean", "Saffron, Green, Maroon"),
        
        Country("Maldives", "Malé", "Dhivehi", "Asia", 
                "None", 
                "Indian Ocean", "Indian Ocean", "Red, White"),
                
        Country("Myanmar", "Naypyidaw", "Burmese", "Asia", "Bangladesh, China, India, Laos, Thailand", 
                "Andaman Sea, Bay of Bengal", "Bay of Bengal", "Red, Yellow, Green"),
        
        Country("Afghanistan", "Kabul", "Dari, Pashto", "Asia", "China, Iran, Pakistan, Tajikistan, Turkmenistan, Uzbekistan", 
                "None", "None", "Black, Red, Green"),
        
        Country("Saudi Arabia", "Riyadh", "Arabic", "Asia", "Iraq, Jordan, Kuwait, Oman, Qatar, UAE, Yemen", 
                "Red Sea, Persian Gulf", "Arabian Sea, Red Sea, Persian Gulf", "Green"),
        
        Country("Iran", "Tehran", "Persian", "Asia", "Afghanistan, Armenia, Azerbaijan, Iraq, Pakistan, Türkiye, Turkmenistan", 
                "Caspian Sea, Persian Gulf", "Caspian Sea, Persian Gulf", "Green, White, Red"),
        
        Country("Iraq", "Baghdad", "Arabic, Kurdish", "Asia", "Iran, Jordan, Kuwait, Saudi Arabia, Syria, Türkiye", 
                "Persian Gulf", "Persian Gulf", "Black, White, Green, Red"),
        
        Country("Türkiye or Turkey", "Ankara", "Turkish", "Asia", "Armenia, Azerbaijan, Bulgaria, Georgia, Greece, Iran, Iraq, Syria", 
                "Aegean Sea, Black Sea, Mediterranean Sea", "Aegean Sea, Mediterranean Sea", "Red"),
        
        Country("Syria", "Damascus", "Arabic", "Asia", "Iraq, Israel, Jordan, Lebanon, Türkiye", 
                "Mediterranean Sea", "Mediterranean Sea", "Red, White, Black"),
        
        Country("Lebanon", "Beirut", "Arabic", "Asia", "Israel, Syria", 
                "Mediterranean Sea", "Mediterranean Sea", "Red, White"),
        
        Country("Jordan", "Amman", "Arabic", "Asia", "Iraq, Israel, Saudi Arabia, Syria", 
                "Dead Sea", "None", "Black, White, Green"),
        
        Country("Israel", "Jerusalem", "Hebrew", "Asia", "Jordan, Lebanon, Syria", 
                "Mediterranean Sea, Dead Sea", "Mediterranean Sea, Red Sea", "Blue, White"),
        
        Country("Palestine", "Ramallah", "Arabic", "Asia", "Israel", 
                "None", "None", "Black, White, Green, Red"),
        
        Country("United Arab Emirates", "Abu Dhabi", "Arabic", "Asia", "Oman, Saudi Arabia", 
                "Arabian Sea, Persian Gulf", "Arabian Sea, Persian Gulf", "Black, White, Green, Red"),
        
        Country("Qatar", "Doha", "Arabic", "Asia", "Saudi Arabia", 
                "Persian Gulf", "Persian Gulf", "Maroon, White"),
        
        Country("Kuwait", "Kuwait City", "Arabic", "Asia", "Iraq, Saudi Arabia", 
                "Persian Gulf", "Persian Gulf", "Green, White, Black"),
        
        Country("Oman", "Muscat", "Arabic", "Asia", "Saudi Arabia, UAE, Yemen", 
                "Arabian Sea, Gulf of Oman", "Arabian Sea", "Red, White, Green"),
        
        Country("Yemen", "Sana'a", "Arabic", "Asia", "Oman, Saudi Arabia", 
                "Arabian Sea, Gulf of Aden, Red Sea", "Arabian Sea, Red Sea", "Red, White, Black"),
        
        Country("Bahrain", "Manama", "Arabic", "Asia", "Saudi Arabia", 
                "Persian Gulf", "Persian Gulf", "Red, White"),
        
        Country("Georgia", "Tbilisi", "Georgian", "Asia", "Armenia, Azerbaijan, Russia, Turkey", 
                "Black Sea", "Black Sea", "White, Red"),
        
        Country("Azerbaijan", "Baku", "Azerbaijani", "Asia", "Armenia, Georgia, Iran, Russia, Turkey", 
                "Caspian Sea", "Caspian Sea", "Blue, Red, Green"),
        
        Country("Armenia", "Yerevan", "Armenian", "Asia", "Azerbaijan, Georgia, Iran, Turkey", 
                "None", "None", "Red, Blue, Orange"),

        Country("Indonesia", "Jakarta", "Indonesian", "Asia", "Australia, Malaysia, Papua New Guinea, East Timor", 
                "Pacific Ocean, Indian Ocean", "Pacific Ocean, Indian Ocean", "Red, White"),
        
        Country("Philippines", "Manila", "Filipino, English", "Asia", "Brunei, China, Indonesia, Malaysia, Taiwan, Vietnam", 
                "Philippine Sea, South China Sea", "Pacific Ocean", "Blue, Red, Yellow, White"),
        
        Country("Thailand", "Bangkok", "Thai", "Asia", "Cambodia, Laos, Malaysia, Myanmar", 
                "Gulf of Thailand, Andaman Sea", "Pacific Ocean, Indian Ocean", "Red, White, Blue"),
        
        Country("Malaysia", "Kuala Lumpur", "Malay", "Asia", "Brunei, Indonesia, Thailand", 
                "South China Sea", "Pacific Ocean", "Red, White, Blue, Yellow"),
        
        Country("Singapore", "Singapore", "Malay, English, Mandarin, Tamil", "Asia", "Malaysia", 
                "Strait of Malacca", "Pacific Ocean", "Red, White"),
        
        Country("Timor-Leste", "Dili", "Tetum, Portuguese", "Asia", "Indonesia", 
                "Timor Sea, Savu Sea, Banda Sea", "Pacific Ocean", "Red, Yellow, Black, White"),
        
        Country("Brunei", "Bandar Seri Begawan", "Malay", "Asia", "Malaysia", 
                "South China Sea", "Pacific Ocean", "Yellow, Black, White"),
        
        Country("Hong Kong", "Hong Kong", "Cantonese, English, Mandarin", "Asia", "China", 
                "South China Sea", "Pacific Ocean", "Red, White"),
        
        Country("Macao", "Macao", "Portuguese, Cantonese, Mandarin", "Asia", "China", 
                "South China Sea", "Pacific Ocean", "Green, White"),
        
        Country("Morocco", "Rabat", "Arabic, Berber", "Africa", "Algeria, Spain", 
                "Atlantic Ocean, Mediterranean Sea", "Atlantic Ocean, Mediterranean Sea", "Red, Green"),
        
        Country("Algeria", "Algiers", "Arabic, Berber", "Africa", "Libya, Mali, Mauritania, Morocco, Niger, Tunisia, Western Sahara", 
                "Mediterranean Sea", "Mediterranean Sea", "Green, White, Red"),
        
        Country("Tunisia", "Tunis", "Arabic", "Africa", "Algeria, Libya", 
                "Mediterranean Sea", "Mediterranean Sea", "Red, White"),
        
        Country("Libya", "Tripoli", "Arabic", "Africa", "Algeria, Chad, Egypt, Niger, Sudan, Tunisia", 
                "Mediterranean Sea", "Mediterranean Sea", "Red, Black, Green"),
        
        Country("Egypt", "Cairo", "Arabic", "Africa", "Israel, Libya, Sudan", 
                "Mediterranean Sea, Red Sea", "Mediterranean Sea, Red Sea", "Black, White, Red"),
        
        Country("Sudan", "Khartoum", "Arabic, English", "Africa", "Central African Republic, Chad, Egypt, Eritrea, Ethiopia, Libya, South Sudan", 
                "Red Sea", "None", "Black, Red, Green"),
        
        Country("South Sudan", "Juba", "English", "Africa", "Central African Republic, Democratic Republic of the Congo, Ethiopia, Kenya, Sudan, Uganda", 
                "None", "None", "Black, Red, Green, Blue, Yellow, White"),
        
        Country("Eritrea", "Asmara", "Tigrinya, Arabic, English", "Africa", "Djibouti, Ethiopia, Sudan", 
                "Red Sea", "None", "Red, Green, Blue"),
        
        Country("Djibouti", "Djibouti", "French, Arabic", "Africa", "Eritrea, Ethiopia, Somalia", 
                "Red Sea, Gulf of Aden", "None", "Light Blue, Green, Light Blue"),
        
        Country("Somalia", "Mogadishu", "Somali, Arabic", "Africa", "Djibouti, Ethiopia, Kenya", 
                "Indian Ocean", "Indian Ocean", "Blue, White"),
        
        Country("Mauritania", "Nouakchott", "Arabic", "Africa", "Algeria, Mali, Senegal, Western Sahara", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Red"),
        
        Country("Sierra Leone", "Freetown", "English", "Africa", "Guinea, Liberia", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, White, Blue"),
        
        Country("Gabon", "Libreville", "French", "Africa", "Cameroon, Republic of the Congo, Equatorial Guinea", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Blue"),
        
        Country("Equatorial Guinea", "Malabo", "Spanish, French, Portuguese", "Africa", "Cameroon, Gabon", 
                "Atlantic Ocean, Gulf of Guinea", "Atlantic Ocean", "Green, White, Red"),
        
        Country("Sao Tome and Principe", "São Tomé", "Portuguese", "Africa", "Gabon", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Green"),
        
        Country("Cameroon", "Yaoundé", "French, English", "Africa", "Central African Republic, Chad, Republic of the Congo, Equatorial Guinea, Gabon, Nigeria", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Red, Yellow"),
        
        Country("Republic of the Congo", "Brazzaville", "French", "Africa", "Angola, Cameroon, Central African Republic, Democratic Republic of the Congo, Gabon", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Red"),
        
        Country("Democratic Republic of the Congo", "Kinshasa", "French", "Africa", "Angola, Burundi, Central African Republic, Republic of the Congo, Rwanda, South Sudan, Tanzania, Uganda, Zambia", 
                "Atlantic Ocean", "Atlantic Ocean", "Blue, Yellow, Red"),
        
        Country("Uganda", "Kampala", "English, Swahili", "Africa", "Democratic Republic of the Congo, Kenya, Rwanda, South Sudan, Tanzania", 
                "None", "None", "Black, Yellow, Red"),
        
        Country("Rwanda", "Kigali", "Kinyarwanda, French, English", "Africa", "Burundi, Democratic Republic of the Congo, Tanzania, Uganda", 
                "None", "None", "Blue, Yellow, Green"),

        Country("Burundi", "Bujumbura", "Kirundi, French, English", "Africa", "Democratic Republic of the Congo, Rwanda, Tanzania", 
                "None", "None", "Red, White, Green"),
        Country("Tanzania", "Dodoma", "Swahili, English", "Africa", "Burundi, Democratic Republic of the Congo, Kenya, Malawi, Mozambique, Rwanda, Uganda, Zambia", 
                "Indian Ocean", "Indian Ocean", "Green, Yellow, Black, Blue"),
        Country("Angola", "Luanda", "Portuguese", "Africa", "Democratic Republic of the Congo, Namibia, Zambia", 
                "Atlantic Ocean", "Atlantic Ocean", "Black, Red, Yellow"),
        Country("Namibia", "Windhoek", "English", "Africa", "Angola, Botswana, South Africa, Zambia", 
                "Atlantic Ocean", "Atlantic Ocean", "Blue, Red, Green, White, Yellow"),
        Country("Botswana", "Gaborone", "English", "Africa", "Namibia, South Africa, Zimbabwe, Zambia", 
                "None", "None", "Blue, Black, White, Green, Yellow"),
        Country("South Africa", "Pretoria", "Afrikaans, English, Zulu, Xhosa", "Africa", "Botswana, Lesotho, Mozambique, Namibia, Eswatini, Zimbabwe", 
                "Atlantic Ocean, Indian Ocean", "Indian Ocean, Atlantic Ocean", "Black, Green, Yellow, Red, White, Blue"),
        Country("Lesotho", "Maseru", "English, Sesotho", "Africa", "South Africa", 
                "None", "None", "Blue, White, Green, Brown"),
        Country("Eswatini", "Mbabane", "Swazi, English", "Africa", "Mozambique, South Africa", 
                "None", "None", "Blue, Yellow, Red"),
        Country("Mozambique", "Maputo", "Portuguese", "Africa", "Eswatini, Malawi, South Africa, Tanzania, Zambia, Zimbabwe", 
                "Indian Ocean", "Indian Ocean", "Green, Black, Yellow, White, Red"),
        Country("Zambia", "Lusaka", "English", "Africa", "Angola, Democratic Republic of the Congo, Malawi, Mozambique, Namibia, Tanzania, Zimbabwe", 
                "None", "None", "Green, Orange, Black, Red"),
        Country("Zimbabwe", "Harare", "English, Shona", "Africa", "Botswana, Mozambique, South Africa, Zambia", 
                "None", "None", "Green, Yellow, Red, Black, White"),
        Country("Malawi", "Lilongwe", "English, Chichewa", "Africa", "Mozambique, Tanzania, Zambia", 
                "None", "None", "Black, Red, Green"),
        Country("Madagascar", "Antananarivo", "Malagasy, French, English", "Africa", 
                "None", "Indian Ocean", "Indian Ocean", "Red, White, Green"),
        Country("Guinea-Bissau", "Bissau", "Portuguese", "Africa", "Guinea, Senegal", 
                "Atlantic Ocean", "Atlantic Ocean", "Yellow, Green, Red"),
        Country("Guinea", "Conakry", "French", "Africa", "Côte d'Ivoire, Guinea-Bissau, Liberia, Mali, Senegal, Sierra Leone", 
                "Atlantic Ocean", "Atlantic Ocean", "Red, Yellow, Green"),
        Country("Nigeria", "Abuja", "English", "Africa", "Benin, Cameroon, Chad, Niger", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, White"),
        Country("Ethiopia", "Addis Ababa", "Amharic", "Africa", "Djibouti, Eritrea, Kenya, Somalia, South Sudan, Sudan", 
                "None", "None", "Green, Yellow, Red"),
        Country("Ghana", "Accra", "English", "Africa", "Burkina Faso, Côte d'Ivoire, Togo", 
                "Gulf of Guinea", "Atlantic Ocean", "Red, Yellow, Green"),
        Country("Ivory Coast", "Yamoussoukro", "French", "Africa", "Burkina Faso, Ghana, Guinea, Liberia, Mali", 
                "Atlantic Ocean", "Atlantic Ocean", "Orange, White, Green"),
        Country("Niger", "Niamey", "French", "Africa", "Algeria, Benin, Burkina Faso, Chad, Libya, Mali, Nigeria", 
                "None", "None", "Orange, White, Green"),
        Country("Kenya", "Nairobi", "Swahili, English", "Africa", "Ethiopia, Somalia, South Sudan, Tanzania, Uganda", 
                "Indian Ocean", "Indian Ocean", "Black, Red, Green"),
        Country("Mali", "Bamako", "French", "Africa", "Algeria, Burkina Faso, Guinea, Ivory Coast, Mauritania, Niger, Senegal", 
                "None", "None", "Green, Yellow, Red"),
        Country("Burkina Faso", "Ouagadougou", "French", "Africa", "Benin, Côte d'Ivoire, Ghana, Mali, Niger, Togo", 
                "None", "None", "Red, Green, Yellow"),
        Country("Chad", "N'Djamena", "French, Arabic", "Africa", "Cameroon, Central African Republic, Libya, Niger, Nigeria, Sudan", 
                "None", "None", "Blue, Yellow, Red"),
        Country("Senegal", "Dakar", "French", "Africa", "Mauritania, Mali, Guinea, Guinea-Bissau, Atlantic Ocean", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Red"),
        Country("Benin", "Porto-Novo", "French", "Africa", "Burkina Faso, Nigeria, Niger, Togo", 
                "Atlantic Ocean", "Atlantic Ocean", "Yellow, Green, Red"),
        Country("Togo", "Lome", "French", "Africa", "Benin, Burkina Faso, Ghana", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Red"),
        Country("Central African Republic", "Bangui", "French, Sango", "Africa", "Cameroon, Chad, Congo, Democratic Republic of the Congo, South Sudan, Sudan", 
                "None", "None", "Blue, White, Red"),
        Country("Liberia", "Monrovia", "English", "Africa", "Côte d'Ivoire, Guinea, Sierra Leone, Atlantic Ocean", 
                "Atlantic Ocean", "Atlantic Ocean", "Blue, White, Red"),
        Country("Gambia", "Banjul", "English", "Africa", "Senegal, Atlantic Ocean", 
                "Atlantic Ocean", "Atlantic Ocean", "Blue, White, Green"),
        Country("Mauritius", "Port Louis", "English", "Africa", 
                "None", "Indian Ocean", "Indian Ocean", "Red, Blue, Yellow, Green"),
        Country("Seychelles", "Victoria", "Seychellois Creole, English, French", "Africa", 
                "None", "Indian Ocean", "Indian Ocean", "Blue, Yellow, Red, White"),
        Country("Comoros", "Moroni", "Comorian, Arabic, French", "Africa", "Madagascar, Mozambique, Mayotte (France), Tanzania", 
                "Indian Ocean", "Indian Ocean", "Green, Yellow, Red, White"),
        Country("Cape Verde", "Praia", "Portuguese", "Africa", 
                "Atlantic Ocean", "Atlantic Ocean", "Atlantic Ocean", "Blue, White, Red"),
        Country("Canada", "Ottawa", "English, French", "North America", "United States", 
                "Atlantic Ocean, Pacific Ocean, Arctic Ocean", "Atlantic Ocean, Pacific Ocean, Arctic Ocean", "Red, White"),
        Country("United States", "Washington D.C.", "English", "North America", "Canada, Mexico", 
                "Atlantic Ocean, Pacific Ocean, Gulf of Mexico", "Atlantic Ocean, Pacific Ocean, Gulf of Mexico", "Red, White, Blue"),
        Country("Mexico", "Mexico City", "Spanish", "North America", "United States, Belize, Guatemala", 
                "Pacific Ocean, Gulf of Mexico, Caribbean Sea", "Pacific Ocean, Gulf of Mexico, Caribbean Sea", "Green, White, Red"),
        Country("Belize", "Belmopan", "English", "North America", "Guatemala, Mexico", 
                "Caribbean Sea", "Caribbean Sea", "Blue, Red, White"),
        Country("Guatemala", "Guatemala City", "Spanish", "North America", "Belize, El Salvador, Honduras, Mexico", 
                "Pacific Ocean, Gulf of Honduras, Caribbean Sea", "Pacific Ocean, Gulf of Honduras, Caribbean Sea", "Blue, White"),
        Country("El Salvador", "San Salvador", "Spanish", "North America", "Guatemala, Honduras", 
                "Pacific Ocean", "Pacific Ocean", "Blue, White"),
        Country("Honduras", "Tegucigalpa", "Spanish", "North America", "El Salvador, Guatemala, Nicaragua", 
                "Caribbean Sea, Pacific Ocean", "Caribbean Sea, Pacific Ocean", "Blue, White"),
        Country("Nicaragua", "Managua", "Spanish", "North America", "Costa Rica, Honduras", 
                "Caribbean Sea, Pacific Ocean", "Caribbean Sea, Pacific Ocean", "Blue, White"),
        Country("Costa Rica", "San José", "Spanish", "North America", "Nicaragua, Panama", 
                "Pacific Ocean, Caribbean Sea", "Pacific Ocean, Caribbean Sea", "Blue, White, Red"),
        Country("Panama", "Panama City", "Spanish", "North America", "Colombia, Costa Rica", 
                "Pacific Ocean, Caribbean Sea", "Pacific Ocean, Caribbean Sea", "Blue, White, Red"),
        Country("Cuba", "Havana", "Spanish", "Central America", "Bahamas, United States", 
                "Caribbean Sea, Gulf of Mexico", "Caribbean Sea, Gulf of Mexico", "Blue, White, Red"),
        Country("Dominican Republic", "Santo Domingo", "Spanish", "Central America", "Haiti", 
                "Atlantic Ocean, Caribbean Sea", "Atlantic Ocean, Caribbean Sea", "Blue, White, Red"),
        Country("Haiti", "Port-au-Prince", "French, Haitian Creole", "Central America", "Dominican Republic", 
                "Atlantic Ocean, Caribbean Sea", "Atlantic Ocean, Caribbean Sea", "Blue, Red"),
        Country("Jamaica", "Kingston", "English", "Central America", "Cayman Islands, Cuba, Haiti", 
                "Caribbean Sea", "Caribbean Sea", "Green, Yellow, Black"),
        Country("Puerto Rico", "San Juan", "Spanish, English", "Central America", "None", 
                "Atlantic Ocean, Caribbean Sea", "Atlantic Ocean, Caribbean Sea", "Blue, White, Red"),
        Country("Bahamas", "Nassau", "English", "Central America", "Cuba, United States", 
                "Atlantic Ocean", "Atlantic Ocean", "Blue, Yellow, Black"),
        Country("Barbados", "Bridgetown", "English", "Central America", "None", 
                "Atlantic Ocean, Caribbean Sea", "Atlantic Ocean, Caribbean Sea", "Blue, Yellow, Black"),
        Country("Trinidad and Tobago", "Port of Spain", "English", "Central America", "Venezuela", 
                "Atlantic Ocean, Caribbean Sea", "Atlantic Ocean, Caribbean Sea", "Red, White, Black"),
        Country("Argentina", "Buenos Aires", "Spanish", "South America", "Bolivia, Brazil, Chile, Paraguay, Uruguay", 
                "Atlantic Ocean", "Atlantic Ocean", "Blue, White"),
        Country("Brazil", "Brasília", "Portuguese", "South America", "Argentina, Bolivia, Colombia, Paraguay, Peru, Uruguay, Venezuela", 
                "Atlantic Ocean", "Atlantic Ocean", "Green, Yellow, Blue, White"),
        Country("Chile", "Santiago", "Spanish", "South America", "Argentina, Bolivia, Peru", 
                "Pacific Ocean", "Pacific Ocean", "Red, White, Blue"),
        Country("Colombia", "Bogotá", "Spanish", "South America", "Brazil, Ecuador, Panama, Peru, Venezuela", 
                "Atlantic Ocean, Pacific Ocean, Caribbean Sea", "Atlantic Ocean, Pacific Ocean, Caribbean Sea", "Yellow, Blue, Red"),
        Country("Ecuador", "Quito", "Spanish", "South America", "Colombia, Peru", 
                "Pacific Ocean", "Pacific Ocean", "Yellow, Blue, Red"),
        Country("Peru", "Lima", "Spanish", "South America", "Bolivia, Brazil, Chile, Colombia, Ecuador", 
                "Pacific Ocean", "Pacific Ocean", "Red, White"),
        Country("Venezuela", "Caracas", "Spanish", "South America", "Brazil, Colombia, Guyana", 
                "Atlantic Ocean, Caribbean Sea", "Atlantic Ocean, Caribbean Sea", "Yellow, Blue, Red"),
        Country("Bolivia", "Sucre", "Spanish", "South America", "Argentina, Brazil, Chile, Paraguay, Peru", 
                "None", "None", "Red, Yellow, Green"),
        Country("Paraguay", "Asunción", "Spanish, Guarani", "South America", "Argentina, Bolivia, Brazil", 
                "None", "None", "Red, White, Blue"),
        Country("Uruguay", "Montevideo", "Spanish", "South America", "Argentina, Brazil", 
                "Atlantic Ocean", "Atlantic Ocean", "White, Blue"),
        Country("Australia", "Canberra", "English", "Oceania", "None", 
                "Indian Ocean, Pacific Ocean", "Indian Ocean, Pacific Ocean", "Blue, Red, White"),
        Country("New Zealand", "Wellington", "English, Maori", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, Red, White"),
        Country("Papua New Guinea", "Port Moresby", "English", "Oceania", "Indonesia, Solomon Islands", 
                "Pacific Ocean", "Pacific Ocean", "Black, Red, Yellow"),
        Country("Fiji", "Suva", "English, Fijian, Hindi", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, White"),
        Country("Solomon Islands", "Honiara", "English", "Oceania", "Papua New Guinea, Vanuatu", 
                "Pacific Ocean", "Pacific Ocean", "Blue, Yellow, Green"),
        Country("Vanuatu", "Port Vila", "Bislama, English, French", "Oceania", "Fiji, New Caledonia, Solomon Islands", 
                "Pacific Ocean", "Pacific Ocean", "Red, Green, Black, Yellow"),
        Country("Samoa", "Apia", "Samoan, English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Red, White, Blue"),
        Country("Tonga", "Nuku'alofa", "Tongan, English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Red, White"),
        Country("Tuvalu", "Funafuti", "Tuvaluan, English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, Yellow"),
        Country("Kiribati", "South Tarawa", "English, Gilbertese", "Oceania", "Marshall Islands, Micronesia, Nauru, Palau", 
                "Pacific Ocean", "Pacific Ocean", "Red, White"),
        Country("Marshall Islands", "Majuro", "Marshallese, English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, White"),
        Country("Micronesia", "Palikir", "English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, White"),
        Country("Palau", "Ngerulmud", "Palauan, English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, Yellow"),
        Country("Nauru", "Yaren", "Nauruan, English", "Oceania", "None", 
                "Pacific Ocean", "Pacific Ocean", "Blue, White, Yellow")
    };