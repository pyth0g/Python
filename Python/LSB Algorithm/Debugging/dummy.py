final = "Hello World!"

just = len(max(final.split("\n"), key=len))

print(f"Contents:\n{'-'*(just + 4)}")
for i in final.split("\n"):
    print(("| "+i).ljust(just)+" |")
print("-"*(just + 4))