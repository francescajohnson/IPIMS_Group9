/*

CREATE TABLE `user_data` (
  `user_id` int(8) NOT NULL AUTO_INCREMENT,
  `classification` varchar(16) NOT NULL,
  `first_name` varchar(45) NOT NULL,
  `last_name` varchar(45) NOT NULL,
  `gender` bit(1) DEFAULT NULL,
  `date_of_birth` date NOT NULL,
  `social_security_number` int(9) NOT NULL,
  `street_address` varchar(45) DEFAULT NULL,
  `city` varchar(45) DEFAULT NULL,
  `state` varchar(2) DEFAULT NULL,
  `zip_code` int(5) DEFAULT NULL,
  `phone_number` int(10) DEFAULT NULL,
  `email` varchar(45) NOT NULL,
  `username` varchar(45) DEFAULT NULL,
  `password` varchar(45) NOT NULL,
  `insurance_provider` varchar(45) DEFAULT NULL,
  `insurance_contact` int(10) DEFAULT NULL,
  PRIMARY KEY (`first_name`,`last_name`,`date_of_birth`),
  UNIQUE KEY `user_id_UNIQUE` (`user_id`));


*/