#!/usr/bin/python3
"""
Program to ssh to localhost and sleep 30 seconds
"""
import paramiko


client=paramiko.SSHClient()
client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
client.connect(hostname="localhost",password="nee123")

client.invoke_shell()

stdin, stdout, stderr = client.exec_command("sleep 30")

print (stdout.readlines())
