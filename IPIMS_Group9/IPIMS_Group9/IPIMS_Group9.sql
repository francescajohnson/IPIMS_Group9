CREATE TABLE user_data (
  classification varchar(16) NOT NULL,
  first_name varchar(45) NOT NULL,
  last_name varchar(45) NOT NULL,
  gender bit(1) DEFAULT NULL,
  date_of_birth date NOT NULL,
  social_security_number int(9) NOT NULL,
  street_address varchar(45) DEFAULT NULL,
  city varchar(45) DEFAULT NULL,
  state varchar(2) DEFAULT NULL,
  zip_code int(5) DEFAULT NULL,
  phone_number int(10) DEFAULT NULL,
  email varchar(45) NOT NULL,
  username varchar(45) DEFAULT NULL,
  password varchar(45) NOT NULL,
  insurance_provider varchar(45) DEFAULT NULL,
  insurance_contact int(10) DEFAULT NULL,
  PRIMARY KEY (first_name,last_name,date_of_birth),
); ENGINE=InnoDB DEFAULT CHARSET=utf8

CREATE TABLE update_healthcare (
  first_name varchar(45) NOT NULL COMMENT 'First Name of patient',
  last_name varchar(45) NOT NULL COMMENT 'Last Name of patient',
  date_of_birth varchar(45) NOT NULL COMMENT 'Date of Birth',
  symptoms varchar(45) NOT NULL COMMENT 'Symptoms',
  alert tinyint(4) DEFAULT NULL COMMENT 'Emergency checkbox',
  doctor varchar(45) NOT NULL,
  PRIMARY KEY (date_of_birth,last_name,first_name)
); ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Update Healthcare Condition of patient'

CREATE TABLE appointment_data (
  first_name varchar(45) NOT NULL,
  last_name varchar(45) NOT NULL,
  date_of_birth varchar(45) NOT NULL,
  symptoms varchar(100) NOT NULL,
  appointment_date date NOT NULL,
  appointment_time time(6) NOT NULL,
  doctor varchar(45) NOT NULL,
  alert int(11) DEFAULT NULL,
  PRIMARY KEY (first_name,last_name,date_of_birth)
); ENGINE=InnoDB DEFAULT CHARSET=utf8