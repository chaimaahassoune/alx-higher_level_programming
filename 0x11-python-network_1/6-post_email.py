#!/usr/bin/python3
"""A script that:
- takes in a URL,
- sends a request to the URL and displays the value
- of the X-Request-Id variable
"""
import requests
import sys

if __name__ == "__main__":
    # Check the number of arguments
    if len(sys.argv) != 3:
        print("Usage: ./6-post_email.py <URL> <email>")
        sys.exit(1)

    # Extract URL and email from command line arguments
    url = sys.argv[1]
    email = sys.argv[2]

    # Create a dictionary with the email parameter
    data = {'email': email}

    # Send a POST request with the email parameter
    response = requests.post(url, data=data)

    # Print the email and the response body
    print(f"Your email is: {email}")
    print(response.text)
