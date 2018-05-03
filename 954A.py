num=raw_input()
text=raw_input()

ru=text.count("RU")
ur=text.count("ur")

if ru>=ur:
	text=text.replace("RU","D")
	text=text.replace("UR","D")
else:
	text=text.replace("UR","D")
	text=text.replace("RU","D")

print len(text)

