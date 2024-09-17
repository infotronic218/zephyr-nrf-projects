# Open the text file in read mode
with open('data.json', 'r') as text_file:
    # Read the content of the text file
    text_content = text_file.read()


print(text_content)
# Open the binary file in write mode
with open('output.bin', 'wb') as bin_file:
    # Convert the text content to bytes and write to the binary file
    data = text_content.encode('utf-8')
    print(type(data))
    bin_file.write(data)
    bin_file.close()
