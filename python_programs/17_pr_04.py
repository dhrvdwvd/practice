st = "This is a string with double  spaces    ok."
st = st.replace("  ", " ")
print(st)
# Note that for spaces    ok, after removing double spaces, we
# should again pass the string to totally remove the spaces.