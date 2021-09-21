# Virtual Environment: an environment which is same as the
# system interpreter but is isolated from other python envs
# on the system.  Only a copy of interpreter is created.  No
# packages are present in this that are on system.  You need
# to install them using pip.

# To create a virtual environment, first install using:
# pip install virtualenv
# Then create one virtual environment using:
# virtualenv a_virtual_env
# Then activate this virtual environment to use this:
# linux users: source myprojectenv/bin/activate
# win users: .\myprojectenv\Scripts\activate.ps1
# for win users, use this: set-ExecutionPolicy Unrestriced -Force

# pip freeze returns all the packages in an environment, along
# with versions. pip freeze > "filename.txt" sends all the info
# to filename.txt file.

# To install the packages in a file in a new environment, use:
# pip install -r "filename.txt"