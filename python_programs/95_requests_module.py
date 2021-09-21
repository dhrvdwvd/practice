import requests

# Now let's try to get a webpage. For this e.g., let's try
# to get Github's public timeline:
r = requests.get("https://api.github.com/events")

# Now we have a Response object called r.  We can get all the
# information from this object.

# Requests' simple API means that all HTTP requests are obvious.
# For e.g., this is how you make a HTTP POST request.
r = requests.post("http://httpbin.org/post", data = {'key':'value'})

# Keep visiting this file and understand this module completely.