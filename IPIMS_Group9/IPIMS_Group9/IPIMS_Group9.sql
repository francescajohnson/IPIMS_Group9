CREATE TABLE group9_ipims.user_data (
  classification varchar(1) NOT NULL,
  first_name varchar(45) NOT NULL,
  last_name varchar(45) NOT NULL,
  gender varchar(1) NOT NULL,
  date_of_birth date NOT NULL,
  social_security_number varchar(11) NOT NULL,
  street_address varchar(45) DEFAULT NULL,
  city varchar(45) DEFAULT NULL,
  state varchar(2) DEFAULT NULL,
  zip_code varchar(5) DEFAULT NULL,
  phone_number varchar(15) NOT NULL,
  email varchar(64) NOT NULL,
  username varchar(45) NOT NULL,
  password varchar(45) NOT NULL,
  insurance_provider varchar(45) DEFAULT NULL,
  insurance_contact varchar(15) DEFAULT NULL,
  PRIMARY KEY (first_name,last_name,date_of_birth,email,social_security_number,username)
);

CREATE TABLE group9_ipims.update_healthcare_data (
  first_name varchar(45) NOT NULL,
  last_name varchar(45) NOT NULL,
  date_of_birth varchar(45) NOT NULL,
  symptoms varchar(45) NOT NULL,
  alert varchar(1) DEFAULT NULL,
  doctor varchar(45) NOT NULL,
  PRIMARY KEY (date_of_birth,last_name,first_name)
);

CREATE TABLE group9_ipims.scheduled_appointment_data (
  first_name varchar(45) NOT NULL,
  last_name varchar(45) NOT NULL,
  date_of_birth varchar(45) NOT NULL,
  symptoms varchar(100) NOT NULL,
  appointment_date date NOT NULL,
  appointment_time time NOT NULL,
  doctor varchar(45) NOT NULL,
  alert varchar(1) DEFAULT NULL,
  PRIMARY KEY (first_name,last_name,date_of_birth)
);