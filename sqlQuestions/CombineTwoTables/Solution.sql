SELECT Person.firstName, Person.lastName, Address.city, Address.state
FROM Person
LEFT JOIN address ON Person.personId = Address.personId
WHERE Person.personId IS NOT NULL;