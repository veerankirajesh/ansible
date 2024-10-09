201.200.100.10
201.200.100.20

[localhost]
localhost


[localhost:vars]
Course="Ansible From inventory.inc"
Trainer="Pavan"
Duration="8HRS"


[cart]
201.200.100.3
201.200.100.4

[catalogue]
201.200.100.5
201.200.100.6

[roboshop:children]
web
cart
catalogue